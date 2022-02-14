
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int select_chip; int cmd_ctrl; } ;
struct nand_chip {TYPE_1__ legacy; } ;
struct atmel_nand_controller {int dummy; } ;
struct atmel_nand {struct nand_chip base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_nand_controller*,struct atmel_nand*) ;

__attribute__((used)) static void FUNC_1(struct atmel_nand_controller *VAR_2,
     struct atmel_nand *VAR_3)
{
 struct nand_chip *VAR_4 = &VAR_3->base;

 FUNC_0(VAR_2, VAR_3);


 VAR_4->legacy.cmd_ctrl = VAR_0;
 VAR_4->legacy.select_chip = VAR_1;
}
