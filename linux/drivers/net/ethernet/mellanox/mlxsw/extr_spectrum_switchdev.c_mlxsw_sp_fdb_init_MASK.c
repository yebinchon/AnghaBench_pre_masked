
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {int interval; int dw; } ;
struct mlxsw_sp_bridge {TYPE_2__ fdb_notify; } ;
struct mlxsw_sp {TYPE_1__* bus_info; struct mlxsw_sp_bridge* bridge; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mlxsw_sp*) ;
 struct notifier_block VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct notifier_block*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_5)
{
 struct mlxsw_sp_bridge *VAR_6 = VAR_5->bridge;
 struct notifier_block *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_0);
 if (VAR_8) {
  FUNC_1(VAR_5->bus_info->dev, "Failed to set default ageing time\n");
  return VAR_8;
 }

 VAR_8 = FUNC_5(&VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_5->bus_info->dev, "Failed to register switchdev notifier\n");
  return VAR_8;
 }

 VAR_7 = &VAR_3;
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_5->bus_info->dev, "Failed to register switchdev blocking notifier\n");
  goto err_register_switchdev_blocking_notifier;
 }

 FUNC_0(&VAR_6->fdb_notify.dw, VAR_2);
 VAR_6->fdb_notify.interval = VAR_1;
 FUNC_3(VAR_5);
 return 0;

err_register_switchdev_blocking_notifier:
 FUNC_6(&VAR_4);
 return VAR_8;
}
