
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qlcnic_info {int bit_offsets; int min_tx_bw; int max_tx_bw; int max_tx_ques; int max_tx_mac_filters; int max_rx_mcast_mac_filters; int max_rx_ucast_mac_filters; int max_rx_ip_addr; int max_rx_lro_flow; int max_rx_status_rings; int max_rx_buf_rings; int max_rx_ques; int max_tx_vlan_keys; int max_local_ipv6_addrs; int max_remote_ipv6_addrs; } ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_cmd_args*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct qlcnic_adapter *VAR_2,
       struct qlcnic_info *VAR_3,
       u16 VAR_4)
{
 struct qlcnic_cmd_args VAR_5;
 int VAR_6;

 if (FUNC_1(&VAR_5, VAR_2, VAR_1))
  return -VAR_0;

 VAR_5.req.arg[1] = (VAR_4 << 16) | 0x1;
 VAR_5.req.arg[2] = VAR_3->bit_offsets;
 VAR_5.req.arg[2] |= VAR_3->min_tx_bw << 16;
 VAR_5.req.arg[3] = VAR_3->max_tx_bw | (VAR_3->max_tx_ques << 16);
 VAR_5.req.arg[4] = VAR_3->max_tx_mac_filters;
 VAR_5.req.arg[4] |= VAR_3->max_rx_mcast_mac_filters << 16;
 VAR_5.req.arg[5] = VAR_3->max_rx_ucast_mac_filters |
    (VAR_3->max_rx_ip_addr << 16);
 VAR_5.req.arg[6] = VAR_3->max_rx_lro_flow |
    (VAR_3->max_rx_status_rings << 16);
 VAR_5.req.arg[7] = VAR_3->max_rx_buf_rings |
    (VAR_3->max_rx_ques << 16);
 VAR_5.req.arg[8] = VAR_3->max_tx_vlan_keys;
 VAR_5.req.arg[8] |= VAR_3->max_local_ipv6_addrs << 16;
 VAR_5.req.arg[9] = VAR_3->max_remote_ipv6_addrs;

 VAR_6 = FUNC_3(VAR_2, &VAR_5);
 if (VAR_6)
  FUNC_0(&VAR_2->pdev->dev,
   "Failed to set vport info, err=%d\n", VAR_6);

 FUNC_2(&VAR_5);
 return VAR_6;
}
