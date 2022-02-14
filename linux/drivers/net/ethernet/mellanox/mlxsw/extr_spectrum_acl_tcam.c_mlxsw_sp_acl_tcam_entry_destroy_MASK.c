
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_ops {int (* entry_del ) (struct mlxsw_sp*,int ,int ,int ) ;} ;
struct mlxsw_sp_acl_tcam_entry {int priv; TYPE_2__* chunk; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;
struct TYPE_4__ {int priv; TYPE_1__* region; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (struct mlxsw_sp_acl_tcam_entry*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_acl_tcam_entry *VAR_1)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_2 = VAR_0->acl_tcam_ops;

 VAR_2->entry_del(VAR_0, VAR_1->chunk->region->priv,
         VAR_1->chunk->priv, VAR_1->priv);
 FUNC_0(VAR_1);
}
