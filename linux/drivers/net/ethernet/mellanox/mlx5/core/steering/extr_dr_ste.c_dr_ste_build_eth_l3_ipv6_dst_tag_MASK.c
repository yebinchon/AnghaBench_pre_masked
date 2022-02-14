
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
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_match_param *VAR_5,
         struct mlx5dr_ste_build *VAR_6,
         u8 *VAR_7)
{
 struct dr_hw_ste_format *VAR_8 = (struct dr_hw_ste_format *)VAR_7;
 struct mlx5dr_match_spec *VAR_9 = VAR_6->inner ? &VAR_5->inner : &VAR_5->outer;
 u8 *VAR_10 = VAR_8->tag;

 FUNC_0(VAR_4, VAR_10, VAR_0, VAR_9, VAR_0);
 FUNC_0(VAR_4, VAR_10, VAR_3, VAR_9, VAR_3);
 FUNC_0(VAR_4, VAR_10, VAR_2, VAR_9, VAR_2);
 FUNC_0(VAR_4, VAR_10, VAR_1, VAR_9, VAR_1);

 return 0;
}
