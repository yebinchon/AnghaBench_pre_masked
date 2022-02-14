
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {scalar_t__ inner; } ;
struct mlx5dr_match_spec {scalar_t__ tcp_flags; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;
struct dr_hw_ste_format {int * tag; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int FUNC_1 (int ,int *,struct mlx5dr_match_spec*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_2(struct mlx5dr_match_param *VAR_19,
      struct mlx5dr_ste_build *VAR_20,
      u8 *VAR_21)
{
 struct dr_hw_ste_format *VAR_22 = (struct dr_hw_ste_format *)VAR_21;
 struct mlx5dr_match_spec *VAR_23 = VAR_20->inner ? &VAR_19->inner : &VAR_19->outer;
 u8 *VAR_24 = VAR_22->tag;

 FUNC_0(VAR_5, VAR_24, VAR_0, VAR_23, VAR_3);
 FUNC_0(VAR_5, VAR_24, VAR_12, VAR_23, VAR_14);
 FUNC_0(VAR_5, VAR_24, VAR_1, VAR_23, VAR_15);
 FUNC_0(VAR_5, VAR_24, VAR_1, VAR_23, VAR_17);
 FUNC_0(VAR_5, VAR_24, VAR_13, VAR_23, VAR_16);
 FUNC_0(VAR_5, VAR_24, VAR_13, VAR_23, VAR_18);
 FUNC_0(VAR_5, VAR_24, VAR_11, VAR_23, VAR_10);
 FUNC_0(VAR_5, VAR_24, VAR_7, VAR_23, VAR_6);
 FUNC_0(VAR_5, VAR_24, VAR_2, VAR_23, VAR_8);
 FUNC_0(VAR_5, VAR_24, VAR_4, VAR_23, VAR_9);

 if (VAR_23->tcp_flags) {
  FUNC_1(VAR_5, VAR_24, VAR_23);
  VAR_23->tcp_flags = 0;
 }

 return 0;
}
