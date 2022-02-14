
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_ste_build {int rx; int inner; int * ste_build_tag_func; int bit_mask; int byte_mask; int lu_type; } ;
struct mlx5dr_match_param {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5dr_match_param*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx5dr_ste_build *VAR_2,
          struct mlx5dr_match_param *VAR_3,
          bool VAR_4, bool VAR_5)
{
 FUNC_1(VAR_3, VAR_4, VAR_2->bit_mask);

 VAR_2->rx = VAR_5;
 VAR_2->inner = VAR_4;
 VAR_2->lu_type = FUNC_0(VAR_0, VAR_5, VAR_4);
 VAR_2->byte_mask = FUNC_2(VAR_2->bit_mask);
 VAR_2->ste_build_tag_func = &VAR_1;
}
