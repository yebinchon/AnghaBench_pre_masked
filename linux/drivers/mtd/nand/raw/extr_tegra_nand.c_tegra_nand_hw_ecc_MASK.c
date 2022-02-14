
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_nand_controller {scalar_t__ regs; } ;
struct tegra_nand_chip {int config; int config_ecc; int bch_config; } ;
struct TYPE_2__ {scalar_t__ algo; } ;
struct nand_chip {TYPE_1__ ecc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tegra_nand_chip* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tegra_nand_controller *VAR_3,
         struct nand_chip *VAR_4, bool VAR_5)
{
 struct tegra_nand_chip *VAR_6 = FUNC_0(VAR_4);

 if (VAR_4->ecc.algo == VAR_2 && VAR_5)
  FUNC_1(VAR_6->bch_config, VAR_3->regs + VAR_0);
 else
  FUNC_1(0, VAR_3->regs + VAR_0);

 if (VAR_5)
  FUNC_1(VAR_6->config_ecc, VAR_3->regs + VAR_1);
 else
  FUNC_1(VAR_6->config, VAR_3->regs + VAR_1);
}
