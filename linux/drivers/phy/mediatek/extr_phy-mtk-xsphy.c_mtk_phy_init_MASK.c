
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsphy_instance {int type; int ref_clk; } ;
struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mtk_xsphy {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct mtk_xsphy* FUNC_3 (int ) ;
 struct xsphy_instance* FUNC_4 (struct phy*) ;
 int FUNC_5 (struct mtk_xsphy*,struct xsphy_instance*) ;
 int FUNC_6 (struct mtk_xsphy*,struct xsphy_instance*) ;
 int FUNC_7 (struct mtk_xsphy*,struct xsphy_instance*) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_1)
{
 struct xsphy_instance *VAR_2 = FUNC_4(VAR_1);
 struct mtk_xsphy *VAR_3 = FUNC_3(VAR_1->dev.parent);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->ref_clk);
 if (VAR_4) {
  FUNC_2(VAR_3->dev, "failed to enable ref_clk\n");
  return VAR_4;
 }

 switch (VAR_2->type) {
 case 129:
  FUNC_5(VAR_3, VAR_2);
  FUNC_6(VAR_3, VAR_2);
  break;
 case 128:
  FUNC_7(VAR_3, VAR_2);
  break;
 default:
  FUNC_2(VAR_3->dev, "incompatible phy type\n");
  FUNC_0(VAR_2->ref_clk);
  return -VAR_0;
 }

 return 0;
}
