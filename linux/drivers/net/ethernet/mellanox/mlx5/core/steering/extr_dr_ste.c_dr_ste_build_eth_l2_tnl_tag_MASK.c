
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {scalar_t__ inner; } ;
struct mlx5dr_match_spec {scalar_t__ ip_version; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct mlx5dr_match_misc {int vxlan_vni; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc misc; struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;
struct dr_hw_ste_format {int * tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,int ,int) ;
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

__attribute__((used)) static int FUNC_2(struct mlx5dr_match_param *VAR_23,
           struct mlx5dr_ste_build *VAR_24,
           u8 *VAR_25)
{
 struct mlx5dr_match_spec *VAR_26 = VAR_24->inner ? &VAR_23->inner : &VAR_23->outer;
 struct dr_hw_ste_format *VAR_27 = (struct dr_hw_ste_format *)VAR_25;
 struct mlx5dr_match_misc *VAR_28 = &VAR_23->misc;
 u8 *VAR_29 = VAR_27->tag;

 FUNC_0(VAR_9, VAR_29, VAR_8, VAR_26, VAR_8);
 FUNC_0(VAR_9, VAR_29, VAR_7, VAR_26, VAR_7);
 FUNC_0(VAR_9, VAR_29, VAR_15, VAR_26, VAR_14);
 FUNC_0(VAR_9, VAR_29, VAR_11, VAR_26, VAR_11);
 FUNC_0(VAR_9, VAR_29, VAR_18, VAR_26, VAR_17);
 FUNC_0(VAR_9, VAR_29, VAR_13, VAR_26, VAR_12);
 FUNC_0(VAR_9, VAR_29, VAR_20, VAR_26, VAR_10);

 if (VAR_28->vxlan_vni) {
  FUNC_1(VAR_22, VAR_29, VAR_19,
    (VAR_28->vxlan_vni << 8));
  VAR_28->vxlan_vni = 0;
 }

 if (VAR_26->cvlan_tag) {
  FUNC_1(VAR_22, VAR_29, VAR_16, VAR_0);
  VAR_26->cvlan_tag = 0;
 } else if (VAR_26->svlan_tag) {
  FUNC_1(VAR_22, VAR_29, VAR_16, VAR_1);
  VAR_26->svlan_tag = 0;
 }

 if (VAR_26->ip_version) {
  if (VAR_26->ip_version == VAR_3) {
   FUNC_1(VAR_22, VAR_29, VAR_21, VAR_5);
   VAR_26->ip_version = 0;
  } else if (VAR_26->ip_version == VAR_4) {
   FUNC_1(VAR_22, VAR_29, VAR_21, VAR_6);
   VAR_26->ip_version = 0;
  } else {
   return -VAR_2;
  }
 }

 return 0;
}
