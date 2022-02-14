
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int proto; } ;
struct mlxsw_sp1_mr_tcam_route {int * parman_prio; int parman_item; } ;
struct mlxsw_sp1_mr_tcam_region {int * parman_prios; int parman; } ;
struct mlxsw_sp1_mr_tcam {int dummy; } ;
typedef enum mlxsw_sp_mr_route_prio { ____Placeholder_mlxsw_sp_mr_route_prio } mlxsw_sp_mr_route_prio ;


 struct mlxsw_sp1_mr_tcam_region* FUNC_0 (struct mlxsw_sp1_mr_tcam*,int ) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp1_mr_tcam *VAR_0,
     struct mlxsw_sp1_mr_tcam_route *VAR_1,
     struct mlxsw_sp_mr_route_key *VAR_2,
     enum mlxsw_sp_mr_route_prio VAR_3)
{
 struct mlxsw_sp1_mr_tcam_region *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_2->proto);
 VAR_5 = FUNC_1(VAR_4->parman,
         &VAR_4->parman_prios[VAR_3],
         &VAR_1->parman_item);
 if (VAR_5)
  return VAR_5;

 VAR_1->parman_prio = &VAR_4->parman_prios[VAR_3];
 return 0;
}
