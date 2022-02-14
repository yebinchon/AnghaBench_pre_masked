
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct of_phandle_args {int args_count; scalar_t__* args; struct device_node* np; } ;
struct mtk_tphy {int nphys; TYPE_2__* pdata; struct mtk_phy_instance** phys; } ;
struct mtk_phy_instance {scalar_t__ type; struct phy* phy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ version; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct mtk_tphy* FUNC_2 (struct device*) ;
 int FUNC_3 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 int FUNC_4 (struct mtk_tphy*,struct mtk_phy_instance*) ;
 int FUNC_5 (struct mtk_tphy*,struct mtk_phy_instance*) ;

__attribute__((used)) static struct phy *FUNC_6(struct device *VAR_7,
     struct of_phandle_args *VAR_8)
{
 struct mtk_tphy *VAR_9 = FUNC_2(VAR_7);
 struct mtk_phy_instance *VAR_10 = ((void*)0);
 struct device_node *VAR_11 = VAR_8->np;
 int VAR_12;

 if (VAR_8->args_count != 1) {
  FUNC_1(VAR_7, "invalid number of cells in 'phy' property\n");
  return FUNC_0(-VAR_0);
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->nphys; VAR_12++)
  if (VAR_11 == VAR_9->phys[VAR_12]->phy->dev.of_node) {
   VAR_10 = VAR_9->phys[VAR_12];
   break;
  }

 if (!VAR_10) {
  FUNC_1(VAR_7, "failed to find appropriate phy\n");
  return FUNC_0(-VAR_0);
 }

 VAR_10->type = VAR_8->args[0];
 if (!(VAR_10->type == VAR_5 ||
       VAR_10->type == VAR_6 ||
       VAR_10->type == VAR_3 ||
       VAR_10->type == VAR_4)) {
  FUNC_1(VAR_7, "unsupported device type: %d\n", VAR_10->type);
  return FUNC_0(-VAR_0);
 }

 if (VAR_9->pdata->version == VAR_1) {
  FUNC_4(VAR_9, VAR_10);
 } else if (VAR_9->pdata->version == VAR_2) {
  FUNC_5(VAR_9, VAR_10);
 } else {
  FUNC_1(VAR_7, "phy version is not supported\n");
  return FUNC_0(-VAR_0);
 }

 FUNC_3(VAR_9, VAR_10);

 return VAR_10->phy;
}
