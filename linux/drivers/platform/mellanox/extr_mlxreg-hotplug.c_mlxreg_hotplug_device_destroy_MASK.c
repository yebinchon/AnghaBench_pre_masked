
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxreg_hotplug_priv_data {TYPE_1__* hwmon; } ;
struct TYPE_4__ {int * adapter; int * client; } ;
struct mlxreg_core_data {TYPE_2__ hpdev; } ;
struct TYPE_3__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxreg_hotplug_priv_data *VAR_1,
         struct mlxreg_core_data *VAR_2)
{

 FUNC_2(&VAR_1->hwmon->kobj, VAR_0);

 if (VAR_2->hpdev.client) {
  FUNC_1(VAR_2->hpdev.client);
  VAR_2->hpdev.client = ((void*)0);
 }

 if (VAR_2->hpdev.adapter) {
  FUNC_0(VAR_2->hpdev.adapter);
  VAR_2->hpdev.adapter = ((void*)0);
 }
}
