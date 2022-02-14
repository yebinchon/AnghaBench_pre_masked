
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_nand_controller {int dev; scalar_t__ regs; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 char** VAR_0 ;

__attribute__((used)) static void FUNC_3(struct tegra_nand_controller *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 FUNC_1(VAR_1->dev, "Tegra NAND controller register dump\n");
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  const char *VAR_4 = VAR_0[VAR_3];

  if (!VAR_4)
   continue;

  VAR_2 = FUNC_2(VAR_1->regs + (VAR_3 * 4));
  FUNC_1(VAR_1->dev, "%s: 0x%08x\n", VAR_4, VAR_2);
 }
}
