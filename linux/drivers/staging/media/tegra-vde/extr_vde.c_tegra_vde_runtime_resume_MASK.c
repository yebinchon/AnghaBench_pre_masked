
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde {int rst; int clk; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct tegra_vde* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct tegra_vde *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0,
      VAR_2->clk, VAR_2->rst);
 if (VAR_3) {
  FUNC_0(VAR_1, "Failed to power up HW : %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
