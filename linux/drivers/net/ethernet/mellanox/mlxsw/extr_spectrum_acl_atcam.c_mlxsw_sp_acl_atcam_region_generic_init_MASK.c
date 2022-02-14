
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcnt; } ;
struct mlxsw_sp_acl_atcam_region_generic {TYPE_1__ dummy_lkey_id; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_atcam_region_generic* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_acl_atcam_region_generic* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_acl_atcam_region *VAR_2)
{
 struct mlxsw_sp_acl_atcam_region_generic *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->dummy_lkey_id.refcnt, 1);
 VAR_2->priv = VAR_3;

 return 0;
}
