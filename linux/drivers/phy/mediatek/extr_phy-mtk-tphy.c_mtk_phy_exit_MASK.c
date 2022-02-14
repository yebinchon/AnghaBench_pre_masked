
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mtk_tphy {int u3phya_ref; } ;
struct mtk_phy_instance {scalar_t__ type; int ref_clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_tphy* FUNC_1 (int ) ;
 struct mtk_phy_instance* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct mtk_tphy*,struct mtk_phy_instance*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_1)
{
 struct mtk_phy_instance *VAR_2 = FUNC_2(VAR_1);
 struct mtk_tphy *VAR_3 = FUNC_1(VAR_1->dev.parent);

 if (VAR_2->type == VAR_0)
  FUNC_3(VAR_3, VAR_2);

 FUNC_0(VAR_2->ref_clk);
 FUNC_0(VAR_3->u3phya_ref);
 return 0;
}
