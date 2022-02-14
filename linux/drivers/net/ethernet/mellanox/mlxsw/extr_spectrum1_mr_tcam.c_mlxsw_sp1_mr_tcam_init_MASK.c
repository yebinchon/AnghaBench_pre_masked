
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp1_mr_tcam_region {int dummy; } ;
struct mlxsw_sp1_mr_tcam {struct mlxsw_sp1_mr_tcam_region* tcam_regions; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct mlxsw_sp1_mr_tcam_region*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp1_mr_tcam_region*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_6, void *VAR_7)
{
 struct mlxsw_sp1_mr_tcam *VAR_8 = VAR_7;
 struct mlxsw_sp1_mr_tcam_region *VAR_9 = &VAR_8->tcam_regions[0];
 u32 VAR_10;
 int VAR_11;

 if (!FUNC_0(VAR_6->core, VAR_0))
  return -VAR_1;

 VAR_10 = VAR_2;
 VAR_11 = FUNC_2(VAR_6,
         &VAR_9[VAR_4],
         VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_3;
 VAR_11 = FUNC_2(VAR_6,
         &VAR_9[VAR_5],
         VAR_10);
 if (VAR_11)
  goto err_ipv6_region_init;

 return 0;

err_ipv6_region_init:
 FUNC_1(&VAR_9[VAR_4]);
 return VAR_11;
}
