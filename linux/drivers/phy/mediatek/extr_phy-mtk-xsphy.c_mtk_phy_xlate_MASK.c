
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xsphy_instance {scalar_t__ type; struct phy* phy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct of_phandle_args {int args_count; scalar_t__* args; struct device_node* np; } ;
struct mtk_xsphy {int nphys; struct xsphy_instance** phys; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct mtk_xsphy* FUNC_2 (struct device*) ;
 int FUNC_3 (struct mtk_xsphy*,struct xsphy_instance*) ;

__attribute__((used)) static struct phy *FUNC_4(struct device *VAR_3,
     struct of_phandle_args *VAR_4)
{
 struct mtk_xsphy *VAR_5 = FUNC_2(VAR_3);
 struct xsphy_instance *VAR_6 = ((void*)0);
 struct device_node *VAR_7 = VAR_4->np;
 int VAR_8;

 if (VAR_4->args_count != 1) {
  FUNC_1(VAR_3, "invalid number of cells in 'phy' property\n");
  return FUNC_0(-VAR_0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->nphys; VAR_8++)
  if (VAR_7 == VAR_5->phys[VAR_8]->phy->dev.of_node) {
   VAR_6 = VAR_5->phys[VAR_8];
   break;
  }

 if (!VAR_6) {
  FUNC_1(VAR_3, "failed to find appropriate phy\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6->type = VAR_4->args[0];
 if (!(VAR_6->type == VAR_1 ||
       VAR_6->type == VAR_2)) {
  FUNC_1(VAR_3, "unsupported phy type: %d\n", VAR_6->type);
  return FUNC_0(-VAR_0);
 }

 FUNC_3(VAR_5, VAR_6);

 return VAR_6->phy;
}
