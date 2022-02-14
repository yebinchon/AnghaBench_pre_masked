
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_mcp_iscsi_stats {int tx_bytes; int rx_bytes; int tx_pdus; int rx_pdus; } ;
struct qed_iscsi_stats {int iscsi_tx_bytes_cnt; int iscsi_rx_bytes_cnt; int iscsi_tx_total_pdu_cnt; int iscsi_rx_total_pdu_cnt; } ;
struct qed_dev {int dummy; } ;
typedef int proto_stats ;


 int FUNC_0 (struct qed_dev*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_iscsi_stats*,int ,int) ;
 scalar_t__ FUNC_2 (struct qed_dev*,struct qed_iscsi_stats*) ;

void FUNC_3(struct qed_dev *VAR_1,
      struct qed_mcp_iscsi_stats *VAR_2)
{
 struct qed_iscsi_stats VAR_3;


 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_2(VAR_1, &VAR_3)) {
  FUNC_0(VAR_1, VAR_0,
      "Failed to collect ISCSI statistics\n");
  return;
 }


 VAR_2->rx_pdus = VAR_3.iscsi_rx_total_pdu_cnt;
 VAR_2->tx_pdus = VAR_3.iscsi_tx_total_pdu_cnt;
 VAR_2->rx_bytes = VAR_3.iscsi_rx_bytes_cnt;
 VAR_2->tx_bytes = VAR_3.iscsi_tx_bytes_cnt;
}
