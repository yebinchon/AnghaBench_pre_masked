
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {scalar_t__ inner; } ;
struct mlx5dr_match_spec {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;
struct dr_hw_ste_format {int * tag; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_match_param *VAR_3,
          struct mlx5dr_ste_build *VAR_4,
          u8 *VAR_5)
{
 struct dr_hw_ste_format *VAR_6 = (struct dr_hw_ste_format *)VAR_5;
 struct mlx5dr_match_spec *VAR_7 = VAR_4->inner ? &VAR_3->inner : &VAR_3->outer;
 u8 *VAR_8 = VAR_6->tag;

 FUNC_0(VAR_0, VAR_8, VAR_1, VAR_7, VAR_2);

 return 0;
}
