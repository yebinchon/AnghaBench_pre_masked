
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_afa_block {TYPE_2__* first_set; TYPE_2__* cur_set; struct mlxsw_afa* afa; int resource_list; } ;
struct mlxsw_afa {TYPE_1__* ops; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; } ;
struct TYPE_3__ {scalar_t__ dummy_first_set; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_afa_block*) ;
 struct mlxsw_afa_block* FUNC_2 (int,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;

struct mlxsw_afa_block *FUNC_5(struct mlxsw_afa *VAR_1)
{
 struct mlxsw_afa_block *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 FUNC_0(&VAR_2->resource_list);
 VAR_2->afa = VAR_1;


 VAR_2->first_set = FUNC_3(1);
 if (!VAR_2->first_set)
  goto err_first_set_create;




 if (VAR_1->ops->dummy_first_set) {
  VAR_2->cur_set = FUNC_3(0);
  if (!VAR_2->cur_set)
   goto err_second_set_create;
  VAR_2->cur_set->prev = VAR_2->first_set;
  VAR_2->first_set->next = VAR_2->cur_set;
 } else {
  VAR_2->cur_set = VAR_2->first_set;
 }

 return VAR_2;

err_second_set_create:
 FUNC_4(VAR_2->first_set);
err_first_set_create:
 FUNC_1(VAR_2);
 return ((void*)0);
}
