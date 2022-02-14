
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dw; } ;
struct mlxsw_sp_acl_tcam_vregion {int ref_count; int key_info; int region; int tlist; TYPE_2__ rehash; struct mlxsw_sp_acl_tcam_vgroup* vgroup; struct mlxsw_sp* mlxsw_sp; struct mlxsw_sp_acl_tcam* tcam; int lock; int vchunk_list; } ;
struct TYPE_3__ {struct mlxsw_sp_acl_tcam* tcam; } ;
struct mlxsw_sp_acl_tcam_vgroup {scalar_t__ vregion_rehash_enabled; TYPE_1__ group; } ;
struct mlxsw_sp_acl_tcam_ops {scalar_t__ region_rehash_hints_get; } ;
struct mlxsw_sp_acl_tcam {int lock; int vregion_list; } ;
struct mlxsw_sp {int acl; struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;
struct mlxsw_afk_element_usage {int dummy; } ;
struct mlxsw_afk {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlxsw_sp_acl_tcam_vregion*) ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct mlxsw_afk*,struct mlxsw_afk_element_usage*) ;
 int FUNC_9 (int ) ;
 struct mlxsw_afk* FUNC_10 (int ) ;
 int FUNC_11 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam*,struct mlxsw_sp_acl_tcam_vregion*,int *) ;
 int FUNC_12 (struct mlxsw_sp*,int ) ;
 int FUNC_13 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vgroup*,struct mlxsw_sp_acl_tcam_vregion*,unsigned int) ;
 int VAR_2 ;
 int FUNC_14 (struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_vregion *
FUNC_18(struct mlxsw_sp *VAR_3,
     struct mlxsw_sp_acl_tcam_vgroup *VAR_4,
     unsigned int VAR_5,
     struct mlxsw_afk_element_usage *VAR_6)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_7 = VAR_3->acl_tcam_ops;
 struct mlxsw_afk *VAR_8 = FUNC_10(VAR_3->acl);
 struct mlxsw_sp_acl_tcam *VAR_9 = VAR_4->group.tcam;
 struct mlxsw_sp_acl_tcam_vregion *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 FUNC_2(&VAR_10->vchunk_list);
 FUNC_15(&VAR_10->lock);
 VAR_10->tcam = VAR_9;
 VAR_10->mlxsw_sp = VAR_3;
 VAR_10->vgroup = VAR_4;
 VAR_10->ref_count = 1;

 VAR_10->key_info = FUNC_8(VAR_8, VAR_6);
 if (FUNC_3(VAR_10->key_info)) {
  VAR_11 = FUNC_4(VAR_10->key_info);
  goto err_key_info_get;
 }

 VAR_10->region = FUNC_11(VAR_3, VAR_9,
         VAR_10, ((void*)0));
 if (FUNC_3(VAR_10->region)) {
  VAR_11 = FUNC_4(VAR_10->region);
  goto err_region_create;
 }

 VAR_11 = FUNC_13(VAR_3, VAR_4, VAR_10,
            VAR_5);
 if (VAR_11)
  goto err_vgroup_vregion_attach;

 if (VAR_4->vregion_rehash_enabled && VAR_7->region_rehash_hints_get) {

  FUNC_1(&VAR_10->rehash.dw,
      VAR_2);
  FUNC_14(VAR_10);
  FUNC_16(&VAR_9->lock);
  FUNC_7(&VAR_10->tlist, &VAR_9->vregion_list);
  FUNC_17(&VAR_9->lock);
 }

 return VAR_10;

err_vgroup_vregion_attach:
 FUNC_12(VAR_3, VAR_10->region);
err_region_create:
 FUNC_9(VAR_10->key_info);
err_key_info_get:
 FUNC_5(VAR_10);
 return FUNC_0(VAR_11);
}
