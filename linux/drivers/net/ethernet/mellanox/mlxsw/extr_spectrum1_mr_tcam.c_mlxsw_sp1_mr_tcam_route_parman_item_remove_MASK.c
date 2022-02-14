
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_route_key {int proto; } ;
struct mlxsw_sp1_mr_tcam_route {int parman_item; int parman_prio; } ;
struct mlxsw_sp1_mr_tcam_region {int parman; } ;
struct mlxsw_sp1_mr_tcam {int dummy; } ;


 struct mlxsw_sp1_mr_tcam_region* FUNC_0 (struct mlxsw_sp1_mr_tcam*,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp1_mr_tcam *VAR_0,
        struct mlxsw_sp1_mr_tcam_route *VAR_1,
        struct mlxsw_sp_mr_route_key *VAR_2)
{
 struct mlxsw_sp1_mr_tcam_region *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2->proto);
 FUNC_1(VAR_3->parman,
      VAR_1->parman_prio, &VAR_1->parman_item);
}
