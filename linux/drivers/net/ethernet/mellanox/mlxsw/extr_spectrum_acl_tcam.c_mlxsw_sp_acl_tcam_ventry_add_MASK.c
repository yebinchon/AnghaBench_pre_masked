
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_vregion {int lock; } ;
struct mlxsw_sp_acl_tcam_vgroup {int dummy; } ;
struct mlxsw_sp_acl_tcam_ventry {int list; struct mlxsw_sp_acl_tcam_vchunk* entry; struct mlxsw_sp_acl_rule_info* rulei; struct mlxsw_sp_acl_tcam_vchunk* vchunk; } ;
struct mlxsw_sp_acl_tcam_vchunk {int ventry_list; int chunk; struct mlxsw_sp_acl_tcam_vregion* vregion; } ;
struct TYPE_2__ {int elusage; } ;
struct mlxsw_sp_acl_rule_info {TYPE_1__ values; int priority; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_tcam_vchunk*) ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_vchunk*) ;
 int FUNC_2 (int *,int *) ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_ventry*,int ) ;
 int FUNC_4 (struct mlxsw_sp_acl_tcam_vchunk*) ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vgroup*,int ,int *) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vchunk*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_tcam_vgroup *VAR_1,
     struct mlxsw_sp_acl_tcam_ventry *VAR_2,
     struct mlxsw_sp_acl_rule_info *VAR_3)
{
 struct mlxsw_sp_acl_tcam_vregion *VAR_4;
 struct mlxsw_sp_acl_tcam_vchunk *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_3->priority,
           &VAR_3->values.elusage);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_2->vchunk = VAR_5;
 VAR_2->rulei = VAR_3;
 VAR_4 = VAR_5->vregion;

 FUNC_7(&VAR_4->lock);
 VAR_2->entry = FUNC_3(VAR_0, VAR_2,
             VAR_5->chunk);
 if (FUNC_0(VAR_2->entry)) {
  FUNC_8(&VAR_4->lock);
  VAR_6 = FUNC_1(VAR_2->entry);
  goto err_entry_create;
 }

 FUNC_2(&VAR_2->list, &VAR_5->ventry_list);
 FUNC_4(VAR_5);
 FUNC_8(&VAR_4->lock);

 return 0;

err_entry_create:
 FUNC_6(VAR_0, VAR_5);
 return VAR_6;
}
