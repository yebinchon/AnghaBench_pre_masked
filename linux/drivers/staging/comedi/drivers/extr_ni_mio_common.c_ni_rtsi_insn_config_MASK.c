
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int clock_source; unsigned int clock_ns; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {struct ni_private* private; } ;




 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;





 int FUNC_1 (struct comedi_device*,unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_5 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned int *VAR_4)
{
 struct ni_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);

 switch (VAR_4[0]) {
 case 133:
 case 134:
  FUNC_4(VAR_1, VAR_6, VAR_4[0]);
  break;
 case 132: {
  int VAR_7 = FUNC_1(VAR_1, VAR_6);

  if (VAR_7 < 0)
   return VAR_7;
  VAR_4[1] = VAR_7;
  return 2;
 }
 case 129:
  return FUNC_3(VAR_1, VAR_4[1], VAR_4[2]);
 case 131:
  VAR_4[1] = VAR_5->clock_source;
  VAR_4[2] = VAR_5->clock_ns;
  return 3;
 case 128:
  return FUNC_5(VAR_1, VAR_6, VAR_4[1]);
 case 130: {
  int VAR_8 = FUNC_2(VAR_1, VAR_6);

  if (VAR_8 < 0)
   return VAR_8;
  VAR_4[1] = VAR_8;
  return 2;
 }
 default:
  return -VAR_0;
 }
 return 1;
}
