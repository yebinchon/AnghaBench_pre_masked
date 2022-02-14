
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_phy_ctx {scalar_t__ mode; int dev; } ;
typedef enum clk_type_t { ____Placeholder_clk_type_t } clk_type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct xgene_phy_ctx*,int,int) ;

__attribute__((used)) static int FUNC_3(struct xgene_phy_ctx *VAR_2,
       enum clk_type_t VAR_3,
       int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2->dev, "PHY init clk type %d\n", VAR_3);

 if (VAR_2->mode == VAR_1) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 } else {
  FUNC_1(VAR_2->dev, "Un-supported customer pin mode %d\n",
   VAR_2->mode);
  return -VAR_0;
 }

 return 0;
}
