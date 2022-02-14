
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int prot_op; } ;
__attribute__((used)) static inline int
FUNC_0(struct se_cmd *VAR_0)
{
 switch (VAR_0->prot_op) {
 case 133:
 case 130:
 case 131:
 case 128:
 case 132:
 case 129:
     return 1;
 default:
     return 0;
 }
 return 0;
}
