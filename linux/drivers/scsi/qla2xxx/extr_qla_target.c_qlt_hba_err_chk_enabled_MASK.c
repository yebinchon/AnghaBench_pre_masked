
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int prot_op; } ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct se_cmd *VAR_1)
{
 switch (VAR_1->prot_op) {
 case 130:
 case 131:
  if (VAR_0 >= 1)
   return 1;
  break;
 case 129:
 case 132:
  if (VAR_0 >= 2)
   return 1;
  break;
 case 133:
 case 128:
  return 1;
 default:
  break;
 }
 return 0;
}
