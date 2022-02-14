
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_driver {int (* sb_pool_set ) (struct mlxsw_core*,unsigned int,int ,int ,int,struct netlink_ext_ack*) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink {int dummy; } ;
typedef enum devlink_sb_threshold_type { ____Placeholder_devlink_sb_threshold_type } devlink_sb_threshold_type ;


 int VAR_0 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,unsigned int,int ,int ,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_1,
     unsigned int VAR_2, u16 VAR_3, u32 VAR_4,
     enum devlink_sb_threshold_type VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct mlxsw_core *VAR_7 = FUNC_0(VAR_1);
 struct mlxsw_driver *VAR_8 = VAR_7->driver;

 if (!VAR_8->sb_pool_set)
  return -VAR_0;
 return VAR_8->sb_pool_set(VAR_7, VAR_2,
      VAR_3, VAR_4, VAR_5,
      VAR_6);
}
