
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_sb_cm {size_t pool_index; scalar_t__ max_buff; scalar_t__ freeze_thresh; scalar_t__ freeze_pool; } ;
struct mlxsw_sp_port {scalar_t__ local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_2__* sb_vals; } ;
struct mlxsw_core_port {int dummy; } ;
typedef enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;
struct TYPE_4__ {struct mlxsw_sp_sb_cm* cms_egress; struct mlxsw_sp_sb_cm* cms_ingress; TYPE_1__* pool_dess; } ;
struct TYPE_3__ {int dir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_sp_port* FUNC_1 (struct mlxsw_core_port*) ;
 int FUNC_2 (struct mlxsw_sp*,scalar_t__,scalar_t__,int ,scalar_t__,int,size_t) ;
 int FUNC_3 (struct mlxsw_sp*,size_t,scalar_t__,scalar_t__*,struct netlink_ext_ack*) ;

int FUNC_4(struct mlxsw_core_port *VAR_3,
     unsigned int VAR_4, u16 VAR_5,
     enum devlink_sb_pool_type VAR_6,
     u16 VAR_7, u32 VAR_8,
     struct netlink_ext_ack *VAR_9)
{
 struct mlxsw_sp_port *VAR_10 =
   FUNC_1(VAR_3);
 struct mlxsw_sp *VAR_11 = VAR_10->mlxsw_sp;
 u8 VAR_12 = VAR_10->local_port;
 const struct mlxsw_sp_sb_cm *VAR_13;
 u8 VAR_14 = VAR_5;
 enum mlxsw_reg_sbxx_dir VAR_15 = (enum mlxsw_reg_sbxx_dir) VAR_6;
 u32 VAR_16;
 int VAR_17;

 if (VAR_12 == VAR_1) {
  FUNC_0(VAR_9, "Changing CPU port's binding is forbidden");
  return -VAR_0;
 }

 if (VAR_15 != VAR_11->sb_vals->pool_dess[VAR_7].dir) {
  FUNC_0(VAR_9, "Binding egress TC to ingress pool and vice versa is forbidden");
  return -VAR_0;
 }

 if (VAR_15 == VAR_2)
  VAR_13 = &VAR_11->sb_vals->cms_ingress[VAR_5];
 else
  VAR_13 = &VAR_11->sb_vals->cms_egress[VAR_5];

 if (VAR_13->freeze_pool && VAR_13->pool_index != VAR_7) {
  FUNC_0(VAR_9, "Binding this TC to a different pool is forbidden");
  return -VAR_0;
 }

 if (VAR_13->freeze_thresh && VAR_13->max_buff != VAR_8) {
  FUNC_0(VAR_9, "Changing this TC's threshold is forbidden");
  return -VAR_0;
 }

 VAR_17 = FUNC_3(VAR_11, VAR_7,
           VAR_8, &VAR_16, VAR_9);
 if (VAR_17)
  return VAR_17;

 return FUNC_2(VAR_11, VAR_12, VAR_14,
        0, VAR_16, 0, VAR_7);
}
