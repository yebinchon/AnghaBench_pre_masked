
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct exynos_pcie_phy {int phy_base; int blk_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct exynos_pcie_phy* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_14)
{
 struct exynos_pcie_phy *VAR_15 = FUNC_2(VAR_14);
 u32 VAR_16;

 FUNC_1(VAR_15->blk_base, 0, VAR_3);
 FUNC_1(VAR_15->blk_base, 0, VAR_0);
 FUNC_1(VAR_15->blk_base, 0, VAR_12);
 FUNC_1(VAR_15->blk_base, 0, VAR_13);

 VAR_16 = FUNC_0(VAR_15->phy_base, VAR_2);
 VAR_16 &= ~VAR_1;
 FUNC_1(VAR_15->phy_base, VAR_16, VAR_2);

 VAR_16 = FUNC_0(VAR_15->phy_base, VAR_5);
 VAR_16 &= ~VAR_4;
 FUNC_1(VAR_15->phy_base, VAR_16, VAR_5);

 VAR_16 = FUNC_0(VAR_15->phy_base, VAR_7);
 VAR_16 &= ~VAR_6;
 FUNC_1(VAR_15->phy_base, VAR_16, VAR_7);

 VAR_16 = FUNC_0(VAR_15->phy_base, VAR_9);
 VAR_16 &= ~VAR_8;
 FUNC_1(VAR_15->phy_base, VAR_16, VAR_9);

 VAR_16 = FUNC_0(VAR_15->phy_base, VAR_11);
 VAR_16 &= ~VAR_10;
 FUNC_1(VAR_15->phy_base, VAR_16, VAR_11);

 return 0;
}
