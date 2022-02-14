
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int local_port; } ;
struct mlxsw_afa_fwd_entry {int ref_count; int ht_node; int kvdl_index; TYPE_2__ ht_key; } ;
struct mlxsw_afa {int fwd_entry_ht; int ops_priv; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* kvdl_fwd_entry_add ) (int ,int *,int ) ;} ;


 int VAR_0 ;
 struct mlxsw_afa_fwd_entry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_afa_fwd_entry*) ;
 struct mlxsw_afa_fwd_entry* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static struct mlxsw_afa_fwd_entry *
FUNC_6(struct mlxsw_afa *VAR_3, u8 VAR_4)
{
 struct mlxsw_afa_fwd_entry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_5->ht_key.local_port = VAR_4;
 VAR_5->ref_count = 1;

 VAR_6 = FUNC_3(&VAR_3->fwd_entry_ht,
         &VAR_5->ht_node,
         VAR_2);
 if (VAR_6)
  goto err_rhashtable_insert;

 VAR_6 = VAR_3->ops->kvdl_fwd_entry_add(VAR_3->ops_priv,
       &VAR_5->kvdl_index,
       VAR_4);
 if (VAR_6)
  goto err_kvdl_fwd_entry_add;
 return VAR_5;

err_kvdl_fwd_entry_add:
 FUNC_4(&VAR_3->fwd_entry_ht, &VAR_5->ht_node,
          VAR_2);
err_rhashtable_insert:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_6);
}
