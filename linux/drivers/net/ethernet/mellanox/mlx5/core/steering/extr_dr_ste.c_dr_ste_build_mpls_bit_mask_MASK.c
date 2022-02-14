
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_misc2 {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc2 misc2; } ;


 int FUNC_0 (int ,struct mlx5dr_match_misc2*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_match_param *VAR_2,
           bool VAR_3, u8 *VAR_4)
{
 struct mlx5dr_match_misc2 *VAR_5 = &VAR_2->misc2;

 if (VAR_3)
  FUNC_0(VAR_0, VAR_5, VAR_3, VAR_4);
 else
  FUNC_0(VAR_0, VAR_5, VAR_1, VAR_4);
}
