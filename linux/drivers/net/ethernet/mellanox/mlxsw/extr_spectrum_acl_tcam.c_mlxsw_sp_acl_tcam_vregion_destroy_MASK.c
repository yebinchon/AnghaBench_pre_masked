
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dw; } ;
struct mlxsw_sp_acl_tcam_vregion {int lock; int key_info; scalar_t__ region; scalar_t__ region2; TYPE_1__ rehash; int tlist; struct mlxsw_sp_acl_tcam* tcam; struct mlxsw_sp_acl_tcam_vgroup* vgroup; } ;
struct mlxsw_sp_acl_tcam_vgroup {scalar_t__ vregion_rehash_enabled; } ;
struct mlxsw_sp_acl_tcam_ops {scalar_t__ region_rehash_hints_get; } ;
struct mlxsw_sp_acl_tcam {int lock; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_sp*,scalar_t__) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_acl_tcam_vregion *VAR_1)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_2 = VAR_0->acl_tcam_ops;
 struct mlxsw_sp_acl_tcam_vgroup *VAR_3 = VAR_1->vgroup;
 struct mlxsw_sp_acl_tcam *VAR_4 = VAR_1->tcam;

 if (VAR_3->vregion_rehash_enabled && VAR_2->region_rehash_hints_get) {
  FUNC_7(&VAR_4->lock);
  FUNC_2(&VAR_1->tlist);
  FUNC_8(&VAR_4->lock);
  FUNC_0(&VAR_1->rehash.dw);
 }
 FUNC_5(VAR_0, VAR_1);
 if (VAR_1->region2)
  FUNC_4(VAR_0, VAR_1->region2);
 FUNC_4(VAR_0, VAR_1->region);
 FUNC_3(VAR_1->key_info);
 FUNC_6(&VAR_1->lock);
 FUNC_1(VAR_1);
}
