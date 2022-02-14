
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {int dummy; } ;
struct mlx5dr_match_misc2 {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc2 misc2; } ;
struct dr_hw_ste_format {int * tag; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_misc2*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_match_param *VAR_9,
           struct mlx5dr_ste_build *VAR_10,
           u8 *VAR_11)
{
 struct dr_hw_ste_format *VAR_12 = (struct dr_hw_ste_format *)VAR_11;
 struct mlx5dr_match_misc2 *VAR_13 = &VAR_9->misc2;
 u8 *VAR_14 = VAR_12->tag;

 FUNC_0(VAR_4, VAR_14, VAR_5, VAR_13, VAR_0);
 FUNC_0(VAR_4, VAR_14, VAR_6, VAR_13, VAR_1);
 FUNC_0(VAR_4, VAR_14, VAR_7, VAR_13, VAR_2);
 FUNC_0(VAR_4, VAR_14, VAR_8, VAR_13, VAR_3);

 return 0;
}
