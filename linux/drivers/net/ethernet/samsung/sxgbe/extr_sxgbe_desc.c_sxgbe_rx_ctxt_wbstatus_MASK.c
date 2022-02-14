
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_rx_ctxt_desc {scalar_t__ ptp_msgtype; scalar_t__ tstamp_dropped; } ;
struct sxgbe_extra_stats {int rx_ptp_resv_msg_type; int rx_ptp_signal; int rx_ptp_mgmt; int rx_ptp_announce; int rx_ptp_type_pdelay_follow_up; int rx_ptp_type_pdelay_resp; int rx_ptp_type_pdelay_req; int rx_ptp_type_delay_resp; int rx_ptp_type_delay_req; int rx_ptp_type_follow_up; int rx_ptp_type_sync; int rx_msg_type_no_ptp; int timestamp_dropped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_0(struct sxgbe_rx_ctxt_desc *VAR_12,
       struct sxgbe_extra_stats *VAR_13)
{
 if (VAR_12->tstamp_dropped)
  VAR_13->timestamp_dropped++;


 if (VAR_12->ptp_msgtype == VAR_0)
  VAR_13->rx_msg_type_no_ptp++;
 else if (VAR_12->ptp_msgtype == VAR_11)
  VAR_13->rx_ptp_type_sync++;
 else if (VAR_12->ptp_msgtype == VAR_4)
  VAR_13->rx_ptp_type_follow_up++;
 else if (VAR_12->ptp_msgtype == VAR_2)
  VAR_13->rx_ptp_type_delay_req++;
 else if (VAR_12->ptp_msgtype == VAR_3)
  VAR_13->rx_ptp_type_delay_resp++;
 else if (VAR_12->ptp_msgtype == VAR_7)
  VAR_13->rx_ptp_type_pdelay_req++;
 else if (VAR_12->ptp_msgtype == VAR_8)
  VAR_13->rx_ptp_type_pdelay_resp++;
 else if (VAR_12->ptp_msgtype == VAR_6)
  VAR_13->rx_ptp_type_pdelay_follow_up++;
 else if (VAR_12->ptp_msgtype == VAR_1)
  VAR_13->rx_ptp_announce++;
 else if (VAR_12->ptp_msgtype == VAR_5)
  VAR_13->rx_ptp_mgmt++;
 else if (VAR_12->ptp_msgtype == VAR_10)
  VAR_13->rx_ptp_signal++;
 else if (VAR_12->ptp_msgtype == VAR_9)
  VAR_13->rx_ptp_resv_msg_type++;
}
