
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mtk_tphy {int dev; int u3phya_ref; } ;
struct mtk_phy_instance {int type; int ref_clk; } ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct mtk_tphy* FUNC_2 (int ) ;
 int FUNC_3 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 struct mtk_phy_instance* FUNC_4 (struct phy*) ;
 int FUNC_5 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 int FUNC_6 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 int FUNC_7 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 int FUNC_8 (struct mtk_tphy*,struct mtk_phy_instance*) ;

__attribute__((used)) static int FUNC_9(struct phy *VAR_1)
{
 struct mtk_phy_instance *VAR_2 = FUNC_4(VAR_1);
 struct mtk_tphy *VAR_3 = FUNC_2(VAR_1->dev.parent);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->u3phya_ref);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "failed to enable u3phya_ref\n");
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_2->ref_clk);
 if (VAR_4) {
  FUNC_1(VAR_3->dev, "failed to enable ref_clk\n");
  return VAR_4;
 }

 switch (VAR_2->type) {
 case 129:
  FUNC_6(VAR_3, VAR_2);
  FUNC_7(VAR_3, VAR_2);
  break;
 case 128:
  FUNC_8(VAR_3, VAR_2);
  break;
 case 131:
  FUNC_3(VAR_3, VAR_2);
  break;
 case 130:
  FUNC_5(VAR_3, VAR_2);
  break;
 default:
  FUNC_1(VAR_3->dev, "incompatible PHY type\n");
  return -VAR_0;
 }

 return 0;
}
