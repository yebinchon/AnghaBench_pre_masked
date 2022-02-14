
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_driver {int (* sb_pool_get ) (struct mlxsw_core*,unsigned int,int ,struct devlink_sb_pool_info*) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_sb_pool_info {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,unsigned int,int ,struct devlink_sb_pool_info*) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_1,
     unsigned int VAR_2, u16 VAR_3,
     struct devlink_sb_pool_info *VAR_4)
{
 struct mlxsw_core *VAR_5 = FUNC_0(VAR_1);
 struct mlxsw_driver *VAR_6 = VAR_5->driver;

 if (!VAR_6->sb_pool_get)
  return -VAR_0;
 return VAR_6->sb_pool_get(VAR_5, VAR_2,
      VAR_3, VAR_4);
}
