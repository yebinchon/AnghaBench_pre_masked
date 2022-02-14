
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int is_first; } ;
struct mlxsw_afa_set {int shared; int ht_node; TYPE_2__ ht_key; int kvdl_index; } ;
struct mlxsw_afa {int set_ht; int ops_priv; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* kvdl_set_del ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_afa *VAR_1,
      struct mlxsw_afa_set *VAR_2)
{
 VAR_1->ops->kvdl_set_del(VAR_1->ops_priv,
         VAR_2->kvdl_index,
         VAR_2->ht_key.is_first);
 FUNC_0(&VAR_1->set_ht, &VAR_2->ht_node,
          VAR_0);
 VAR_2->shared = 0;
}
