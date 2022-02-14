
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {int lock; } ;
struct mlxsw_sp_acl_tcam_ventry {int entry; int list; struct mlxsw_sp_acl_tcam_vchunk* vchunk; } ;
struct mlxsw_sp_acl_tcam_vchunk {struct mlxsw_sp_acl_tcam_vregion* vregion; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 int FUNC_2 (struct mlxsw_sp_acl_tcam_vchunk*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vchunk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_acl_tcam_ventry *VAR_1)
{
 struct mlxsw_sp_acl_tcam_vchunk *VAR_2 = VAR_1->vchunk;
 struct mlxsw_sp_acl_tcam_vregion *VAR_3 = VAR_2->vregion;

 FUNC_4(&VAR_3->lock);
 FUNC_2(VAR_2);
 FUNC_0(&VAR_1->list);
 FUNC_1(VAR_0, VAR_1->entry);
 FUNC_5(&VAR_3->lock);
 FUNC_3(VAR_0, VAR_2);
}
