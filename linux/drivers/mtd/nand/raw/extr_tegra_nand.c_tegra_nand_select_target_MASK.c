
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_nand_controller {int cur_cs; } ;
struct tegra_nand_chip {int * cs; } ;
struct nand_chip {int controller; } ;


 struct tegra_nand_chip* FUNC_0 (struct nand_chip*) ;
 struct tegra_nand_controller* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0,
         unsigned int VAR_1)
{
 struct tegra_nand_chip *VAR_2 = FUNC_0(VAR_0);
 struct tegra_nand_controller *VAR_3 = FUNC_1(VAR_0->controller);

 VAR_3->cur_cs = VAR_2->cs[VAR_1];
}
