
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dev; } ;
struct mixel_dphy_priv {int phy_ref_clk; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct mixel_dphy_priv* FUNC_3 (struct phy*) ;
 int FUNC_4 (struct phy*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct phy *VAR_6)
{
 struct mixel_dphy_priv *VAR_7 = FUNC_3(VAR_6);
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7->phy_ref_clk);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_4(VAR_6, VAR_5, VAR_2);
 VAR_9 = FUNC_5(VAR_7->regmap, VAR_0, VAR_8,
           VAR_8, VAR_3,
           VAR_4);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_6->dev, "Could not get DPHY lock (%d)!\n", VAR_9);
  goto clock_disable;
 }
 FUNC_4(VAR_6, VAR_5, VAR_1);

 return 0;
clock_disable:
 FUNC_0(VAR_7->phy_ref_clk);
 return VAR_9;
}
