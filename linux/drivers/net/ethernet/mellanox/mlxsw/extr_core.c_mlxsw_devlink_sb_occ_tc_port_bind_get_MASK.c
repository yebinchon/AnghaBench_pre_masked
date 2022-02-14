
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_driver {int (* sb_occ_tc_port_bind_get ) (struct mlxsw_core_port*,unsigned int,int ,int,int *,int *) ;} ;
struct mlxsw_core_port {int dummy; } ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_port {int devlink; } ;
typedef enum devlink_sb_pool_type { ____Placeholder_devlink_sb_pool_type } devlink_sb_pool_type ;


 int VAR_0 ;
 struct mlxsw_core_port* FUNC_0 (struct devlink_port*) ;
 struct mlxsw_core* FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_core_port*) ;
 int FUNC_3 (struct mlxsw_core_port*,unsigned int,int ,int,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct devlink_port *VAR_1,
          unsigned int VAR_2, u16 VAR_3,
          enum devlink_sb_pool_type VAR_4,
          u32 *VAR_5, u32 *VAR_6)
{
 struct mlxsw_core *VAR_7 = FUNC_1(VAR_1->devlink);
 struct mlxsw_driver *VAR_8 = VAR_7->driver;
 struct mlxsw_core_port *VAR_9 = FUNC_0(VAR_1);

 if (!VAR_8->sb_occ_tc_port_bind_get ||
     !FUNC_2(VAR_9))
  return -VAR_0;
 return VAR_8->sb_occ_tc_port_bind_get(VAR_9,
           VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_6);
}
