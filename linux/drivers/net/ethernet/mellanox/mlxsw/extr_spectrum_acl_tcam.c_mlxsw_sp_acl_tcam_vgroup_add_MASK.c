
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vgroup {unsigned int patterns_count; int vregion_rehash_enabled; int tmplt_elusage_set; int group; int vchunk_ht; int vregion_list; int tmplt_elusage; struct mlxsw_sp_acl_tcam_pattern const* patterns; } ;
struct mlxsw_sp_acl_tcam_pattern {int dummy; } ;
struct mlxsw_sp_acl_tcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mlxsw_afk_element_usage*,int) ;
 int FUNC_2 (struct mlxsw_sp_acl_tcam*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp *VAR_1,
        struct mlxsw_sp_acl_tcam *VAR_2,
        struct mlxsw_sp_acl_tcam_vgroup *VAR_3,
        const struct mlxsw_sp_acl_tcam_pattern *VAR_4,
        unsigned int VAR_5,
        struct mlxsw_afk_element_usage *VAR_6,
        bool VAR_7)
{
 int VAR_8;

 VAR_3->patterns = VAR_4;
 VAR_3->patterns_count = VAR_5;
 VAR_3->vregion_rehash_enabled = VAR_7;

 if (VAR_6) {
  VAR_3->tmplt_elusage_set = 1;
  FUNC_1(&VAR_3->tmplt_elusage, VAR_6,
         sizeof(VAR_3->tmplt_elusage));
 }
 FUNC_0(&VAR_3->vregion_list);

 VAR_8 = FUNC_2(VAR_2, &VAR_3->group);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_4(&VAR_3->vchunk_ht,
         &VAR_0);
 if (VAR_8)
  goto err_rhashtable_init;

 return 0;

err_rhashtable_init:
 FUNC_3(&VAR_3->group);
 return VAR_8;
}
