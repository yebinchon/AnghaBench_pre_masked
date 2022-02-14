
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tegra_nand_controller {int dummy; } ;
struct nand_chip {int * oob_poi; int controller; } ;
struct mtd_info {int dummy; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct tegra_nand_controller*,struct nand_chip*,int) ;
 int FUNC_2 (struct mtd_info*,struct nand_chip*,void*,void*,int ,int,int) ;
 struct tegra_nand_controller* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, const u8 *VAR_1,
           int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_0);
 struct tegra_nand_controller *VAR_5 = FUNC_3(VAR_0->controller);
 void *VAR_6 = VAR_2 ? VAR_0->oob_poi : ((void*)0);
 int VAR_7;

 FUNC_1(VAR_5, VAR_0, 1);
 VAR_7 = FUNC_2(VAR_4, VAR_0, (void *)VAR_1, VAR_6,
       0, VAR_3, 0);
 FUNC_1(VAR_5, VAR_0, 0);

 return VAR_7;
}
