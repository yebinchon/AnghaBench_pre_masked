
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_nand_controller {int clk; struct nand_chip* chip; } ;
struct platform_device {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 struct tegra_nand_controller* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct tegra_nand_controller *VAR_1 = FUNC_4(VAR_0);
 struct nand_chip *VAR_2 = VAR_1->chip;
 struct mtd_info *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2);

 FUNC_0(VAR_1->clk);

 return 0;
}
