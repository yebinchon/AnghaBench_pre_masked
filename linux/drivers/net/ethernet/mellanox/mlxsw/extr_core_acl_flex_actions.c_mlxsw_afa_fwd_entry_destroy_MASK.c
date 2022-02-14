
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_afa_fwd_entry {int ht_node; int kvdl_index; } ;
struct mlxsw_afa {int fwd_entry_ht; int ops_priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* kvdl_fwd_entry_del ) (int ,int ) ;} ;


 int FUNC_0 (struct mlxsw_afa_fwd_entry*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_afa *VAR_1,
     struct mlxsw_afa_fwd_entry *VAR_2)
{
 VAR_1->ops->kvdl_fwd_entry_del(VAR_1->ops_priv,
        VAR_2->kvdl_index);
 FUNC_1(&VAR_1->fwd_entry_ht, &VAR_2->ht_node,
          VAR_0);
 FUNC_0(VAR_2);
}
