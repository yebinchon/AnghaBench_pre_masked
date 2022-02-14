
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {int smac_47_16; int smac_15_0; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int FUNC_1 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ,int) ;
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
 int FUNC_3 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_4(struct mlx5dr_match_param *VAR_15,
      bool VAR_16, u8 *VAR_17)
{
 struct mlx5dr_match_spec *VAR_18 = VAR_16 ? &VAR_15->inner : &VAR_15->outer;

 FUNC_1(VAR_3, VAR_17, VAR_2, VAR_18, VAR_2);
 FUNC_1(VAR_3, VAR_17, VAR_1, VAR_18, VAR_1);

 if (VAR_18->smac_47_16 || VAR_18->smac_15_0) {
  FUNC_2(VAR_14, VAR_17, VAR_13,
    VAR_18->smac_47_16 >> 16);
  FUNC_2(VAR_14, VAR_17, VAR_12,
    VAR_18->smac_47_16 << 16 | VAR_18->smac_15_0);
  VAR_18->smac_47_16 = 0;
  VAR_18->smac_15_0 = 0;
 }

 FUNC_1(VAR_3, VAR_17, VAR_8, VAR_18, VAR_7);
 FUNC_1(VAR_3, VAR_17, VAR_4, VAR_18, VAR_4);
 FUNC_1(VAR_3, VAR_17, VAR_6, VAR_18, VAR_5);
 FUNC_0(VAR_3, VAR_17, VAR_11, VAR_18, VAR_10);

 if (VAR_18->cvlan_tag) {
  FUNC_2(VAR_14, VAR_17, VAR_9, -1);
  VAR_18->cvlan_tag = 0;
 } else if (VAR_18->svlan_tag) {
  FUNC_2(VAR_14, VAR_17, VAR_9, -1);
  VAR_18->svlan_tag = 0;
 }

 if (VAR_18->cvlan_tag || VAR_18->svlan_tag) {
  FUNC_3("Invalid c/svlan mask configuration\n");
  return -VAR_0;
 }

 return 0;
}
