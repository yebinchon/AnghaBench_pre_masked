
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_group {int region_list; int id; int lock; struct mlxsw_sp_acl_tcam* tcam; } ;
struct mlxsw_sp_acl_tcam {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp_acl_tcam*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp_acl_tcam_group *VAR_0)
{
 struct mlxsw_sp_acl_tcam *VAR_1 = VAR_0->tcam;

 FUNC_3(&VAR_0->lock);
 FUNC_2(VAR_1, VAR_0->id);
 FUNC_0(!FUNC_1(&VAR_0->region_list));
}
