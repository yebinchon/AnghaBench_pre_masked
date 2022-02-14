
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlxreg_hotplug_priv_data {int dev; TYPE_2__* pdev; TYPE_1__* hwmon; } ;
struct mlxreg_core_hotplug_platform_data {scalar_t__ shift_nr; } ;
struct TYPE_7__ {scalar_t__ nr; int * adapter; TYPE_4__* brdinfo; int client; } ;
struct mlxreg_core_data {TYPE_3__ hpdev; } ;
struct TYPE_8__ {int addr; int type; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 struct mlxreg_core_hotplug_platform_data* FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct mlxreg_hotplug_priv_data *VAR_2,
     struct mlxreg_core_data *VAR_3)
{
 struct mlxreg_core_hotplug_platform_data *VAR_4;


 FUNC_5(&VAR_2->hwmon->kobj, VAR_1);





 if (VAR_3->hpdev.nr < 0)
  return 0;

 VAR_4 = FUNC_1(&VAR_2->pdev->dev);
 VAR_3->hpdev.adapter = FUNC_2(VAR_3->hpdev.nr +
           VAR_4->shift_nr);
 if (!VAR_3->hpdev.adapter) {
  FUNC_0(VAR_2->dev, "Failed to get adapter for bus %d\n",
   VAR_3->hpdev.nr + VAR_4->shift_nr);
  return -VAR_0;
 }

 VAR_3->hpdev.client = FUNC_3(VAR_3->hpdev.adapter,
         VAR_3->hpdev.brdinfo);
 if (!VAR_3->hpdev.client) {
  FUNC_0(VAR_2->dev, "Failed to create client %s at bus %d at addr 0x%02x\n",
   VAR_3->hpdev.brdinfo->type, VAR_3->hpdev.nr +
   VAR_4->shift_nr, VAR_3->hpdev.brdinfo->addr);

  FUNC_4(VAR_3->hpdev.adapter);
  VAR_3->hpdev.adapter = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
