
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_driver {int (* kvd_sizes_get ) (struct mlxsw_core*,struct mlxsw_config_profile const*,int *,int *,int *) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct mlxsw_config_profile {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_core*,struct mlxsw_config_profile const*,int *,int *,int *) ;

int FUNC_1(struct mlxsw_core *VAR_1,
        const struct mlxsw_config_profile *VAR_2,
        u64 *VAR_3, u64 *VAR_4,
        u64 *VAR_5)
{
 struct mlxsw_driver *VAR_6 = VAR_1->driver;

 if (!VAR_6->kvd_sizes_get)
  return -VAR_0;

 return VAR_6->kvd_sizes_get(VAR_1, VAR_2,
         VAR_3, VAR_4,
         VAR_5);
}
