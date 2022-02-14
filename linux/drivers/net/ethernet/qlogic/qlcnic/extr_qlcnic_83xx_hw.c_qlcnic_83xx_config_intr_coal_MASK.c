
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_nic_intr_coalesce {scalar_t__ rx_time_us; scalar_t__ rx_packets; int type; scalar_t__ tx_time_us; scalar_t__ tx_packets; int flag; } ;
struct qlcnic_adapter {int netdev; TYPE_2__* recv_ctx; TYPE_1__* ahw; } ;
struct ethtool_coalesce {scalar_t__ tx_coalesce_usecs; scalar_t__ tx_max_coalesced_frames; scalar_t__ rx_coalesce_usecs; scalar_t__ rx_max_coalesced_frames; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct qlcnic_adapter *VAR_4,
     struct ethtool_coalesce *VAR_5)
{
 struct qlcnic_nic_intr_coalesce *VAR_6 = &VAR_4->ahw->coal;
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (VAR_4->recv_ctx->state == VAR_2)
  return -VAR_1;

 VAR_9 = VAR_5->tx_coalesce_usecs;
 VAR_10 = VAR_5->tx_max_coalesced_frames;
 VAR_7 = VAR_5->rx_coalesce_usecs;
 VAR_8 = VAR_5->rx_max_coalesced_frames;
 VAR_6->flag = VAR_3;

 if ((VAR_6->rx_time_us == VAR_7) &&
     (VAR_6->rx_packets == VAR_8)) {
  VAR_6->type = 128;
  VAR_6->tx_time_us = VAR_9;
  VAR_6->tx_packets = VAR_10;
 } else if ((VAR_6->tx_time_us == VAR_9) &&
     (VAR_6->tx_packets == VAR_10)) {
  VAR_6->type = 130;
  VAR_6->rx_time_us = VAR_7;
  VAR_6->rx_packets = VAR_8;
 } else {
  VAR_6->type = 129;
  VAR_6->rx_time_us = VAR_7;
  VAR_6->rx_packets = VAR_8;
  VAR_6->tx_time_us = VAR_9;
  VAR_6->tx_packets = VAR_10;
 }

 switch (VAR_6->type) {
 case 130:
  VAR_11 = FUNC_1(VAR_4);
  break;
 case 128:
  VAR_11 = FUNC_3(VAR_4);
  break;
 case 129:
  VAR_11 = FUNC_2(VAR_4);
  break;
 default:
  VAR_11 = -VAR_0;
  FUNC_0(VAR_4->netdev,
      "Invalid Interrupt coalescing type\n");
  break;
 }

 return VAR_11;
}
