
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;




 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;




 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_3 (struct comedi_device*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_5 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         struct comedi_insn *VAR_3,
         unsigned int *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_3->n < 1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3->chanspec);

 switch (VAR_4[0]) {
 case 132:
 case 133:
  FUNC_4(VAR_1, VAR_5, VAR_4[0]);
  break;
 case 131:
  VAR_4[1] = FUNC_2(VAR_1, VAR_5);
  break;
 case 128:
  return FUNC_5(VAR_1, VAR_5, VAR_4[1]);
 case 129:
  VAR_4[1] = FUNC_3(VAR_1, VAR_5);
  break;
 case 130:
  return FUNC_1(VAR_1, VAR_5, VAR_4[1]);
 default:
  return -VAR_0;
 }
 return 0;
}
