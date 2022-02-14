
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct phy {TYPE_1__ dev; } ;
struct of_phandle_args {int args_count; int * args; struct device_node* np; } ;
struct miphy28lp_phy {struct phy* phy; int type; } ;
struct miphy28lp_dev {int nphys; struct miphy28lp_phy** phys; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct phy* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct miphy28lp_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct miphy28lp_phy*) ;

__attribute__((used)) static struct phy *FUNC_4(struct device *VAR_1,
       struct of_phandle_args *VAR_2)
{
 struct miphy28lp_dev *VAR_3 = FUNC_2(VAR_1);
 struct miphy28lp_phy *VAR_4 = ((void*)0);
 struct device_node *VAR_5 = VAR_2->np;
 int VAR_6, VAR_7 = 0;

 if (VAR_2->args_count != 1) {
  FUNC_1(VAR_1, "Invalid number of cells in 'phy' property\n");
  return FUNC_0(-VAR_0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->nphys; VAR_7++)
  if (VAR_5 == VAR_3->phys[VAR_7]->phy->dev.of_node) {
   VAR_4 = VAR_3->phys[VAR_7];
   break;
  }

 if (!VAR_4) {
  FUNC_1(VAR_1, "Failed to find appropriate phy\n");
  return FUNC_0(-VAR_0);
 }

 VAR_4->type = VAR_2->args[0];

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0)
  return FUNC_0(VAR_6);

 return VAR_4->phy;
}
