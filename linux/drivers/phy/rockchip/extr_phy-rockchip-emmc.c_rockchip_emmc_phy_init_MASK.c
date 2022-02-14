
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_emmc_phy {int * emmcclk; } ;
struct phy {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 struct rockchip_emmc_phy* FUNC_3 (struct phy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct rockchip_emmc_phy *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = 0;
 VAR_1->emmcclk = FUNC_1(&VAR_0->dev, "emmcclk");
 if (FUNC_0(VAR_1->emmcclk)) {
  FUNC_2(&VAR_0->dev, "Error getting emmcclk: %d\n", VAR_2);
  VAR_1->emmcclk = ((void*)0);
 }

 return VAR_2;
}
