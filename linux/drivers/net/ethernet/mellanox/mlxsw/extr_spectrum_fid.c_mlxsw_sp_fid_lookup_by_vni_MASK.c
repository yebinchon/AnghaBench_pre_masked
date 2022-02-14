
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_fid {int ref_count; } ;
struct mlxsw_sp {TYPE_1__* fid_core; } ;
typedef int __be32 ;
struct TYPE_2__ {int vni_ht; } ;


 int VAR_0 ;
 struct mlxsw_sp_fid* FUNC_0 (int *,int *,int ) ;

struct mlxsw_sp_fid *FUNC_1(struct mlxsw_sp *VAR_1,
      __be32 VAR_2)
{
 struct mlxsw_sp_fid *VAR_3;

 VAR_3 = FUNC_0(&VAR_1->fid_core->vni_ht, &VAR_2,
         VAR_0);
 if (VAR_3)
  VAR_3->ref_count++;

 return VAR_3;
}
