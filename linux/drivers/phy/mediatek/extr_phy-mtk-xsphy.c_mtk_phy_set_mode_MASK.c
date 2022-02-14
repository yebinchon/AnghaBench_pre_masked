
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsphy_instance {scalar_t__ type; } ;
struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mtk_xsphy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 scalar_t__ VAR_0 ;
 struct mtk_xsphy* FUNC_0 (int ) ;
 struct xsphy_instance* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct mtk_xsphy*,struct xsphy_instance*,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1, enum phy_mode VAR_2, int VAR_3)
{
 struct xsphy_instance *VAR_4 = FUNC_1(VAR_1);
 struct mtk_xsphy *VAR_5 = FUNC_0(VAR_1->dev.parent);

 if (VAR_4->type == VAR_0)
  FUNC_2(VAR_5, VAR_4, VAR_2);

 return 0;
}
