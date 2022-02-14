
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct mlxsw_afk_element_inst {TYPE_1__* info; } const mlxsw_afk_element_inst ;
struct mlxsw_afk_block {int instances_count; struct mlxsw_afk_element_inst const* instances; } ;
typedef enum mlxsw_afk_element { ____Placeholder_mlxsw_afk_element } mlxsw_afk_element ;
struct TYPE_2__ {int element; } ;



__attribute__((used)) static const struct mlxsw_afk_element_inst *
FUNC_0(const struct mlxsw_afk_block *VAR_0,
      enum mlxsw_afk_element VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->instances_count; VAR_2++) {
  struct mlxsw_afk_element_inst *VAR_3;

  VAR_3 = &VAR_0->instances[VAR_2];
  if (VAR_3->info->element == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
