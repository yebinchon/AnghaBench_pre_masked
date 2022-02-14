
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das800_private {unsigned int do_bits; } ;
struct comedi_subdevice {int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; int spinlock; struct das800_private* private; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_3 ;
 unsigned int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5,
          struct comedi_insn *VAR_6,
          unsigned int *VAR_7)
{
 struct das800_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9 = FUNC_0(VAR_6->chanspec);
 unsigned int VAR_10 = FUNC_1(VAR_6->chanspec);
 unsigned long VAR_11;
 unsigned int VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_4(VAR_4);


 FUNC_8(&VAR_4->spinlock, VAR_11);
 FUNC_5(VAR_4, VAR_9 | VAR_8->do_bits, VAR_0);
 FUNC_9(&VAR_4->spinlock, VAR_11);


 if (VAR_5->maxdata == 0x0fff && VAR_10)
  VAR_10 += 0x7;
 VAR_10 &= 0xf;
 FUNC_6(VAR_10, VAR_4->iobase + VAR_1);

 FUNC_10(5);

 for (VAR_14 = 0; VAR_14 < VAR_6->n; VAR_14++) {

  FUNC_7(0, VAR_4->iobase + VAR_2);

  VAR_13 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3, 0);
  if (VAR_13)
   return VAR_13;

  VAR_12 = FUNC_3(VAR_4);
  if (VAR_5->maxdata == 0x0fff)
   VAR_12 >>= 4;
  VAR_7[VAR_14] = VAR_12 & VAR_5->maxdata;
 }

 return VAR_6->n;
}
