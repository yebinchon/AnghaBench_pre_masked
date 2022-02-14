
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,unsigned int*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,unsigned int) ;
 int FUNC_2 (struct mlxsw_sp*,unsigned int) ;

int FUNC_3(struct mlxsw_sp *VAR_1,
    unsigned int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0,
         VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_1, *VAR_2);
 if (VAR_3)
  goto err_counter_clear;
 return 0;

err_counter_clear:
 FUNC_1(VAR_1, VAR_0,
         *VAR_2);
 return VAR_3;
}
