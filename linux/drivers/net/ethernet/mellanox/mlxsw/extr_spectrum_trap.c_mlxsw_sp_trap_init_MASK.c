
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_listener {int dummy; } ;
struct mlxsw_core {int dummy; } ;
struct devlink_trap {scalar_t__ id; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct mlxsw_core*,struct mlxsw_listener*,void*) ;
 scalar_t__* VAR_0 ;
 struct mlxsw_listener* VAR_1 ;

int FUNC_2(struct mlxsw_core *VAR_2,
         const struct devlink_trap *VAR_3, void *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  struct mlxsw_listener *VAR_6;
  int VAR_7;

  if (VAR_0[VAR_5] != VAR_3->id)
   continue;
  VAR_6 = &VAR_1[VAR_5];

  VAR_7 = FUNC_1(VAR_2, VAR_6, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
