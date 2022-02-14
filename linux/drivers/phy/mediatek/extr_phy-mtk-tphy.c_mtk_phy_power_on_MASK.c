
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mtk_tphy {int dummy; } ;
struct mtk_phy_instance {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mtk_tphy* FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 int FUNC_2 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 struct mtk_phy_instance* FUNC_3 (struct phy*) ;
 int FUNC_4 (struct mtk_tphy*,struct mtk_phy_instance*) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_2)
{
 struct mtk_phy_instance *VAR_3 = FUNC_3(VAR_2);
 struct mtk_tphy *VAR_4 = FUNC_0(VAR_2->dev.parent);

 if (VAR_3->type == VAR_1) {
  FUNC_4(VAR_4, VAR_3);
  FUNC_1(VAR_4, VAR_3);
 } else if (VAR_3->type == VAR_0) {
  FUNC_2(VAR_4, VAR_3);
 }

 return 0;
}
