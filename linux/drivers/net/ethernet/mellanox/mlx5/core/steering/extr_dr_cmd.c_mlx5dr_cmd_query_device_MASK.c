
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_cmd_caps {int roce_min_src_udp; int hdr_modify_icm_addr; int log_icm_size; int tx_sw_owner; void* max_ft_level; void* rx_sw_owner; void* nic_tx_allow_address; void* nic_tx_drop_address; void* nic_rx_drop_address; void* flex_parser_id_icmpv6_dw1; void* flex_parser_id_icmpv6_dw0; void* flex_parser_id_icmp_dw1; void* flex_parser_id_icmp_dw0; void* flex_protocols; void* gvmi; void* eswitch_manager; void* prio_tag_required; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 void* FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ) ;
 void* FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 void* FUNC_5 (struct mlx5_core_dev*,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (struct mlx5dr_cmd_caps*) ;
 scalar_t__ FUNC_8 (struct mlx5dr_cmd_caps*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int FUNC_9(struct mlx5_core_dev *VAR_16,
       struct mlx5dr_cmd_caps *VAR_17)
{
 VAR_17->prio_tag_required = FUNC_5(VAR_16, VAR_9);
 VAR_17->eswitch_manager = FUNC_5(VAR_16, VAR_0);
 VAR_17->gvmi = FUNC_5(VAR_16, VAR_15);
 VAR_17->flex_protocols = FUNC_5(VAR_16, VAR_5);

 if (FUNC_7(VAR_17)) {
  VAR_17->flex_parser_id_icmp_dw0 = FUNC_5(VAR_16, VAR_1);
  VAR_17->flex_parser_id_icmp_dw1 = FUNC_5(VAR_16, VAR_2);
 }

 if (FUNC_8(VAR_17)) {
  VAR_17->flex_parser_id_icmpv6_dw0 =
   FUNC_5(VAR_16, VAR_3);
  VAR_17->flex_parser_id_icmpv6_dw1 =
   FUNC_5(VAR_16, VAR_4);
 }

 VAR_17->nic_rx_drop_address =
  FUNC_1(VAR_16, VAR_12);
 VAR_17->nic_tx_drop_address =
  FUNC_1(VAR_16, VAR_14);
 VAR_17->nic_tx_allow_address =
  FUNC_1(VAR_16, VAR_13);

 VAR_17->rx_sw_owner = FUNC_3(VAR_16, VAR_11);
 VAR_17->max_ft_level = FUNC_3(VAR_16, VAR_8);

 VAR_17->tx_sw_owner = FUNC_4(VAR_16, VAR_11);

 VAR_17->log_icm_size = FUNC_2(VAR_16, VAR_7);
 VAR_17->hdr_modify_icm_addr =
  FUNC_0(VAR_16, VAR_6);

 VAR_17->roce_min_src_udp = FUNC_6(VAR_16, VAR_10);

 return 0;
}
