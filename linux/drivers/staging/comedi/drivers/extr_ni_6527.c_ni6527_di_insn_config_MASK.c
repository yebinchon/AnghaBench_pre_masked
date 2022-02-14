
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni6527_private {int filter_enable; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct ni6527_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 struct ni6527_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_7;

 switch (VAR_4[0]) {
 case 128:





  VAR_7 = (VAR_4[1] + 100) / 200;
  VAR_4[1] = VAR_7 * 200;

  if (VAR_7) {
   FUNC_2(VAR_1, VAR_7);
   VAR_5->filter_enable |= 1 << VAR_6;
  } else {
   VAR_5->filter_enable &= ~(1 << VAR_6);
  }
  FUNC_1(VAR_1, VAR_5->filter_enable);
  break;
 default:
  return -VAR_0;
 }

 return VAR_3->n;
}
