
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16cs_private {int misc2; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; struct das16cs_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4,
           struct comedi_subdevice *VAR_5,
           struct comedi_insn *VAR_6,
           unsigned int *VAR_7)
{
 struct das16cs_private *VAR_8 = VAR_4->private;

 switch (VAR_7[0]) {
 case 128:
  switch (VAR_7[1]) {
  case 0:
   VAR_8->misc2 |= VAR_0;
   break;
  case 1:
   VAR_8->misc2 &= ~VAR_0;
   break;
  default:
   return -VAR_2;
  }
  FUNC_0(VAR_8->misc2, VAR_4->iobase + VAR_1);
  break;
 case 129:
  if (VAR_8->misc2 & VAR_0) {
   VAR_7[1] = 0;
   VAR_7[2] = VAR_3;
  } else {
   VAR_7[1] = 1;
   VAR_7[2] = 0;
  }
  break;
 default:
  return -VAR_2;
 }

 return VAR_6->n;
}
