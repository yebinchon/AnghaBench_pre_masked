
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_mr_tcam_region {int dummy; } ;
struct mlxsw_sp1_mr_tcam {struct mlxsw_sp1_mr_tcam_region* tcam_regions; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;



__attribute__((used)) static struct mlxsw_sp1_mr_tcam_region *
FUNC_0(struct mlxsw_sp1_mr_tcam *VAR_0,
      enum mlxsw_sp_l3proto VAR_1)
{
 return &VAR_0->tcam_regions[VAR_1];
}
