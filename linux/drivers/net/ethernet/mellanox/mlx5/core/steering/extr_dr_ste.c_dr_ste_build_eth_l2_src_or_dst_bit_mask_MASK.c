
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {scalar_t__ outer_second_svlan_tag; scalar_t__ outer_second_cvlan_tag; scalar_t__ inner_second_svlan_tag; scalar_t__ inner_second_cvlan_tag; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec misc; struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;
struct mlx5dr_match_misc {scalar_t__ outer_second_svlan_tag; scalar_t__ outer_second_cvlan_tag; scalar_t__ inner_second_svlan_tag; scalar_t__ inner_second_cvlan_tag; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int FUNC_1 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_3(struct mlx5dr_match_param *VAR_24,
     bool VAR_25, u8 *VAR_26)
{
 struct mlx5dr_match_spec *VAR_27 = VAR_25 ? &VAR_24->inner : &VAR_24->outer;
 struct mlx5dr_match_misc *VAR_28 = &VAR_24->misc;

 FUNC_1(VAR_0, VAR_26, VAR_6, VAR_27, VAR_5);
 FUNC_1(VAR_0, VAR_26, VAR_2, VAR_27, VAR_2);
 FUNC_1(VAR_0, VAR_26, VAR_4, VAR_27, VAR_3);
 FUNC_1(VAR_0, VAR_26, VAR_12, VAR_27, VAR_8);
 FUNC_1(VAR_0, VAR_26, VAR_14, VAR_27, VAR_1);
 FUNC_0(VAR_0, VAR_26, VAR_15, VAR_27, VAR_13);

 if (VAR_27->svlan_tag || VAR_27->cvlan_tag) {
  FUNC_2(VAR_23, VAR_26, VAR_7, -1);
  VAR_27->cvlan_tag = 0;
  VAR_27->svlan_tag = 0;
 }

 if (VAR_25) {
  if (VAR_28->inner_second_cvlan_tag ||
      VAR_28->inner_second_svlan_tag) {
   FUNC_2(VAR_23, VAR_26, VAR_22, -1);
   VAR_28->inner_second_cvlan_tag = 0;
   VAR_28->inner_second_svlan_tag = 0;
  }

  FUNC_1(VAR_0, VAR_26,
      VAR_21, VAR_28, VAR_11);
  FUNC_1(VAR_0, VAR_26,
      VAR_19, VAR_28, VAR_9);
  FUNC_1(VAR_0, VAR_26,
      VAR_20, VAR_28, VAR_10);
 } else {
  if (VAR_28->outer_second_cvlan_tag ||
      VAR_28->outer_second_svlan_tag) {
   FUNC_2(VAR_23, VAR_26, VAR_22, -1);
   VAR_28->outer_second_cvlan_tag = 0;
   VAR_28->outer_second_svlan_tag = 0;
  }

  FUNC_1(VAR_0, VAR_26,
      VAR_21, VAR_28, VAR_18);
  FUNC_1(VAR_0, VAR_26,
      VAR_19, VAR_28, VAR_16);
  FUNC_1(VAR_0, VAR_26,
      VAR_20, VAR_28, VAR_17);
 }
}
