
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct mlx5dr_match_misc {int vxlan_vni; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc misc; struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;


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

__attribute__((used)) static void FUNC_3(struct mlx5dr_match_param *VAR_17,
          bool VAR_18, u8 *VAR_19)
{
 struct mlx5dr_match_spec *VAR_20 = VAR_18 ? &VAR_17->inner : &VAR_17->outer;
 struct mlx5dr_match_misc *VAR_21 = &VAR_17->misc;

 FUNC_1(VAR_2, VAR_19, VAR_1, VAR_20, VAR_1);
 FUNC_1(VAR_2, VAR_19, VAR_0, VAR_20, VAR_0);
 FUNC_1(VAR_2, VAR_19, VAR_8, VAR_20, VAR_7);
 FUNC_1(VAR_2, VAR_19, VAR_4, VAR_20, VAR_4);
 FUNC_1(VAR_2, VAR_19, VAR_6, VAR_20, VAR_5);
 FUNC_1(VAR_2, VAR_19, VAR_11, VAR_20, VAR_10);
 FUNC_1(VAR_2, VAR_19, VAR_14, VAR_20, VAR_3);
 FUNC_0(VAR_2, VAR_19, VAR_15, VAR_20, VAR_12);

 if (VAR_21->vxlan_vni) {
  FUNC_2(VAR_16, VAR_19,
    VAR_13, (VAR_21->vxlan_vni << 8));
  VAR_21->vxlan_vni = 0;
 }

 if (VAR_20->svlan_tag || VAR_20->cvlan_tag) {
  FUNC_2(VAR_16, VAR_19, VAR_9, -1);
  VAR_20->cvlan_tag = 0;
  VAR_20->svlan_tag = 0;
 }
}
