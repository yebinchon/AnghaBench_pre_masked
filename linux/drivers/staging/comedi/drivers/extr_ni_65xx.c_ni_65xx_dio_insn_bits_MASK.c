
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int n_chan; unsigned int io_bits; scalar_t__ private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;
 unsigned int VAR_5 = FUNC_0(VAR_2->chanspec);
 int VAR_6 = FUNC_1(VAR_1->n_chan - 1);
 unsigned int VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = FUNC_1(VAR_5);
      VAR_8 <= VAR_6; VAR_8++) {
  unsigned int VAR_9 = VAR_4 + VAR_8;
  int VAR_10 = FUNC_3(VAR_8);
  unsigned int VAR_11, VAR_12, VAR_13;
  int VAR_14 = VAR_10 - VAR_5;

  if (VAR_14 >= 32)
   break;
  VAR_11 = VAR_3[0];
  VAR_12 = VAR_3[1];
  if (VAR_14 > 0) {
   VAR_11 >>= VAR_14;
   VAR_12 >>= VAR_14;
  } else {
   VAR_11 <<= -VAR_14;
   VAR_12 <<= -VAR_14;
  }
  VAR_11 &= 0xff;
  VAR_12 &= 0xff;


  if (VAR_11) {
   VAR_13 = FUNC_4(VAR_0->mmio + FUNC_2(VAR_9));
   VAR_13 ^= VAR_1->io_bits;
   VAR_13 &= ~VAR_11;
   VAR_13 |= (VAR_12 & VAR_11);
   VAR_13 ^= VAR_1->io_bits;
   FUNC_5(VAR_13, VAR_0->mmio + FUNC_2(VAR_9));
  }


  VAR_13 = FUNC_4(VAR_0->mmio + FUNC_2(VAR_9));
  VAR_13 ^= VAR_1->io_bits;
  if (VAR_14 > 0)
   VAR_13 <<= VAR_14;
  else
   VAR_13 >>= -VAR_14;

  VAR_7 |= VAR_13;
 }
 VAR_3[1] = VAR_7;
 return VAR_2->n;
}
