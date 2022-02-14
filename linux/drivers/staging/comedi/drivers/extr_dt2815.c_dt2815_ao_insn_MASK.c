
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt2815_private {unsigned int* ao_readback; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct dt2815_private* private; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 struct dt2815_private *VAR_6 = VAR_2->private;
 int VAR_7;
 int VAR_8 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_9, VAR_10;
 int VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_4->n; VAR_7++) {
  VAR_9 = ((VAR_5[VAR_7] & 0x0f) << 4) | (VAR_8 << 1) | 0x01;
  VAR_10 = (VAR_5[VAR_7] & 0xff0) >> 4;

  VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1, 0x00);
  if (VAR_11)
   return VAR_11;

  FUNC_2(VAR_9, VAR_2->iobase + VAR_0);

  VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1, 0x10);
  if (VAR_11)
   return VAR_11;

  VAR_6->ao_readback[VAR_8] = VAR_5[VAR_7];
 }
 return VAR_7;
}
