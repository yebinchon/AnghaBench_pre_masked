
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {int n; } ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(struct comedi_insn *VAR_1,
        unsigned int *VAR_2)
{
 if (VAR_1->n < 1)
  return -VAR_0;

 switch (VAR_2[0]) {
 case 128:
 case 131:
 case 130:
  if (VAR_1->n == 3)
   return 0;
  break;
 case 129:





  if (VAR_1->n >= 2)
   return 0;
  break;
 }
 return -VAR_0;
}
