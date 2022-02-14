
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_u2phy_priv {struct phy* phy; struct uniphier_u2phy_priv* next; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct of_phandle_args {scalar_t__ np; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct uniphier_u2phy_priv* FUNC_2 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_3(struct device *VAR_1,
     struct of_phandle_args *VAR_2)
{
 struct uniphier_u2phy_priv *VAR_3 = FUNC_2(VAR_1);

 while (VAR_3 && VAR_2->np != VAR_3->phy->dev.of_node)
  VAR_3 = VAR_3->next;

 if (!VAR_3) {
  FUNC_1(VAR_1, "Failed to find appropriate phy\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_3->phy;
}
