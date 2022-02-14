
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_mr_ruleset {int vgroup; int vchunk; } ;
struct mlxsw_sp_acl_tcam {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_afk_element_usage {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mlxsw_sp*,int *,int,struct mlxsw_afk_element_usage*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam*,int *,int ,int ,struct mlxsw_afk_element_usage*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp *VAR_2,
     struct mlxsw_sp_acl_tcam *VAR_3,
     void *VAR_4,
     struct mlxsw_afk_element_usage *VAR_5)
{
 struct mlxsw_sp_acl_tcam_mr_ruleset *VAR_6 = VAR_4;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_6->vgroup,
        VAR_1,
        VAR_0,
        VAR_5, 0);
 if (VAR_7)
  return VAR_7;







 VAR_6->vchunk = FUNC_2(VAR_2,
             &VAR_6->vgroup, 1,
             VAR_5);
 if (FUNC_0(VAR_6->vchunk)) {
  VAR_7 = FUNC_1(VAR_6->vchunk);
  goto err_chunk_get;
 }

 return 0;

err_chunk_get:
 FUNC_4(&VAR_6->vgroup);
 return VAR_7;
}
