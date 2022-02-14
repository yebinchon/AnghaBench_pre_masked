
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_bus_info {int dummy; } ;
struct mlxsw_bus {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_bus_info const*,struct mlxsw_bus const*,void*,int,struct devlink*) ;

int FUNC_1(const struct mlxsw_bus_info *VAR_1,
       const struct mlxsw_bus *VAR_2,
       void *VAR_3, bool VAR_4,
       struct devlink *VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;

again:
 VAR_7 = FUNC_0(VAR_1, VAR_2,
            VAR_3, VAR_4, VAR_5);




 if (VAR_7 == -VAR_0 && !VAR_6) {
  VAR_6 = 1;
  goto again;
 }

 return VAR_7;
}
