
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5dr_match_misc2 {void* metadata_reg_b; void* metadata_reg_a; void* metadata_reg_c_0; void* metadata_reg_c_1; void* metadata_reg_c_2; void* metadata_reg_c_3; void* metadata_reg_c_4; void* metadata_reg_c_5; void* metadata_reg_c_6; void* metadata_reg_c_7; void* outer_first_mpls_over_udp_ttl; void* outer_first_mpls_over_udp_s_bos; void* outer_first_mpls_over_udp_exp; void* outer_first_mpls_over_udp_label; void* outer_first_mpls_over_gre_ttl; void* outer_first_mpls_over_gre_s_bos; void* outer_first_mpls_over_gre_exp; void* outer_first_mpls_over_gre_label; void* inner_first_mpls_ttl; void* inner_first_mpls_s_bos; void* inner_first_mpls_exp; void* inner_first_mpls_label; void* outer_first_mpls_ttl; void* outer_first_mpls_s_bos; void* outer_first_mpls_exp; void* outer_first_mpls_label; } ;
struct TYPE_8__ {int mpls_ttl; int mpls_s_bos; int mpls_exp; int mpls_label; } ;
struct TYPE_7__ {int mpls_ttl; int mpls_s_bos; int mpls_exp; int mpls_label; } ;
struct TYPE_6__ {int mpls_ttl; int mpls_s_bos; int mpls_exp; int mpls_label; } ;
struct TYPE_5__ {int mpls_ttl; int mpls_s_bos; int mpls_exp; int mpls_label; } ;


 void* FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
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
 TYPE_3__ VAR_12 ;
 TYPE_2__ VAR_13 ;
 TYPE_1__ VAR_14 ;

__attribute__((used)) static void FUNC_1(char *VAR_15, struct mlx5dr_match_misc2 *VAR_16)
{
 VAR_16->outer_first_mpls_label =
  FUNC_0(VAR_0, VAR_15, VAR_12.mpls_label);
 VAR_16->outer_first_mpls_exp =
  FUNC_0(VAR_0, VAR_15, VAR_12.mpls_exp);
 VAR_16->outer_first_mpls_s_bos =
  FUNC_0(VAR_0, VAR_15, VAR_12.mpls_s_bos);
 VAR_16->outer_first_mpls_ttl =
  FUNC_0(VAR_0, VAR_15, VAR_12.mpls_ttl);
 VAR_16->inner_first_mpls_label =
  FUNC_0(VAR_0, VAR_15, VAR_1.mpls_label);
 VAR_16->inner_first_mpls_exp =
  FUNC_0(VAR_0, VAR_15, VAR_1.mpls_exp);
 VAR_16->inner_first_mpls_s_bos =
  FUNC_0(VAR_0, VAR_15, VAR_1.mpls_s_bos);
 VAR_16->inner_first_mpls_ttl =
  FUNC_0(VAR_0, VAR_15, VAR_1.mpls_ttl);
 VAR_16->outer_first_mpls_over_gre_label =
  FUNC_0(VAR_0, VAR_15, VAR_13.mpls_label);
 VAR_16->outer_first_mpls_over_gre_exp =
  FUNC_0(VAR_0, VAR_15, VAR_13.mpls_exp);
 VAR_16->outer_first_mpls_over_gre_s_bos =
  FUNC_0(VAR_0, VAR_15, VAR_13.mpls_s_bos);
 VAR_16->outer_first_mpls_over_gre_ttl =
  FUNC_0(VAR_0, VAR_15, VAR_13.mpls_ttl);
 VAR_16->outer_first_mpls_over_udp_label =
  FUNC_0(VAR_0, VAR_15, VAR_14.mpls_label);
 VAR_16->outer_first_mpls_over_udp_exp =
  FUNC_0(VAR_0, VAR_15, VAR_14.mpls_exp);
 VAR_16->outer_first_mpls_over_udp_s_bos =
  FUNC_0(VAR_0, VAR_15, VAR_14.mpls_s_bos);
 VAR_16->outer_first_mpls_over_udp_ttl =
  FUNC_0(VAR_0, VAR_15, VAR_14.mpls_ttl);
 VAR_16->metadata_reg_c_7 = FUNC_0(VAR_0, VAR_15, VAR_11);
 VAR_16->metadata_reg_c_6 = FUNC_0(VAR_0, VAR_15, VAR_10);
 VAR_16->metadata_reg_c_5 = FUNC_0(VAR_0, VAR_15, VAR_9);
 VAR_16->metadata_reg_c_4 = FUNC_0(VAR_0, VAR_15, VAR_8);
 VAR_16->metadata_reg_c_3 = FUNC_0(VAR_0, VAR_15, VAR_7);
 VAR_16->metadata_reg_c_2 = FUNC_0(VAR_0, VAR_15, VAR_6);
 VAR_16->metadata_reg_c_1 = FUNC_0(VAR_0, VAR_15, VAR_5);
 VAR_16->metadata_reg_c_0 = FUNC_0(VAR_0, VAR_15, VAR_4);
 VAR_16->metadata_reg_a = FUNC_0(VAR_0, VAR_15, VAR_2);
 VAR_16->metadata_reg_b = FUNC_0(VAR_0, VAR_15, VAR_3);
}
