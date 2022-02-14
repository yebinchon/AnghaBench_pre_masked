
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid_ops {int (* vni_set ) (struct mlxsw_sp_fid*,int ) ;} ;
struct mlxsw_sp_fid_family {struct mlxsw_sp* mlxsw_sp; struct mlxsw_sp_fid_ops* ops; } ;
struct mlxsw_sp_fid {int vni_valid; int nve_type; int nve_ifindex; int vni_ht_node; int vni; struct mlxsw_sp_fid_family* fid_family; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
typedef enum mlxsw_sp_nve_type { ____Placeholder_mlxsw_sp_nve_type } mlxsw_sp_nve_type ;
typedef int __be32 ;
struct TYPE_2__ {int vni_ht; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct mlxsw_sp_fid*,int ) ;

int FUNC_4(struct mlxsw_sp_fid *VAR_2, enum mlxsw_sp_nve_type VAR_3,
    __be32 VAR_4, int VAR_5)
{
 struct mlxsw_sp_fid_family *VAR_6 = VAR_2->fid_family;
 const struct mlxsw_sp_fid_ops *VAR_7 = VAR_6->ops;
 struct mlxsw_sp *VAR_8 = VAR_6->mlxsw_sp;
 int VAR_9;

 if (FUNC_0(!VAR_7->vni_set || VAR_2->vni_valid))
  return -VAR_0;

 VAR_2->nve_type = VAR_3;
 VAR_2->nve_ifindex = VAR_5;
 VAR_2->vni = VAR_4;
 VAR_9 = FUNC_1(&VAR_8->fid_core->vni_ht,
         &VAR_2->vni_ht_node,
         VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_7->vni_set(VAR_2, VAR_4);
 if (VAR_9)
  goto err_vni_set;

 VAR_2->vni_valid = 1;

 return 0;

err_vni_set:
 FUNC_2(&VAR_8->fid_core->vni_ht, &VAR_2->vni_ht_node,
          VAR_1);
 return VAR_9;
}
