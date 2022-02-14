
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bits; } ;
struct TYPE_7__ {TYPE_1__ size; } ;
struct mlxsw_afk_element_inst {scalar_t__ type; TYPE_5__* info; TYPE_2__ item; int avoid_size_check; } ;
struct mlxsw_afk_block {int instances_count; struct mlxsw_afk_element_inst* instances; } ;
struct mlxsw_afk {int blocks_count; struct mlxsw_afk_block* blocks; } ;
struct TYPE_8__ {scalar_t__ bits; } ;
struct TYPE_9__ {TYPE_3__ size; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_4__ item; } ;



__attribute__((used)) static bool FUNC_0(struct mlxsw_afk *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->blocks_count; VAR_1++) {
  const struct mlxsw_afk_block *VAR_3 = &VAR_0->blocks[VAR_1];

  for (VAR_2 = 0; VAR_2 < VAR_3->instances_count; VAR_2++) {
   struct mlxsw_afk_element_inst *VAR_4;

   VAR_4 = &VAR_3->instances[VAR_2];
   if (VAR_4->type != VAR_4->info->type ||
       (!VAR_4->avoid_size_check &&
        VAR_4->item.size.bits !=
        VAR_4->info->item.size.bits))
    return 0;
  }
 }
 return 1;
}
