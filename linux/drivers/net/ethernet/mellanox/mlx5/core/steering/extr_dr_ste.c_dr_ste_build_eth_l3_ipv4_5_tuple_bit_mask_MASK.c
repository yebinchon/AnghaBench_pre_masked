
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {scalar_t__ tcp_flags; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;


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

__attribute__((used)) static void FUNC_2(struct mlx5dr_match_param *VAR_19,
            bool VAR_20,
            u8 *VAR_21)
{
 struct mlx5dr_match_spec *VAR_22 = VAR_20 ? &VAR_19->inner : &VAR_19->outer;

 FUNC_0(VAR_5, VAR_21,
     VAR_0, VAR_22, VAR_3);
 FUNC_0(VAR_5, VAR_21,
     VAR_12, VAR_22, VAR_14);
 FUNC_0(VAR_5, VAR_21,
     VAR_1, VAR_22, VAR_15);
 FUNC_0(VAR_5, VAR_21,
     VAR_1, VAR_22, VAR_17);
 FUNC_0(VAR_5, VAR_21,
     VAR_13, VAR_22, VAR_16);
 FUNC_0(VAR_5, VAR_21,
     VAR_13, VAR_22, VAR_18);
 FUNC_0(VAR_5, VAR_21,
     VAR_11, VAR_22, VAR_10);
 FUNC_0(VAR_5, VAR_21,
     VAR_7, VAR_22, VAR_6);
 FUNC_0(VAR_5, VAR_21,
     VAR_2, VAR_22, VAR_8);
 FUNC_0(VAR_5, VAR_21,
     VAR_4, VAR_22, VAR_9);

 if (VAR_22->tcp_flags) {
  FUNC_1(VAR_5, VAR_21, VAR_22);
  VAR_22->tcp_flags = 0;
 }
}
