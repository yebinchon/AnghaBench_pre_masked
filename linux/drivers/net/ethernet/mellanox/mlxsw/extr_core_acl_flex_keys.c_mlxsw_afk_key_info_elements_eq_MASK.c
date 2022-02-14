
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_key_info {int elusage; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 scalar_t__ FUNC_0 (int *,struct mlxsw_afk_element_usage*,int) ;

__attribute__((used)) static bool
FUNC_1(struct mlxsw_afk_key_info *VAR_0,
          struct mlxsw_afk_element_usage *VAR_1)
{
 return FUNC_0(&VAR_0->elusage, VAR_1, sizeof(*VAR_1)) == 0;
}
