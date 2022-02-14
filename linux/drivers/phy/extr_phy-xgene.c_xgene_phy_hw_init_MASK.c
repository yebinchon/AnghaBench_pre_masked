
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_phy_ctx {int dev; int clk; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 struct xgene_phy_ctx* FUNC_5 (struct phy*) ;
 int FUNC_6 (struct xgene_phy_ctx*,int) ;
 int FUNC_7 (struct xgene_phy_ctx*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_3)
{
 struct xgene_phy_ctx *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_7(VAR_4, VAR_0, VAR_2);
 if (VAR_5) {
  FUNC_4(VAR_4->dev, "PHY initialize failed %d\n", VAR_5);
  return VAR_5;
 }


 if (!FUNC_0(VAR_4->clk)) {

  FUNC_2(VAR_4->clk);
  FUNC_1(VAR_4->clk);
  FUNC_2(VAR_4->clk);
 }


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_6(VAR_4, VAR_6);

 FUNC_3(VAR_4->dev, "PHY initialized\n");
 return 0;
}
