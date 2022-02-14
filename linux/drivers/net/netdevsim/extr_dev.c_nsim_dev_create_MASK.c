
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id_len; int id; } ;
struct nsim_dev {int fw_update_status; int test1; int max_macs; int port_list_lock; int port_list; TYPE_1__ switch_id; struct nsim_bus_dev* nsim_bus_dev; } ;
struct nsim_bus_dev {int dev; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct nsim_dev* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct devlink* FUNC_3 (int *,int) ;
 int FUNC_4 (struct devlink*) ;
 int FUNC_5 (struct devlink*) ;
 int FUNC_6 (struct devlink*,int ,int ) ;
 int FUNC_7 (struct devlink*,int ,int ) ;
 struct nsim_dev* FUNC_8 (struct devlink*) ;
 int FUNC_9 (struct devlink*,int *) ;
 int FUNC_10 (struct devlink*,int *) ;
 int FUNC_11 (struct devlink*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct nsim_dev*) ;
 int FUNC_15 (struct nsim_dev*) ;
 int FUNC_16 (struct nsim_dev*) ;
 int VAR_3 ;
 int FUNC_17 (struct nsim_dev*) ;
 int FUNC_18 (struct nsim_dev*,struct devlink*) ;
 int FUNC_19 (struct devlink*) ;
 int FUNC_20 (struct devlink*) ;
 int FUNC_21 (struct devlink*) ;
 int VAR_4 ;
 int FUNC_22 (struct nsim_dev*,struct devlink*) ;

__attribute__((used)) static struct nsim_dev *
FUNC_23(struct nsim_bus_dev *VAR_5, unsigned int VAR_6)
{
 struct nsim_dev *VAR_7;
 struct devlink *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_3, sizeof(*VAR_7));
 if (!VAR_8)
  return FUNC_1(-VAR_0);
 VAR_7 = FUNC_8(VAR_8);
 VAR_7->nsim_bus_dev = VAR_5;
 VAR_7->switch_id.id_len = sizeof(VAR_7->switch_id.id);
 FUNC_12(VAR_7->switch_id.id, VAR_7->switch_id.id_len);
 FUNC_2(&VAR_7->port_list);
 FUNC_13(&VAR_7->port_list_lock);
 VAR_7->fw_update_status = 1;
 VAR_7->max_macs = VAR_1;
 VAR_7->test1 = VAR_2;

 VAR_9 = FUNC_19(VAR_8);
 if (VAR_9)
  goto err_devlink_free;

 VAR_9 = FUNC_9(VAR_8, &VAR_5->dev);
 if (VAR_9)
  goto err_resources_unregister;

 VAR_9 = FUNC_6(VAR_8, VAR_4,
          FUNC_0(VAR_4));
 if (VAR_9)
  goto err_dl_unregister;
 FUNC_22(VAR_7, VAR_8);

 VAR_9 = FUNC_18(VAR_7, VAR_8);
 if (VAR_9)
  goto err_params_unregister;

 VAR_9 = FUNC_21(VAR_8);
 if (VAR_9)
  goto err_dummy_region_exit;

 VAR_9 = FUNC_16(VAR_7);
 if (VAR_9)
  goto err_traps_exit;

 VAR_9 = FUNC_14(VAR_7);
 if (VAR_9)
  goto err_debugfs_exit;

 FUNC_5(VAR_8);
 return VAR_7;

err_debugfs_exit:
 FUNC_15(VAR_7);
err_traps_exit:
 FUNC_20(VAR_8);
err_dummy_region_exit:
 FUNC_17(VAR_7);
err_params_unregister:
 FUNC_7(VAR_8, VAR_4,
      FUNC_0(VAR_4));
err_dl_unregister:
 FUNC_11(VAR_8);
err_resources_unregister:
 FUNC_10(VAR_8, ((void*)0));
err_devlink_free:
 FUNC_4(VAR_8);
 return FUNC_1(VAR_9);
}
