
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_misc3 {void* icmpv6_code; void* icmpv6_type; void* icmpv4_code; void* icmpv4_type; void* icmpv6_header_data; void* icmpv4_header_data; void* outer_vxlan_gpe_flags; void* outer_vxlan_gpe_next_protocol; void* outer_vxlan_gpe_vni; void* outer_tcp_ack_num; void* inner_tcp_ack_num; void* outer_tcp_seq_num; void* inner_tcp_seq_num; } ;


 void* FUNC_0 (int ,char*,int ) ;
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

__attribute__((used)) static void FUNC_1(char *VAR_14, struct mlx5dr_match_misc3 *VAR_15)
{
 VAR_15->inner_tcp_seq_num = FUNC_0(VAR_0, VAR_14, VAR_8);
 VAR_15->outer_tcp_seq_num = FUNC_0(VAR_0, VAR_14, VAR_10);
 VAR_15->inner_tcp_ack_num = FUNC_0(VAR_0, VAR_14, VAR_7);
 VAR_15->outer_tcp_ack_num = FUNC_0(VAR_0, VAR_14, VAR_9);
 VAR_15->outer_vxlan_gpe_vni =
  FUNC_0(VAR_0, VAR_14, VAR_13);
 VAR_15->outer_vxlan_gpe_next_protocol =
  FUNC_0(VAR_0, VAR_14, VAR_12);
 VAR_15->outer_vxlan_gpe_flags =
  FUNC_0(VAR_0, VAR_14, VAR_11);
 VAR_15->icmpv4_header_data = FUNC_0(VAR_0, VAR_14, VAR_2);
 VAR_15->icmpv6_header_data =
  FUNC_0(VAR_0, VAR_14, VAR_5);
 VAR_15->icmpv4_type = FUNC_0(VAR_0, VAR_14, VAR_3);
 VAR_15->icmpv4_code = FUNC_0(VAR_0, VAR_14, VAR_1);
 VAR_15->icmpv6_type = FUNC_0(VAR_0, VAR_14, VAR_6);
 VAR_15->icmpv6_code = FUNC_0(VAR_0, VAR_14, VAR_4);
}
