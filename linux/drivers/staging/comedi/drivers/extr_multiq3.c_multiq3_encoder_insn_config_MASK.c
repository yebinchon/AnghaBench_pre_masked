
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

 int FUNC_1 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
           struct comedi_subdevice *VAR_2,
           struct comedi_insn *VAR_3,
           unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);

 switch (VAR_4[0]) {
 case 128:
  FUNC_1(VAR_1, VAR_5);
  break;
 default:
  return -VAR_0;
 }

 return VAR_3->n;
}
