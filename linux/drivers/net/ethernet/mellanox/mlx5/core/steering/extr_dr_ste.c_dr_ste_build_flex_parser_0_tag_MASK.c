
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {int dummy; } ;
struct mlx5dr_match_misc2 {int dummy; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc2 misc2; } ;
struct dr_hw_ste_format {int * tag; } ;


 scalar_t__ FUNC_0 (struct mlx5dr_match_misc2*) ;
 int FUNC_1 (int ,int *,int ,struct mlx5dr_match_misc2*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_match_param *VAR_13,
       struct mlx5dr_ste_build *VAR_14,
       u8 *VAR_15)
{
 struct dr_hw_ste_format *VAR_16 = (struct dr_hw_ste_format *)VAR_15;
 struct mlx5dr_match_misc2 *VAR_17 = &VAR_13->misc2;
 u8 *VAR_18 = VAR_16->tag;

 if (FUNC_0(VAR_17)) {
  FUNC_1(VAR_0, VAR_18, VAR_10,
          VAR_17, VAR_2);

  FUNC_1(VAR_0, VAR_18, VAR_9,
          VAR_17, VAR_1);

  FUNC_1(VAR_0, VAR_18, VAR_11,
          VAR_17, VAR_3);

  FUNC_1(VAR_0, VAR_18, VAR_12,
          VAR_17, VAR_4);
 } else {
  FUNC_1(VAR_0, VAR_18, VAR_10,
          VAR_17, VAR_6);

  FUNC_1(VAR_0, VAR_18, VAR_9,
          VAR_17, VAR_5);

  FUNC_1(VAR_0, VAR_18, VAR_11,
          VAR_17, VAR_7);

  FUNC_1(VAR_0, VAR_18, VAR_12,
          VAR_17, VAR_8);
 }
 return 0;
}
