
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_ventry {int entry; struct mlxsw_sp_acl_tcam_vchunk* vchunk; } ;
struct mlxsw_sp_acl_tcam_vchunk {TYPE_1__* vregion; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int region; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_acl_rule_info*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_tcam_ventry *VAR_1,
     struct mlxsw_sp_acl_rule_info *VAR_2)
{
 struct mlxsw_sp_acl_tcam_vchunk *VAR_3 = VAR_1->vchunk;

 return FUNC_0(VAR_0,
            VAR_3->vregion->region,
            VAR_1->entry, VAR_2);
}
