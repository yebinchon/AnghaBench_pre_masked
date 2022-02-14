
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
struct mlxsw_listener {int dummy; } ;


 int FUNC_0 (int ,struct mlxsw_listener const*,struct mlxsw_sp*) ;
 int FUNC_1 (int ,struct mlxsw_listener const*,struct mlxsw_sp*) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_0,
       const struct mlxsw_listener VAR_1[],
       size_t VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0->core,
            &VAR_1[VAR_3],
            VAR_0);
  if (VAR_4)
   goto err_listener_register;

 }
 return 0;

err_listener_register:
 for (VAR_3--; VAR_3 >= 0; VAR_3--) {
  FUNC_1(VAR_0->core,
        &VAR_1[VAR_3],
        VAR_0);
 }
 return VAR_4;
}
