
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int list; struct mlxsw_sp_acl_tcam_group* group; } ;
struct mlxsw_sp_acl_tcam_group {int lock; int region_count; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_group*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_acl_tcam_region *VAR_1)
{
 struct mlxsw_sp_acl_tcam_group *VAR_2 = VAR_1->group;

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_1->list);
 VAR_2->region_count--;
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(&VAR_2->lock);
}
