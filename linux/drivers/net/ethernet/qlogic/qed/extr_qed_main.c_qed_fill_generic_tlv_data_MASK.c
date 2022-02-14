
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ipv4_csum_offload; int lso_supported; int b_set; } ;
struct qed_mfw_tlv_generic {int* mac_set; int rx_frames_set; int rx_bytes_set; int tx_frames_set; scalar_t__ tx_bytes; scalar_t__ tx_frames; scalar_t__ rx_bytes; scalar_t__ rx_frames; int * mac; TYPE_2__ flags; } ;
struct qed_generic_tlvs {int feat_flags; int * mac; } ;
struct qed_eth_stats_common {scalar_t__ tx_bcast_bytes; scalar_t__ tx_mcast_bytes; scalar_t__ tx_ucast_bytes; scalar_t__ tx_bcast_pkts; scalar_t__ tx_mcast_pkts; scalar_t__ tx_ucast_pkts; scalar_t__ rx_bcast_bytes; scalar_t__ rx_mcast_bytes; scalar_t__ rx_ucast_bytes; scalar_t__ rx_bcast_pkts; scalar_t__ rx_mcast_pkts; scalar_t__ rx_ucast_pkts; } ;
struct qed_eth_stats {struct qed_eth_stats_common common; } ;
struct TYPE_3__ {struct qed_common_cb_ops* common; } ;
struct qed_dev {int ops_cookie; TYPE_1__ protocol_ops; } ;
struct qed_common_cb_ops {int (* get_generic_tlv_data ) (int ,struct qed_generic_tlvs*) ;} ;
typedef int gen_tlvs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct qed_generic_tlvs*,int ,int) ;
 int FUNC_3 (struct qed_dev*,struct qed_eth_stats*) ;
 int FUNC_4 (int ,struct qed_generic_tlvs*) ;

__attribute__((used)) static void
FUNC_5(struct qed_dev *VAR_3, struct qed_mfw_tlv_generic *VAR_4)
{
 struct qed_common_cb_ops *VAR_5 = VAR_3->protocol_ops.common;
 struct qed_eth_stats_common *VAR_6;
 struct qed_generic_tlvs VAR_7;
 struct qed_eth_stats VAR_8;
 int VAR_9;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_5->get_generic_tlv_data(VAR_3->ops_cookie, &VAR_7);

 if (VAR_7.feat_flags & VAR_0)
  VAR_4->flags.ipv4_csum_offload = 1;
 if (VAR_7.feat_flags & VAR_1)
  VAR_4->flags.lso_supported = 1;
 VAR_4->flags.b_set = 1;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (FUNC_1(VAR_7.mac[VAR_9])) {
   FUNC_0(VAR_4->mac[VAR_9], VAR_7.mac[VAR_9]);
   VAR_4->mac_set[VAR_9] = 1;
  }
 }

 FUNC_3(VAR_3, &VAR_8);
 VAR_6 = &VAR_8.common;
 VAR_4->rx_frames = VAR_6->rx_ucast_pkts + VAR_6->rx_mcast_pkts +
    VAR_6->rx_bcast_pkts;
 VAR_4->rx_frames_set = 1;
 VAR_4->rx_bytes = VAR_6->rx_ucast_bytes + VAR_6->rx_mcast_bytes +
   VAR_6->rx_bcast_bytes;
 VAR_4->rx_bytes_set = 1;
 VAR_4->tx_frames = VAR_6->tx_ucast_pkts + VAR_6->tx_mcast_pkts +
    VAR_6->tx_bcast_pkts;
 VAR_4->tx_frames_set = 1;
 VAR_4->tx_bytes = VAR_6->tx_ucast_bytes + VAR_6->tx_mcast_bytes +
   VAR_6->tx_bcast_bytes;
 VAR_4->rx_bytes_set = 1;
}
