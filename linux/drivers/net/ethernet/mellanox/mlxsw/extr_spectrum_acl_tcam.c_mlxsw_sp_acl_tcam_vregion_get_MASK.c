
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {int ref_count; } ;
struct mlxsw_sp_acl_tcam_vgroup {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_vgroup*,struct mlxsw_afk_element_usage*,struct mlxsw_afk_element_usage*) ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_2 (struct mlxsw_sp_acl_tcam_vgroup*,unsigned int,struct mlxsw_afk_element_usage*,int*) ;
 struct mlxsw_sp_acl_tcam_vregion* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vgroup*,unsigned int,struct mlxsw_afk_element_usage*) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_vregion *
FUNC_4(struct mlxsw_sp *VAR_1,
         struct mlxsw_sp_acl_tcam_vgroup *VAR_2,
         unsigned int VAR_3,
         struct mlxsw_afk_element_usage *VAR_4)
{
 struct mlxsw_afk_element_usage VAR_5;
 struct mlxsw_sp_acl_tcam_vregion *VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3,
       VAR_4, &VAR_7);
 if (VAR_6) {
  if (VAR_7) {







   return FUNC_0(-VAR_0);
  }
  VAR_6->ref_count++;
  return VAR_6;
 }

 FUNC_1(VAR_2, VAR_4,
           &VAR_5);

 return FUNC_3(VAR_1, VAR_2, VAR_3,
      &VAR_5);
}
