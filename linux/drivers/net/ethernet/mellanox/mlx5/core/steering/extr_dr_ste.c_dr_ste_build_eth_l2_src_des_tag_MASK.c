
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_ste_build {scalar_t__ inner; } ;
struct mlx5dr_match_spec {int smac_47_16; int smac_15_0; scalar_t__ ip_version; scalar_t__ svlan_tag; scalar_t__ cvlan_tag; } ;
struct mlx5dr_match_param {struct mlx5dr_match_spec outer; struct mlx5dr_match_spec inner; } ;
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
 int FUNC_2 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_3(struct mlx5dr_match_param *VAR_20,
        struct mlx5dr_ste_build *VAR_21,
        u8 *VAR_22)
{
 struct mlx5dr_match_spec *VAR_23 = VAR_21->inner ? &VAR_20->inner : &VAR_20->outer;
 struct dr_hw_ste_format *VAR_24 = (struct dr_hw_ste_format *)VAR_22;
 u8 *VAR_25 = VAR_24->tag;

 FUNC_0(VAR_9, VAR_25, VAR_8, VAR_23, VAR_8);
 FUNC_0(VAR_9, VAR_25, VAR_7, VAR_23, VAR_7);

 if (VAR_23->smac_47_16 || VAR_23->smac_15_0) {
  FUNC_1(VAR_19, VAR_25, VAR_18,
    VAR_23->smac_47_16 >> 16);
  FUNC_1(VAR_19, VAR_25, VAR_17,
    VAR_23->smac_47_16 << 16 | VAR_23->smac_15_0);
  VAR_23->smac_47_16 = 0;
  VAR_23->smac_15_0 = 0;
 }

 if (VAR_23->ip_version) {
  if (VAR_23->ip_version == VAR_3) {
   FUNC_1(VAR_19, VAR_25, VAR_16, VAR_5);
   VAR_23->ip_version = 0;
  } else if (VAR_23->ip_version == VAR_4) {
   FUNC_1(VAR_19, VAR_25, VAR_16, VAR_6);
   VAR_23->ip_version = 0;
  } else {
   FUNC_2("Unsupported ip_version value\n");
   return -VAR_2;
  }
 }

 FUNC_0(VAR_9, VAR_25, VAR_14, VAR_23, VAR_13);
 FUNC_0(VAR_9, VAR_25, VAR_10, VAR_23, VAR_10);
 FUNC_0(VAR_9, VAR_25, VAR_12, VAR_23, VAR_11);

 if (VAR_23->cvlan_tag) {
  FUNC_1(VAR_19, VAR_25, VAR_15, VAR_0);
  VAR_23->cvlan_tag = 0;
 } else if (VAR_23->svlan_tag) {
  FUNC_1(VAR_19, VAR_25, VAR_15, VAR_1);
  VAR_23->svlan_tag = 0;
 }
 return 0;
}
