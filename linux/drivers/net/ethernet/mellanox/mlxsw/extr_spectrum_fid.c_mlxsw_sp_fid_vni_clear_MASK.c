
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid_ops {int (* vni_clear ) (struct mlxsw_sp_fid*) ;} ;
struct mlxsw_sp_fid_family {struct mlxsw_sp* mlxsw_sp; struct mlxsw_sp_fid_ops* ops; } ;
struct mlxsw_sp_fid {int vni_valid; int vni_ht_node; struct mlxsw_sp_fid_family* fid_family; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
struct TYPE_2__ {int vni_ht; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct mlxsw_sp_fid*) ;

void FUNC_3(struct mlxsw_sp_fid *VAR_1)
{
 struct mlxsw_sp_fid_family *VAR_2 = VAR_1->fid_family;
 const struct mlxsw_sp_fid_ops *VAR_3 = VAR_2->ops;
 struct mlxsw_sp *VAR_4 = VAR_2->mlxsw_sp;

 if (FUNC_0(!VAR_3->vni_clear || !VAR_1->vni_valid))
  return;

 VAR_1->vni_valid = 0;
 VAR_3->vni_clear(VAR_1);
 FUNC_1(&VAR_4->fid_core->vni_ht, &VAR_1->vni_ht_node,
          VAR_0);
}
