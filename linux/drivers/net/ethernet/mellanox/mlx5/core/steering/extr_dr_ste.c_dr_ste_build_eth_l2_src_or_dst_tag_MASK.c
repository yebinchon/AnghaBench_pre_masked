
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_spec {scalar_t__ ip_version; scalar_t__ outer_second_svlan_tag; scalar_t__ outer_second_cvlan_tag; scalar_t__ inner_second_svlan_tag; scalar_t__ inner_second_cvlan_tag; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec misc; struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;
struct mlx5dr_match_misc {scalar_t__ ip_version; scalar_t__ outer_second_svlan_tag; scalar_t__ outer_second_cvlan_tag; scalar_t__ inner_second_svlan_tag; scalar_t__ inner_second_cvlan_tag; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct dr_hw_ste_format {int * tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_spec*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,int ,int ) ;
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
 int VAR_24 ;
 int FUNC_2 (char*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static int FUNC_3(struct mlx5dr_match_param *VAR_30,
           bool VAR_31, u8 *VAR_32)
{
 struct dr_hw_ste_format *VAR_33 = (struct dr_hw_ste_format *)VAR_32;
 struct mlx5dr_match_spec *VAR_34 = VAR_31 ? &VAR_30->inner : &VAR_30->outer;
 struct mlx5dr_match_misc *VAR_35 = &VAR_30->misc;
 u8 *VAR_36 = VAR_33->tag;

 FUNC_0(VAR_7, VAR_36, VAR_13, VAR_34, VAR_12);
 FUNC_0(VAR_7, VAR_36, VAR_9, VAR_34, VAR_9);
 FUNC_0(VAR_7, VAR_36, VAR_11, VAR_34, VAR_10);
 FUNC_0(VAR_7, VAR_36, VAR_19, VAR_34, VAR_15);
 FUNC_0(VAR_7, VAR_36, VAR_20, VAR_34, VAR_8);

 if (VAR_34->ip_version) {
  if (VAR_34->ip_version == VAR_3) {
   FUNC_1(VAR_29, VAR_36, VAR_21, VAR_5);
   VAR_34->ip_version = 0;
  } else if (VAR_34->ip_version == VAR_4) {
   FUNC_1(VAR_29, VAR_36, VAR_21, VAR_6);
   VAR_34->ip_version = 0;
  } else {
   FUNC_2("Unsupported ip_version value\n");
   return -VAR_2;
  }
 }

 if (VAR_34->cvlan_tag) {
  FUNC_1(VAR_29, VAR_36, VAR_14, VAR_0);
  VAR_34->cvlan_tag = 0;
 } else if (VAR_34->svlan_tag) {
  FUNC_1(VAR_29, VAR_36, VAR_14, VAR_1);
  VAR_34->svlan_tag = 0;
 }

 if (VAR_31) {
  if (VAR_35->inner_second_cvlan_tag) {
   FUNC_1(VAR_29, VAR_36, VAR_28, VAR_0);
   VAR_35->inner_second_cvlan_tag = 0;
  } else if (VAR_35->inner_second_svlan_tag) {
   FUNC_1(VAR_29, VAR_36, VAR_28, VAR_1);
   VAR_35->inner_second_svlan_tag = 0;
  }

  FUNC_0(VAR_7, VAR_36, VAR_27, VAR_35, VAR_18);
  FUNC_0(VAR_7, VAR_36, VAR_25, VAR_35, VAR_16);
  FUNC_0(VAR_7, VAR_36, VAR_26, VAR_35, VAR_17);
 } else {
  if (VAR_35->outer_second_cvlan_tag) {
   FUNC_1(VAR_29, VAR_36, VAR_28, VAR_0);
   VAR_35->outer_second_cvlan_tag = 0;
  } else if (VAR_35->outer_second_svlan_tag) {
   FUNC_1(VAR_29, VAR_36, VAR_28, VAR_1);
   VAR_35->outer_second_svlan_tag = 0;
  }
  FUNC_0(VAR_7, VAR_36, VAR_27, VAR_35, VAR_24);
  FUNC_0(VAR_7, VAR_36, VAR_25, VAR_35, VAR_22);
  FUNC_0(VAR_7, VAR_36, VAR_26, VAR_35, VAR_23);
 }

 return 0;
}
