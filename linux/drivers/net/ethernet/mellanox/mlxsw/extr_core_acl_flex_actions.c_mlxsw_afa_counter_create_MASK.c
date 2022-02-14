
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int destructor; } ;
struct mlxsw_afa_counter {TYPE_3__ resource; int counter_index; } ;
struct mlxsw_afa_block {TYPE_2__* afa; } ;
struct TYPE_5__ {int ops_priv; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* counter_index_get ) (int ,int *) ;} ;


 int VAR_0 ;
 struct mlxsw_afa_counter* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_afa_counter*) ;
 struct mlxsw_afa_counter* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mlxsw_afa_block*,TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static struct mlxsw_afa_counter *
FUNC_5(struct mlxsw_afa_block *VAR_3)
{
 struct mlxsw_afa_counter *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = VAR_3->afa->ops->counter_index_get(VAR_3->afa->ops_priv,
       &VAR_4->counter_index);
 if (VAR_5)
  goto err_counter_index_get;
 VAR_4->resource.destructor = VAR_2;
 FUNC_3(VAR_3, &VAR_4->resource);
 return VAR_4;

err_counter_index_get:
 FUNC_1(VAR_4);
 return FUNC_0(VAR_5);
}
