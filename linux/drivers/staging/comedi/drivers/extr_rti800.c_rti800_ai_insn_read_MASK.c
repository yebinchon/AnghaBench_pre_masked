
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rti800_private {unsigned char muxgain_bits; scalar_t__ adc_2comp; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct rti800_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned char,scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6,
          struct comedi_subdevice *VAR_7,
          struct comedi_insn *VAR_8,
          unsigned int *VAR_9)
{
 struct rti800_private *VAR_10 = VAR_6->private;
 unsigned int VAR_11 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_12 = FUNC_1(VAR_8->chanspec);
 unsigned char VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_4(VAR_6->iobase + VAR_0);
 FUNC_5(0, VAR_6->iobase + VAR_2);

 VAR_13 = VAR_11 | (VAR_12 << 5);
 if (VAR_13 != VAR_10->muxgain_bits) {
  VAR_10->muxgain_bits = VAR_13;
  FUNC_5(VAR_10->muxgain_bits, VAR_6->iobase + VAR_4);




  if (VAR_8->n > 0) {
   int VAR_16 = (VAR_12 == 0) ? 10 :
        (VAR_12 == 1) ? 20 :
        (VAR_12 == 2) ? 40 : 80;

   FUNC_6(VAR_16);
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_8->n; VAR_15++) {
  unsigned int VAR_17;

  FUNC_5(0, VAR_6->iobase + VAR_3);

  VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5, 0);
  if (VAR_14)
   return VAR_14;

  VAR_17 = FUNC_4(VAR_6->iobase + VAR_1);
  VAR_17 |= (FUNC_4(VAR_6->iobase + VAR_0) & 0xf) << 8;

  if (VAR_10->adc_2comp)
   VAR_17 = FUNC_2(VAR_7, VAR_17);

  VAR_9[VAR_15] = VAR_17;
 }

 return VAR_8->n;
}
