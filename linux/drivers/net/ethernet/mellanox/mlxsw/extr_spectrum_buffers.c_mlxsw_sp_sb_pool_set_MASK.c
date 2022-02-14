
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_sb_pr {int mode; scalar_t__ size; scalar_t__ freeze_size; scalar_t__ freeze_mode; } ;
struct mlxsw_sp {int core; TYPE_1__* sb_vals; } ;
struct mlxsw_core {int dummy; } ;
typedef enum mlxsw_reg_sbpr_mode { ____Placeholder_mlxsw_reg_sbpr_mode } mlxsw_reg_sbpr_mode ;
typedef enum devlink_sb_threshold_type { ____Placeholder_devlink_sb_threshold_type } devlink_sb_threshold_type ;
struct TYPE_2__ {struct mlxsw_sp_sb_pr* prs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_sp* FUNC_2 (struct mlxsw_core*) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp*,scalar_t__) ;
 int FUNC_4 (struct mlxsw_sp*,size_t,int,scalar_t__,int) ;

int FUNC_5(struct mlxsw_core *VAR_2,
    unsigned int VAR_3, u16 VAR_4, u32 VAR_5,
    enum devlink_sb_threshold_type VAR_6,
    struct netlink_ext_ack *VAR_7)
{
 struct mlxsw_sp *VAR_8 = FUNC_2(VAR_2);
 u32 VAR_9 = FUNC_3(VAR_8, VAR_5);
 const struct mlxsw_sp_sb_pr *VAR_10;
 enum mlxsw_reg_sbpr_mode VAR_11;

 VAR_11 = (enum mlxsw_reg_sbpr_mode) VAR_6;
 VAR_10 = &VAR_8->sb_vals->prs[VAR_4];

 if (VAR_5 > FUNC_0(VAR_8->core, VAR_1)) {
  FUNC_1(VAR_7, "Exceeded shared buffer size");
  return -VAR_0;
 }

 if (VAR_10->freeze_mode && VAR_10->mode != VAR_11) {
  FUNC_1(VAR_7, "Changing this pool's threshold type is forbidden");
  return -VAR_0;
 };

 if (VAR_10->freeze_size && VAR_10->size != VAR_5) {
  FUNC_1(VAR_7, "Changing this pool's size is forbidden");
  return -VAR_0;
 };

 return FUNC_4(VAR_8, VAR_4, VAR_11,
        VAR_9, 0);
}
