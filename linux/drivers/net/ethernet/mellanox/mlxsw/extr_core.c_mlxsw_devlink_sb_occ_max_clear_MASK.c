
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_driver {int (* sb_occ_max_clear ) (struct mlxsw_core*,unsigned int) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_1,
       unsigned int VAR_2)
{
 struct mlxsw_core *VAR_3 = FUNC_0(VAR_1);
 struct mlxsw_driver *VAR_4 = VAR_3->driver;

 if (!VAR_4->sb_occ_max_clear)
  return -VAR_0;
 return VAR_4->sb_occ_max_clear(VAR_3, VAR_2);
}
