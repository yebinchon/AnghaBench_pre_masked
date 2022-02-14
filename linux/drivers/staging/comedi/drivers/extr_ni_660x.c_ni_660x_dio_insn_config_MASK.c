
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;






 unsigned int FUNC_1 (struct comedi_device*,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_4 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_5 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5,
       unsigned int *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_5->chanspec);
 int VAR_8;

 switch (VAR_6[0]) {
 case 132:
  FUNC_3(VAR_3, VAR_7, VAR_1);
  break;

 case 133:
  FUNC_3(VAR_3, VAR_7, VAR_0);
  break;

 case 131:
  VAR_6[1] = FUNC_1(VAR_3, VAR_7);
  break;

 case 128:
  VAR_8 = FUNC_5(VAR_3, VAR_7, VAR_6[1]);
  if (VAR_8)
   return VAR_8;
  break;

 case 129:
  VAR_6[1] = FUNC_2(VAR_3, VAR_7);
  break;

 case 130:
  FUNC_4(VAR_3, VAR_7, VAR_6[1]);
  break;

 default:
  return -VAR_2;
 }

 return VAR_5->n;
}
