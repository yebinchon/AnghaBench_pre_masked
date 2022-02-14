
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;
struct mlxfw_dev {TYPE_1__* ops; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int (* fsm_lock ) (struct mlxfw_dev*,int *) ;int (* fsm_activate ) (struct mlxfw_dev*,int ) ;int (* fsm_release ) (struct mlxfw_dev*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxfw_mfa2_file*) ;
 int VAR_1 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct mlxfw_mfa2_file*) ;
 int FUNC_3 (struct mlxfw_dev*,int ,struct mlxfw_mfa2_file*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct mlxfw_dev*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct mlxfw_mfa2_file*) ;
 struct mlxfw_mfa2_file* FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct mlxfw_dev*,char*,int *,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct mlxfw_dev*,int *) ;
 int FUNC_13 (struct mlxfw_dev*,int ) ;
 int FUNC_14 (struct mlxfw_dev*,int ) ;
 int FUNC_15 (struct mlxfw_dev*,int ) ;

int FUNC_16(struct mlxfw_dev *VAR_2,
    const struct firmware *VAR_3,
    struct netlink_ext_ack *VAR_4)
{
 struct mlxfw_mfa2_file *VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (!FUNC_5(VAR_3)) {
  FUNC_10("Firmware file is not MFA2\n");
  FUNC_1(VAR_4, "Firmware file is not MFA2");
  return -VAR_0;
 }

 VAR_5 = FUNC_7(VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_2(VAR_5);

 FUNC_11("Initialize firmware flash process\n");
 FUNC_8(VAR_2, "Initializing firmware flash process",
       ((void*)0), 0, 0);
 VAR_7 = VAR_2->ops->fsm_lock(VAR_2, &VAR_6);
 if (VAR_7) {
  FUNC_10("Could not lock the firmware FSM\n");
  FUNC_1(VAR_4, "Could not lock the firmware FSM");
  goto err_fsm_lock;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_6,
       VAR_1, VAR_4);
 if (VAR_7)
  goto err_state_wait_idle_to_locked;

 VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_5, VAR_4);
 if (VAR_7)
  goto err_flash_components;

 FUNC_9("Activate image\n");
 FUNC_8(VAR_2, "Activating image", ((void*)0), 0, 0);
 VAR_7 = VAR_2->ops->fsm_activate(VAR_2, VAR_6);
 if (VAR_7) {
  FUNC_10("Could not activate the downloaded image\n");
  FUNC_1(VAR_4, "Could not activate the downloaded image");
  goto err_fsm_activate;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_6,
       VAR_1, VAR_4);
 if (VAR_7)
  goto err_state_wait_activate_to_locked;

 FUNC_9("Handle release\n");
 VAR_2->ops->fsm_release(VAR_2, VAR_6);

 FUNC_11("Firmware flash done.\n");
 FUNC_8(VAR_2, "Firmware flash done", ((void*)0), 0, 0);
 FUNC_6(VAR_5);
 return 0;

err_state_wait_activate_to_locked:
err_fsm_activate:
err_flash_components:
err_state_wait_idle_to_locked:
 VAR_2->ops->fsm_release(VAR_2, VAR_6);
err_fsm_lock:
 FUNC_6(VAR_5);
 return VAR_7;
}
