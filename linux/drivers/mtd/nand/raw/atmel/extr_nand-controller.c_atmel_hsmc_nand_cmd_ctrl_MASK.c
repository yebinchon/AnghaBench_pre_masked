
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int controller; } ;
struct atmel_nand {TYPE_2__* activecs; } ;
struct TYPE_3__ {scalar_t__ naddrs; int* addrs; int ncmds; int* cmds; int cs; } ;
struct atmel_hsmc_nand_controller {TYPE_1__ op; } ;
struct TYPE_4__ {int id; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atmel_hsmc_nand_controller*,int) ;
 struct atmel_nand* FUNC_1 (struct nand_chip*) ;
 struct atmel_hsmc_nand_controller* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_4, int VAR_5,
         unsigned int VAR_6)
{
 struct atmel_nand *VAR_7 = FUNC_1(VAR_4);
 struct atmel_hsmc_nand_controller *VAR_8;

 VAR_8 = FUNC_2(VAR_4->controller);

 if (VAR_6 & VAR_1) {
  if (VAR_8->op.naddrs == VAR_0)
   return;

  VAR_8->op.addrs[VAR_8->op.naddrs++] = VAR_5;
 } else if (VAR_6 & VAR_2) {
  if (VAR_8->op.ncmds > 1)
   return;

  VAR_8->op.cmds[VAR_8->op.ncmds++] = VAR_5;
 }

 if (VAR_5 == VAR_3) {
  VAR_8->op.cs = VAR_7->activecs->id;
  FUNC_0(VAR_8, 1);
 }
}
