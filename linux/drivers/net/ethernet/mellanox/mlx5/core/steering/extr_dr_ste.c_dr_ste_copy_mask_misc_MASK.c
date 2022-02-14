
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_match_misc {void* bth_dst_qp; void* geneve_protocol_type; void* geneve_opt_len; void* inner_ipv6_flow_label; void* outer_ipv6_flow_label; void* geneve_oam; void* geneve_vni; void* vxlan_vni; void* gre_key_l; void* gre_key_h; void* gre_protocol; void* inner_second_svlan_tag; void* outer_second_svlan_tag; void* inner_second_cvlan_tag; void* outer_second_cvlan_tag; void* inner_second_vid; void* inner_second_cfi; void* inner_second_prio; void* outer_second_vid; void* outer_second_cfi; void* outer_second_prio; void* source_eswitch_owner_vhca_id; void* source_port; void* source_sqn; void* source_vhca_port; void* gre_s_present; void* gre_k_present; void* gre_c_present; } ;
struct TYPE_3__ {int lo; int hi; } ;
struct TYPE_4__ {TYPE_1__ nvgre; } ;


 void* FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_1(char *VAR_28, struct mlx5dr_match_misc *VAR_29)
{
 VAR_29->gre_c_present = FUNC_0(VAR_1, VAR_28, VAR_6);
 VAR_29->gre_k_present = FUNC_0(VAR_1, VAR_28, VAR_7);
 VAR_29->gre_s_present = FUNC_0(VAR_1, VAR_28, VAR_10);
 VAR_29->source_vhca_port = FUNC_0(VAR_1, VAR_28, VAR_26);
 VAR_29->source_sqn = FUNC_0(VAR_1, VAR_28, VAR_25);

 VAR_29->source_port = FUNC_0(VAR_1, VAR_28, VAR_24);
 VAR_29->source_eswitch_owner_vhca_id = FUNC_0(VAR_1, VAR_28,
            VAR_23);

 VAR_29->outer_second_prio = FUNC_0(VAR_1, VAR_28, VAR_20);
 VAR_29->outer_second_cfi = FUNC_0(VAR_1, VAR_28, VAR_18);
 VAR_29->outer_second_vid = FUNC_0(VAR_1, VAR_28, VAR_22);
 VAR_29->inner_second_prio = FUNC_0(VAR_1, VAR_28, VAR_14);
 VAR_29->inner_second_cfi = FUNC_0(VAR_1, VAR_28, VAR_12);
 VAR_29->inner_second_vid = FUNC_0(VAR_1, VAR_28, VAR_16);

 VAR_29->outer_second_cvlan_tag =
  FUNC_0(VAR_1, VAR_28, VAR_19);
 VAR_29->inner_second_cvlan_tag =
  FUNC_0(VAR_1, VAR_28, VAR_13);
 VAR_29->outer_second_svlan_tag =
  FUNC_0(VAR_1, VAR_28, VAR_21);
 VAR_29->inner_second_svlan_tag =
  FUNC_0(VAR_1, VAR_28, VAR_15);

 VAR_29->gre_protocol = FUNC_0(VAR_1, VAR_28, VAR_9);

 VAR_29->gre_key_h = FUNC_0(VAR_1, VAR_28, VAR_8.nvgre.hi);
 VAR_29->gre_key_l = FUNC_0(VAR_1, VAR_28, VAR_8.nvgre.lo);

 VAR_29->vxlan_vni = FUNC_0(VAR_1, VAR_28, VAR_27);

 VAR_29->geneve_vni = FUNC_0(VAR_1, VAR_28, VAR_5);
 VAR_29->geneve_oam = FUNC_0(VAR_1, VAR_28, VAR_2);

 VAR_29->outer_ipv6_flow_label =
  FUNC_0(VAR_1, VAR_28, VAR_17);

 VAR_29->inner_ipv6_flow_label =
  FUNC_0(VAR_1, VAR_28, VAR_11);

 VAR_29->geneve_opt_len = FUNC_0(VAR_1, VAR_28, VAR_3);
 VAR_29->geneve_protocol_type =
  FUNC_0(VAR_1, VAR_28, VAR_4);

 VAR_29->bth_dst_qp = FUNC_0(VAR_1, VAR_28, VAR_0);
}
