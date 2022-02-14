
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int listeners_count; int listeners; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->core);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1->core);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, VAR_0,
          FUNC_0(VAR_0));
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, VAR_1->listeners,
          VAR_1->listeners_count);
 if (VAR_2)
  goto err_extra_traps_init;

 return 0;

err_extra_traps_init:
 FUNC_4(VAR_1, VAR_0,
      FUNC_0(VAR_0));
 return VAR_2;
}
