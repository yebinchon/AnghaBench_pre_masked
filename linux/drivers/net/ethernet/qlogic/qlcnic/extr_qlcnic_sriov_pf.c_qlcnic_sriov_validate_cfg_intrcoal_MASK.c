
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_vf_info {int rx_ctx_id; int tx_ctx_id; } ;
struct qlcnic_nic_intr_coalesce {int rx_packets; int rx_time_us; int tx_packets; int tx_time_us; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_2__ req; } ;
struct qlcnic_adapter {int netdev; TYPE_1__* ahw; } ;
struct TYPE_3__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_2,
           struct qlcnic_vf_info *VAR_3,
           struct qlcnic_cmd_args *VAR_4)
{
 struct qlcnic_nic_intr_coalesce *VAR_5 = &VAR_2->ahw->coal;
 u16 VAR_6, VAR_7, VAR_8;
 int VAR_9 = -VAR_0;
 u8 VAR_10;

 VAR_10 = VAR_4->req.arg[1] & VAR_1;
 VAR_6 = VAR_4->req.arg[1] >> 16;
 VAR_7 = VAR_4->req.arg[2] & 0xffff;
 VAR_8 = VAR_4->req.arg[2] >> 16;

 switch (VAR_10) {
 case 129:
  if (VAR_6 != VAR_3->rx_ctx_id || VAR_7 > VAR_5->rx_packets ||
      VAR_8 < VAR_5->rx_time_us)
   goto err_label;
  break;
 case 128:
  if (VAR_6 != VAR_3->tx_ctx_id || VAR_7 > VAR_5->tx_packets ||
      VAR_8 < VAR_5->tx_time_us)
   goto err_label;
  break;
 default:
  FUNC_0(VAR_2->netdev, "Invalid coalescing type 0x%x received\n",
      VAR_10);
  return VAR_9;
 }

 return 0;

err_label:
 FUNC_0(VAR_2->netdev, "Expected: rx_ctx_id 0x%x rx_packets 0x%x rx_time_us 0x%x tx_ctx_id 0x%x tx_packets 0x%x tx_time_us 0x%x\n",
     VAR_3->rx_ctx_id, VAR_5->rx_packets, VAR_5->rx_time_us,
     VAR_3->tx_ctx_id, VAR_5->tx_packets, VAR_5->tx_time_us);
 FUNC_0(VAR_2->netdev, "Received: ctx_id 0x%x packets 0x%x time_us 0x%x type 0x%x\n",
     VAR_6, VAR_7, VAR_8, VAR_10);

 return VAR_9;
}
