
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {int lock; } ;
struct mlxsw_sp_acl_tcam_vgroup {int vchunk_ht; } ;
struct mlxsw_sp_acl_tcam_vchunk {struct mlxsw_sp_acl_tcam_vregion* vregion; int ht_node; scalar_t__ chunk; scalar_t__ chunk2; int list; struct mlxsw_sp_acl_tcam_vgroup* vgroup; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_acl_tcam_vchunk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp*,scalar_t__) ;
 int FUNC_3 (struct mlxsw_sp_acl_tcam_vregion*) ;
 int VAR_0 ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_acl_tcam_vchunk *VAR_2)
{
 struct mlxsw_sp_acl_tcam_vregion *VAR_3 = VAR_2->vregion;
 struct mlxsw_sp_acl_tcam_vgroup *VAR_4 = VAR_2->vgroup;

 FUNC_5(&VAR_3->lock);
 FUNC_3(VAR_3);
 FUNC_1(&VAR_2->list);
 if (VAR_2->chunk2)
  FUNC_2(VAR_1, VAR_2->chunk2);
 FUNC_2(VAR_1, VAR_2->chunk);
 FUNC_6(&VAR_3->lock);
 FUNC_7(&VAR_4->vchunk_ht, &VAR_2->ht_node,
          VAR_0);
 FUNC_4(VAR_1, VAR_2->vregion);
 FUNC_0(VAR_2);
}
