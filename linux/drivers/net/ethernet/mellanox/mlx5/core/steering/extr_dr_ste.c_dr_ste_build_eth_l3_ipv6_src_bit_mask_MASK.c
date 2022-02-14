
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_match_param *VAR_5,
        bool VAR_6, u8 *VAR_7)
{
 struct mlx5dr_match_spec *VAR_8 = VAR_6 ? &VAR_5->inner : &VAR_5->outer;

 FUNC_0(VAR_0, VAR_7, VAR_1, VAR_8, VAR_1);
 FUNC_0(VAR_0, VAR_7, VAR_4, VAR_8, VAR_4);
 FUNC_0(VAR_0, VAR_7, VAR_3, VAR_8, VAR_3);
 FUNC_0(VAR_0, VAR_7, VAR_2, VAR_8, VAR_2);
}
