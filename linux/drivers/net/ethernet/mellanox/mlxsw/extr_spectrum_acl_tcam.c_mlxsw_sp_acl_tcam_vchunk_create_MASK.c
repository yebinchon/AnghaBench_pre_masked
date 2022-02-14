
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {int lock; int vchunk_list; int region; } ;
struct mlxsw_sp_acl_tcam_vgroup {int vchunk_ht; } ;
struct mlxsw_sp_acl_tcam_vchunk {unsigned int priority; int ref_count; int ht_node; int list; struct mlxsw_sp_acl_tcam_vregion* chunk; struct mlxsw_sp_acl_tcam_vregion* vregion; struct mlxsw_sp_acl_tcam_vgroup* vgroup; int ventry_list; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_acl_tcam_vregion*) ;
 unsigned int VAR_3 ;
 int FUNC_3 (struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_4 (struct mlxsw_sp_acl_tcam_vchunk*) ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vchunk*,int ) ;
 int FUNC_8 (struct mlxsw_sp_acl_tcam_vregion*) ;
 int VAR_4 ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vgroup*,unsigned int,struct mlxsw_afk_element_usage*) ;
 int FUNC_10 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_vchunk *
FUNC_15(struct mlxsw_sp *VAR_5,
    struct mlxsw_sp_acl_tcam_vgroup *VAR_6,
    unsigned int VAR_7,
    struct mlxsw_afk_element_usage *VAR_8)
{
 struct mlxsw_sp_acl_tcam_vregion *VAR_9;
 struct mlxsw_sp_acl_tcam_vchunk *VAR_10;
 int VAR_11;

 if (VAR_7 == VAR_3)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);
 FUNC_1(&VAR_10->ventry_list);
 VAR_10->priority = VAR_7;
 VAR_10->vgroup = VAR_6;
 VAR_10->ref_count = 1;

 VAR_9 = FUNC_9(VAR_5, VAR_6,
      VAR_7, VAR_8);
 if (FUNC_2(VAR_9)) {
  VAR_11 = FUNC_3(VAR_9);
  goto err_vregion_get;
 }

 VAR_10->vregion = VAR_9;

 VAR_11 = FUNC_13(&VAR_6->vchunk_ht, &VAR_10->ht_node,
         VAR_4);
 if (VAR_11)
  goto err_rhashtable_insert;

 FUNC_11(&VAR_9->lock);
 VAR_10->chunk = FUNC_7(VAR_5, VAR_10,
             VAR_10->vregion->region);
 if (FUNC_2(VAR_10->chunk)) {
  FUNC_12(&VAR_9->lock);
  VAR_11 = FUNC_3(VAR_10->chunk);
  goto err_chunk_create;
 }

 FUNC_8(VAR_9);
 FUNC_6(&VAR_10->list, &VAR_9->vchunk_list);
 FUNC_12(&VAR_9->lock);

 return VAR_10;

err_chunk_create:
 FUNC_14(&VAR_6->vchunk_ht, &VAR_10->ht_node,
          VAR_4);
err_rhashtable_insert:
 FUNC_10(VAR_5, VAR_9);
err_vregion_get:
 FUNC_4(VAR_10);
 return FUNC_0(VAR_11);
}
