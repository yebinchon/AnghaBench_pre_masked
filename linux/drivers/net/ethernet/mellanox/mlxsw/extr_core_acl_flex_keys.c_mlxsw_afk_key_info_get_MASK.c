
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_key_info {int ref_count; } ;
struct mlxsw_afk_element_usage {int dummy; } ;
struct mlxsw_afk {int dummy; } ;


 struct mlxsw_afk_key_info* FUNC_0 (struct mlxsw_afk*,struct mlxsw_afk_element_usage*) ;
 struct mlxsw_afk_key_info* FUNC_1 (struct mlxsw_afk*,struct mlxsw_afk_element_usage*) ;

struct mlxsw_afk_key_info *
FUNC_2(struct mlxsw_afk *VAR_0,
         struct mlxsw_afk_element_usage *VAR_1)
{
 struct mlxsw_afk_key_info *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  VAR_2->ref_count++;
  return VAR_2;
 }
 return FUNC_0(VAR_0, VAR_1);
}
