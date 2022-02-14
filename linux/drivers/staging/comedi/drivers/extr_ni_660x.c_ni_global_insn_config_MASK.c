
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (unsigned int,unsigned int,struct comedi_device*) ;
 int FUNC_1 (unsigned int,unsigned int,struct comedi_device*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int,struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 switch (VAR_3[0]) {
 case 128:
  VAR_3[0] = FUNC_2(VAR_3[1], VAR_3[2], VAR_1);
  return 2;
 case 130:
  return FUNC_0(VAR_3[1], VAR_3[2], VAR_1);
 case 129:
  return FUNC_1(VAR_3[1], VAR_3[2], VAR_1);




 default:
  return -VAR_0;
 }
 return 1;
}
