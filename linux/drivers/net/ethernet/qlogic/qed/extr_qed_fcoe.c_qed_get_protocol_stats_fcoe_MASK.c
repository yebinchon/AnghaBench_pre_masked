
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_mcp_fcoe_stats {int login_failure; int fcs_err; scalar_t__ tx_pkts; scalar_t__ rx_pkts; } ;
struct qed_fcoe_stats {int fcoe_silent_drop_pkt_crc_error_cnt; scalar_t__ fcoe_tx_other_pkt_cnt; scalar_t__ fcoe_tx_xfer_pkt_cnt; scalar_t__ fcoe_tx_data_pkt_cnt; scalar_t__ fcoe_rx_other_pkt_cnt; scalar_t__ fcoe_rx_xfer_pkt_cnt; scalar_t__ fcoe_rx_data_pkt_cnt; } ;
struct qed_fcoe_cb_ops {int (* get_login_failures ) (void*) ;} ;
struct TYPE_2__ {struct qed_fcoe_cb_ops* fcoe; } ;
struct qed_dev {void* ops_cookie; TYPE_1__ protocol_ops; } ;
typedef int proto_stats ;


 int FUNC_0 (struct qed_dev*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_fcoe_stats*,int ,int) ;
 scalar_t__ FUNC_2 (struct qed_dev*,struct qed_fcoe_stats*) ;
 int FUNC_3 (void*) ;

void FUNC_4(struct qed_dev *VAR_1,
     struct qed_mcp_fcoe_stats *VAR_2)
{
 struct qed_fcoe_stats VAR_3;


 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_2(VAR_1, &VAR_3)) {
  FUNC_0(VAR_1, VAR_0,
      "Failed to collect FCoE statistics\n");
  return;
 }


 VAR_2->rx_pkts = VAR_3.fcoe_rx_data_pkt_cnt +
    VAR_3.fcoe_rx_xfer_pkt_cnt +
    VAR_3.fcoe_rx_other_pkt_cnt;
 VAR_2->tx_pkts = VAR_3.fcoe_tx_data_pkt_cnt +
    VAR_3.fcoe_tx_xfer_pkt_cnt +
    VAR_3.fcoe_tx_other_pkt_cnt;
 VAR_2->fcs_err = VAR_3.fcoe_silent_drop_pkt_crc_error_cnt;


 if (VAR_1->protocol_ops.fcoe && VAR_1->ops_cookie) {
  struct qed_fcoe_cb_ops *VAR_4 = VAR_1->protocol_ops.fcoe;
  void *VAR_5 = VAR_1->ops_cookie;

  if (VAR_4->get_login_failures)
   VAR_2->login_failure = VAR_4->get_login_failures(VAR_5);
 }
}
