
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_element_usage {int dummy; } ;
struct mlxsw_sp_acl_tcam_vgroup {int patterns_count; struct mlxsw_sp_acl_tcam_pattern* patterns; struct mlxsw_afk_element_usage tmplt_elusage; scalar_t__ tmplt_elusage_set; } ;
struct mlxsw_sp_acl_tcam_pattern {int elements_count; int elements; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_afk_element_usage*,struct mlxsw_afk_element_usage*,int) ;
 int FUNC_2 (struct mlxsw_afk_element_usage*,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlxsw_afk_element_usage*,struct mlxsw_afk_element_usage*) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_acl_tcam_vgroup *VAR_0,
          struct mlxsw_afk_element_usage *VAR_1,
          struct mlxsw_afk_element_usage *VAR_2)
{
 const struct mlxsw_sp_acl_tcam_pattern *VAR_3;
 int VAR_4;




 if (VAR_0->tmplt_elusage_set) {
  FUNC_1(VAR_2, &VAR_0->tmplt_elusage, sizeof(*VAR_2));
  FUNC_0(!FUNC_3(VAR_1, VAR_2));
  return;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->patterns_count; VAR_4++) {
  VAR_3 = &VAR_0->patterns[VAR_4];
  FUNC_2(VAR_2, VAR_3->elements,
          VAR_3->elements_count);
  if (FUNC_3(VAR_1, VAR_2))
   return;
 }
 FUNC_1(VAR_2, VAR_1, sizeof(*VAR_2));
}
