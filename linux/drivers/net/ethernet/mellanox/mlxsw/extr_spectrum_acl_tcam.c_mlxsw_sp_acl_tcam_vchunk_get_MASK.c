
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_vgroup {int vchunk_ht; } ;
struct mlxsw_sp_acl_tcam_vchunk {int ref_count; TYPE_1__* vregion; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afk_element_usage {int dummy; } ;
struct TYPE_2__ {int key_info; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct mlxsw_afk_element_usage*) ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vgroup*,unsigned int,struct mlxsw_afk_element_usage*) ;
 int VAR_1 ;
 struct mlxsw_sp_acl_tcam_vchunk* FUNC_4 (int *,unsigned int*,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_vchunk *
FUNC_5(struct mlxsw_sp *VAR_2,
        struct mlxsw_sp_acl_tcam_vgroup *VAR_3,
        unsigned int VAR_4,
        struct mlxsw_afk_element_usage *VAR_5)
{
 struct mlxsw_sp_acl_tcam_vchunk *VAR_6;

 VAR_6 = FUNC_4(&VAR_3->vchunk_ht, &VAR_4,
     VAR_1);
 if (VAR_6) {
  if (FUNC_1(!FUNC_2(VAR_6->vregion->key_info,
             VAR_5)))
   return FUNC_0(-VAR_0);
  VAR_6->ref_count++;
  return VAR_6;
 }
 return FUNC_3(VAR_2, VAR_3,
            VAR_4, VAR_5);
}
