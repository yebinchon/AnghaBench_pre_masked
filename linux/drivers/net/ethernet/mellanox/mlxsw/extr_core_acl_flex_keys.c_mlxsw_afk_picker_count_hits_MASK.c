
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_afk_picker {TYPE_2__* hits; } ;
struct mlxsw_afk_element_inst {TYPE_1__* info; } ;
struct mlxsw_afk_block {int instances_count; struct mlxsw_afk_element_inst* instances; } ;
struct mlxsw_afk {int blocks_count; struct mlxsw_afk_block* blocks; } ;
typedef enum mlxsw_afk_element { ____Placeholder_mlxsw_afk_element } mlxsw_afk_element ;
struct TYPE_4__ {int total; int element; } ;
struct TYPE_3__ {int element; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_afk *VAR_0,
     struct mlxsw_afk_picker *VAR_1,
     enum mlxsw_afk_element VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->blocks_count; VAR_3++) {
  const struct mlxsw_afk_block *VAR_5 = &VAR_0->blocks[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_5->instances_count; VAR_4++) {
   struct mlxsw_afk_element_inst *VAR_6;

   VAR_6 = &VAR_5->instances[VAR_4];
   if (VAR_6->info->element == VAR_2) {
    FUNC_0(VAR_2, VAR_1->hits[VAR_3].element);
    VAR_1->hits[VAR_3].total++;
   }
  }
 }
}
