
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int controller; } ;
struct atmel_smc_nand_controller {TYPE_2__* ebi_csa; int ebi_csa_regmap; } ;
struct atmel_nand_controller {int dummy; } ;
struct atmel_nand {int numcs; TYPE_1__* cs; struct nand_chip base; } ;
struct TYPE_4__ {scalar_t__ nfd0_on_d16; int offs; } ;
struct TYPE_3__ {int id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct atmel_nand_controller*,struct atmel_nand*) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 struct atmel_smc_nand_controller* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct atmel_nand_controller *VAR_0,
    struct atmel_nand *VAR_1)
{
 struct nand_chip *VAR_2 = &VAR_1->base;
 struct atmel_smc_nand_controller *VAR_3;
 int VAR_4;

 FUNC_1(VAR_0, VAR_1);

 VAR_3 = FUNC_3(VAR_2->controller);
 if (!VAR_3->ebi_csa_regmap)
  return;


 for (VAR_4 = 0; VAR_4 < VAR_1->numcs; VAR_4++)
  FUNC_2(VAR_3->ebi_csa_regmap,
       VAR_3->ebi_csa->offs,
       FUNC_0(VAR_1->cs[VAR_4].id), FUNC_0(VAR_1->cs[VAR_4].id));

 if (VAR_3->ebi_csa->nfd0_on_d16)
  FUNC_2(VAR_3->ebi_csa_regmap,
       VAR_3->ebi_csa->offs,
       VAR_3->ebi_csa->nfd0_on_d16,
       VAR_3->ebi_csa->nfd0_on_d16);
}
