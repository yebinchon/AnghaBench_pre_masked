
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_driver {int (* sb_occ_port_pool_get ) (struct mlxsw_core_port*,unsigned int,int ,int *,int *) ;} ;
struct mlxsw_core_port {int dummy; } ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_port {int devlink; } ;


 int VAR_0 ;
 struct mlxsw_core_port* FUNC_0 (struct devlink_port*) ;
 struct mlxsw_core* FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_core_port*) ;
 int FUNC_3 (struct mlxsw_core_port*,unsigned int,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_4(struct devlink_port *VAR_1,
       unsigned int VAR_2, u16 VAR_3,
       u32 *VAR_4, u32 *VAR_5)
{
 struct mlxsw_core *VAR_6 = FUNC_1(VAR_1->devlink);
 struct mlxsw_driver *VAR_7 = VAR_6->driver;
 struct mlxsw_core_port *VAR_8 = FUNC_0(VAR_1);

 if (!VAR_7->sb_occ_port_pool_get ||
     !FUNC_2(VAR_8))
  return -VAR_0;
 return VAR_7->sb_occ_port_pool_get(VAR_8, VAR_2,
        VAR_3, VAR_4, VAR_5);
}
