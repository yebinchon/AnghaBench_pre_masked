
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

__attribute__((used)) static void FUNC_2(struct mlx5dr_match_param *VAR_17,
          bool VAR_18, u8 *VAR_19)
{
 struct mlx5dr_match_spec *VAR_20 = VAR_18 ? &VAR_17->inner : &VAR_17->outer;

 FUNC_0(VAR_3, VAR_19, VAR_1, VAR_20, VAR_12);
 FUNC_0(VAR_3, VAR_19, VAR_11, VAR_20, VAR_13);
 FUNC_0(VAR_3, VAR_19, VAR_1, VAR_20, VAR_15);
 FUNC_0(VAR_3, VAR_19, VAR_11, VAR_20, VAR_16);
 FUNC_0(VAR_3, VAR_19, VAR_10, VAR_20, VAR_8);
 FUNC_0(VAR_3, VAR_19, VAR_5, VAR_20, VAR_4);
 FUNC_0(VAR_3, VAR_19, VAR_0, VAR_20, VAR_6);
 FUNC_0(VAR_3, VAR_19, VAR_2, VAR_20, VAR_7);
 FUNC_0(VAR_3, VAR_19, VAR_9, VAR_20, VAR_14);

 if (VAR_20->tcp_flags) {
  FUNC_1(VAR_3, VAR_19, VAR_20);
  VAR_20->tcp_flags = 0;
 }
}
