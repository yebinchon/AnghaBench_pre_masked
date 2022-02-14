
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fcs_err; int ucast_tx_pkts; int ucast_rx_pkts; } ;
union qed_mcp_protocol_stats {int iscsi_stats; int fcoe_stats; TYPE_1__ lan_stats; } ;
struct TYPE_4__ {int tx_ucast_pkts; int rx_ucast_pkts; } ;
struct qed_eth_stats {TYPE_2__ common; } ;
struct qed_dev {int dummy; } ;
typedef enum qed_mcp_protocol_type { ____Placeholder_qed_mcp_protocol_type } qed_mcp_protocol_type ;


 int FUNC_0 (struct qed_dev*,int ,char*,int) ;



 int VAR_0 ;
 int FUNC_1 (union qed_mcp_protocol_stats*,int ,int) ;
 int FUNC_2 (struct qed_dev*,int *) ;
 int FUNC_3 (struct qed_dev*,int *) ;
 int FUNC_4 (struct qed_dev*,struct qed_eth_stats*) ;

void FUNC_5(struct qed_dev *VAR_1,
       enum qed_mcp_protocol_type VAR_2,
       union qed_mcp_protocol_stats *VAR_3)
{
 struct qed_eth_stats VAR_4;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 switch (VAR_2) {
 case 128:
  FUNC_4(VAR_1, &VAR_4);
  VAR_3->lan_stats.ucast_rx_pkts =
     VAR_4.common.rx_ucast_pkts;
  VAR_3->lan_stats.ucast_tx_pkts =
     VAR_4.common.tx_ucast_pkts;
  VAR_3->lan_stats.fcs_err = -1;
  break;
 case 130:
  FUNC_2(VAR_1, &VAR_3->fcoe_stats);
  break;
 case 129:
  FUNC_3(VAR_1, &VAR_3->iscsi_stats);
  break;
 default:
  FUNC_0(VAR_1, VAR_0,
      "Invalid protocol type = %d\n", VAR_2);
  return;
 }
}
