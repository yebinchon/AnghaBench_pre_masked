
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_ctrl; int select_chip; int cmdfunc; } ;
struct nand_chip {TYPE_1__ legacy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct nand_chip *VAR_1)
{




 if (FUNC_0(VAR_1))
  return 0;






 if ((!VAR_1->legacy.cmdfunc || !VAR_1->legacy.select_chip) &&
     !VAR_1->legacy.cmd_ctrl) {
  FUNC_1("->legacy.cmd_ctrl() should be provided\n");
  return -VAR_0;
 }

 return 0;
}
