
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_gen2_phy_driver {int num_channels; TYPE_2__* channels; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int* args; struct device_node* np; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* phys; struct device_node* of_node; } ;
struct TYPE_3__ {struct phy* phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 struct rcar_gen2_phy_driver* FUNC_1 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_2(struct device *VAR_2,
           struct of_phandle_args *VAR_3)
{
 struct rcar_gen2_phy_driver *VAR_4;
 struct device_node *VAR_5 = VAR_3->np;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4->num_channels; VAR_6++) {
  if (VAR_5 == VAR_4->channels[VAR_6].of_node)
   break;
 }

 if (VAR_6 >= VAR_4->num_channels || VAR_3->args[0] >= 2)
  return FUNC_0(-VAR_1);

 return VAR_4->channels[VAR_6].phys[VAR_3->args[0]].phy;
}
