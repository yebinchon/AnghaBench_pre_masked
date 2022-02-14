
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_mr_tcam_erif_list {int dummy; } ;
struct mlxsw_sp_mr_route_info {int erif_num; int * erif_indices; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_mr_tcam_erif_list*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
          struct mlxsw_sp_mr_tcam_erif_list *VAR_1,
          struct mlxsw_sp_mr_route_info *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->erif_num; VAR_4++) {
  u16 VAR_5 = VAR_2->erif_indices[VAR_4];

  VAR_3 = FUNC_0(VAR_0, VAR_1,
      VAR_5);
  if (VAR_3)
   return VAR_3;
 }
 return 0;
}
