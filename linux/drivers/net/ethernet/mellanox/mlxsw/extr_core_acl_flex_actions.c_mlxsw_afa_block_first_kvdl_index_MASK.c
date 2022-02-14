
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_afa_block {TYPE_2__* first_set; } ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {int kvdl_index; } ;


 scalar_t__ FUNC_0 (int) ;

u32 FUNC_1(struct mlxsw_afa_block *VAR_0)
{



 if (FUNC_0(!VAR_0->first_set->next))
  return 0;
 return VAR_0->first_set->next->kvdl_index;
}
