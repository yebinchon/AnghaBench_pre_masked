
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_ventry {int rulei; } ;
struct mlxsw_sp_acl_tcam_ops {int (* entry_add ) (struct mlxsw_sp*,int ,int ,int ,int ) ;scalar_t__ entry_priv_size; } ;
struct mlxsw_sp_acl_tcam_entry {int priv; struct mlxsw_sp_acl_tcam_chunk* chunk; struct mlxsw_sp_acl_tcam_ventry* ventry; } ;
struct mlxsw_sp_acl_tcam_chunk {int priv; TYPE_1__* region; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;
struct TYPE_2__ {int priv; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_tcam_entry* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_entry*) ;
 struct mlxsw_sp_acl_tcam_entry* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int ,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_entry *
FUNC_4(struct mlxsw_sp *VAR_2,
          struct mlxsw_sp_acl_tcam_ventry *VAR_3,
          struct mlxsw_sp_acl_tcam_chunk *VAR_4)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_5 = VAR_2->acl_tcam_ops;
 struct mlxsw_sp_acl_tcam_entry *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6) + VAR_5->entry_priv_size, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_6->ventry = VAR_3;
 VAR_6->chunk = VAR_4;

 VAR_7 = VAR_5->entry_add(VAR_2, VAR_4->region->priv, VAR_4->priv,
        VAR_6->priv, VAR_3->rulei);
 if (VAR_7)
  goto err_entry_add;

 return VAR_6;

err_entry_add:
 FUNC_1(VAR_6);
 return FUNC_0(VAR_7);
}
