
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {int dummy; } ;
struct mlx5dr_match_misc {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc misc; } ;
struct dr_hw_ste_format {int * tag; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_misc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_match_param *VAR_7,
    struct mlx5dr_ste_build *VAR_8,
    u8 *VAR_9)
{
 struct dr_hw_ste_format *VAR_10 = (struct dr_hw_ste_format *)VAR_9;
 struct mlx5dr_match_misc *VAR_11 = &VAR_7->misc;
 u8 *VAR_12 = VAR_10->tag;

 FUNC_0(VAR_0, VAR_12, VAR_5, VAR_11, VAR_5);

 FUNC_0(VAR_0, VAR_12, VAR_2, VAR_11, VAR_2);
 FUNC_0(VAR_0, VAR_12, VAR_3, VAR_11, VAR_3);
 FUNC_0(VAR_0, VAR_12, VAR_4, VAR_11, VAR_4);

 FUNC_0(VAR_0, VAR_12, VAR_1, VAR_11, VAR_1);

 FUNC_0(VAR_0, VAR_12, VAR_6, VAR_11, VAR_6);

 return 0;
}
