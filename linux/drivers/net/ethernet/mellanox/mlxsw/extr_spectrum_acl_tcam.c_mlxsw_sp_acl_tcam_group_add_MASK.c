
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_group {int id; int region_list; int lock; struct mlxsw_sp_acl_tcam* tcam; } ;
struct mlxsw_sp_acl_tcam {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_acl_tcam *VAR_0,
       struct mlxsw_sp_acl_tcam_group *VAR_1)
{
 int VAR_2;

 VAR_1->tcam = VAR_0;
 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->region_list);

 VAR_2 = FUNC_1(VAR_0, &VAR_1->id);
 if (VAR_2)
  return VAR_2;

 return 0;
}
