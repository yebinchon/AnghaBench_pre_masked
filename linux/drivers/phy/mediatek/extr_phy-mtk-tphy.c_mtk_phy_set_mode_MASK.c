
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mtk_tphy {int dummy; } ;
struct mtk_phy_instance {scalar_t__ type; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 scalar_t__ VAR_0 ;
 struct mtk_tphy* FUNC_0 (int ) ;
 struct mtk_phy_instance* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct mtk_tphy*,struct mtk_phy_instance*,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1, enum phy_mode VAR_2, int VAR_3)
{
 struct mtk_phy_instance *VAR_4 = FUNC_1(VAR_1);
 struct mtk_tphy *VAR_5 = FUNC_0(VAR_1->dev.parent);

 if (VAR_4->type == VAR_0)
  FUNC_2(VAR_5, VAR_4, VAR_2);

 return 0;
}
