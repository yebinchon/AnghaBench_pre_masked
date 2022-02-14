
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_afa_block {TYPE_2__* afa; } ;
struct TYPE_4__ {int ops_priv; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* kvdl_set_activity_get ) (int ,int ,int*) ;} ;


 int FUNC_0 (struct mlxsw_afa_block*) ;
 int FUNC_1 (int ,int ,int*) ;

int FUNC_2(struct mlxsw_afa_block *VAR_0, bool *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0);

 return VAR_0->afa->ops->kvdl_set_activity_get(VAR_0->afa->ops_priv,
            VAR_2, VAR_1);
}
