
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int FUNC_1 (struct mlx5dr_match_param*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct mlx5dr_match_param *VAR_3,
          bool VAR_4, u8 *VAR_5)
{
 struct mlx5dr_match_spec *VAR_6 = VAR_4 ? &VAR_3->inner : &VAR_3->outer;

 FUNC_0(VAR_0, VAR_5, VAR_2, VAR_6, VAR_2);
 FUNC_0(VAR_0, VAR_5, VAR_1, VAR_6, VAR_1);

 FUNC_1(VAR_3, VAR_4, VAR_5);
}
