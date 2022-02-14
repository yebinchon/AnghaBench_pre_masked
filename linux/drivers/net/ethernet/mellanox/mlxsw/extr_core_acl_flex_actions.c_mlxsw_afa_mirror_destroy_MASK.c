
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_afa_mirror {int ingress; int span_id; int local_in_port; int resource; } ;
struct mlxsw_afa_block {TYPE_2__* afa; } ;
struct TYPE_4__ {int ops_priv; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* mirror_del ) (int ,int ,int ,int ) ;} ;


 int FUNC_0 (struct mlxsw_afa_mirror*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_afa_block *VAR_0,
    struct mlxsw_afa_mirror *VAR_1)
{
 FUNC_1(&VAR_1->resource);
 VAR_0->afa->ops->mirror_del(VAR_0->afa->ops_priv,
        VAR_1->local_in_port,
        VAR_1->span_id,
        VAR_1->ingress);
 FUNC_0(VAR_1);
}
