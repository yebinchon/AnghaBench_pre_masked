
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;


__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);

 switch (VAR_5[0]) {
 case 128:




  VAR_5[0] = 0;
  VAR_5[1] = (VAR_6 == 1) ? VAR_1 : 0;
  break;
 default:
  return -VAR_0;
 }

 return VAR_4->n;
}
