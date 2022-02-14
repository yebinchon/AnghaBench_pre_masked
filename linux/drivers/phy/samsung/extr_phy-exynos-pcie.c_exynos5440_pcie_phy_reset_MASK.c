
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct exynos_pcie_phy {int blk_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 struct exynos_pcie_phy* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_2)
{
 struct exynos_pcie_phy *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->blk_base, 0, VAR_1);
 FUNC_0(VAR_3->blk_base, 1, VAR_0);
 FUNC_0(VAR_3->blk_base, 0, VAR_0);

 return 0;
}
