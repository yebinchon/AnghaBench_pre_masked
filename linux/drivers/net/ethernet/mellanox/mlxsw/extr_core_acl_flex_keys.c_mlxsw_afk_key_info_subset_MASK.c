
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_key_info {int elusage; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int FUNC_0 (struct mlxsw_afk_element_usage*,int *) ;

bool FUNC_1(struct mlxsw_afk_key_info *VAR_0,
          struct mlxsw_afk_element_usage *VAR_1)
{
 return FUNC_0(VAR_1, &VAR_0->elusage);
}
