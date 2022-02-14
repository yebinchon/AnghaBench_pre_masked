
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long code; } ;
struct TYPE_6__ {scalar_t__ number; int capability; TYPE_2__ rc; } ;
union ibmvnic_crq {TYPE_3__ query_capability; } ;
struct net_device {int features; void* max_mtu; void* min_mtu; } ;
struct ibmvnic_adapter {scalar_t__ min_tx_queues; scalar_t__ min_rx_queues; scalar_t__ min_rx_add_queues; scalar_t__ max_tx_queues; scalar_t__ max_rx_queues; scalar_t__ max_rx_add_queues; scalar_t__ min_tx_entries_per_subcrq; scalar_t__ min_rx_add_entries_per_subcrq; scalar_t__ max_tx_entries_per_subcrq; scalar_t__ max_rx_add_entries_per_subcrq; scalar_t__ tcp_ip_offload; scalar_t__ promisc_supported; void* min_mtu; void* max_mtu; scalar_t__ max_multicast_filters; scalar_t__ vlan_header_insertion; scalar_t__ rx_vlan_header_insertion; scalar_t__ max_tx_sg_entries; scalar_t__ rx_sg_supported; scalar_t__ opt_tx_comp_sub_queues; scalar_t__ opt_rx_comp_queues; scalar_t__ opt_rx_bufadd_q_per_rx_comp_q; scalar_t__ opt_tx_entries_per_subcrq; scalar_t__ opt_rxba_entries_per_subcrq; scalar_t__ tx_rx_desc_req; int wait_capability; int running_cap_crqs; TYPE_1__* vdev; struct net_device* netdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,long) ;
 int FUNC_5 (struct ibmvnic_adapter*,int ) ;
 int FUNC_6 (struct net_device*,char*,scalar_t__) ;
 int FUNC_7 (struct net_device*,char*,int ) ;

__attribute__((used)) static void FUNC_8(union ibmvnic_crq *VAR_2,
     struct ibmvnic_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct device *VAR_5 = &VAR_3->vdev->dev;
 long VAR_6;

 FUNC_0(&VAR_3->running_cap_crqs);
 FUNC_6(VAR_4, "Outstanding queries: %d\n",
     FUNC_1(&VAR_3->running_cap_crqs));
 VAR_6 = VAR_2->query_capability.rc.code;
 if (VAR_6) {
  FUNC_4(VAR_5, "Error %ld in QUERY_CAP_RSP\n", VAR_6);
  goto out;
 }

 switch (FUNC_2(VAR_2->query_capability.capability)) {
 case 139:
  VAR_3->min_tx_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "min_tx_queues = %lld\n",
      VAR_3->min_tx_queues);
  break;
 case 141:
  VAR_3->min_rx_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "min_rx_queues = %lld\n",
      VAR_3->min_rx_queues);
  break;
 case 142:
  VAR_3->min_rx_add_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "min_rx_add_queues = %lld\n",
      VAR_3->min_rx_add_queues);
  break;
 case 146:
  VAR_3->max_tx_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_tx_queues = %lld\n",
      VAR_3->max_tx_queues);
  break;
 case 148:
  VAR_3->max_rx_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_rx_queues = %lld\n",
      VAR_3->max_rx_queues);
  break;
 case 149:
  VAR_3->max_rx_add_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_rx_add_queues = %lld\n",
      VAR_3->max_rx_add_queues);
  break;
 case 140:
  VAR_3->min_tx_entries_per_subcrq =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "min_tx_entries_per_subcrq = %lld\n",
      VAR_3->min_tx_entries_per_subcrq);
  break;
 case 143:
  VAR_3->min_rx_add_entries_per_subcrq =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "min_rx_add_entrs_per_subcrq = %lld\n",
      VAR_3->min_rx_add_entries_per_subcrq);
  break;
 case 147:
  VAR_3->max_tx_entries_per_subcrq =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_tx_entries_per_subcrq = %lld\n",
      VAR_3->max_tx_entries_per_subcrq);
  break;
 case 150:
  VAR_3->max_rx_add_entries_per_subcrq =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_rx_add_entrs_per_subcrq = %lld\n",
      VAR_3->max_rx_add_entries_per_subcrq);
  break;
 case 130:
  VAR_3->tcp_ip_offload =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "tcp_ip_offload = %lld\n",
      VAR_3->tcp_ip_offload);
  break;
 case 133:
  VAR_3->promisc_supported =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "promisc_supported = %lld\n",
      VAR_3->promisc_supported);
  break;
 case 144:
  VAR_3->min_mtu = FUNC_3(VAR_2->query_capability.number);
  VAR_4->min_mtu = VAR_3->min_mtu - VAR_0;
  FUNC_6(VAR_4, "min_mtu = %lld\n", VAR_3->min_mtu);
  break;
 case 152:
  VAR_3->max_mtu = FUNC_3(VAR_2->query_capability.number);
  VAR_4->max_mtu = VAR_3->max_mtu - VAR_0;
  FUNC_6(VAR_4, "max_mtu = %lld\n", VAR_3->max_mtu);
  break;
 case 151:
  VAR_3->max_multicast_filters =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_multicast_filters = %lld\n",
      VAR_3->max_multicast_filters);
  break;
 case 128:
  VAR_3->vlan_header_insertion =
      FUNC_3(VAR_2->query_capability.number);
  if (VAR_3->vlan_header_insertion)
   VAR_4->features |= VAR_1;
  FUNC_6(VAR_4, "vlan_header_insertion = %lld\n",
      VAR_3->vlan_header_insertion);
  break;
 case 131:
  VAR_3->rx_vlan_header_insertion =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "rx_vlan_header_insertion = %lld\n",
      VAR_3->rx_vlan_header_insertion);
  break;
 case 145:
  VAR_3->max_tx_sg_entries =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "max_tx_sg_entries = %lld\n",
      VAR_3->max_tx_sg_entries);
  break;
 case 132:
  VAR_3->rx_sg_supported =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "rx_sg_supported = %lld\n",
      VAR_3->rx_sg_supported);
  break;
 case 135:
  VAR_3->opt_tx_comp_sub_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "opt_tx_comp_sub_queues = %lld\n",
      VAR_3->opt_tx_comp_sub_queues);
  break;
 case 136:
  VAR_3->opt_rx_comp_queues =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "opt_rx_comp_queues = %lld\n",
      VAR_3->opt_rx_comp_queues);
  break;
 case 137:
  VAR_3->opt_rx_bufadd_q_per_rx_comp_q =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "opt_rx_bufadd_q_per_rx_comp_q = %lld\n",
      VAR_3->opt_rx_bufadd_q_per_rx_comp_q);
  break;
 case 134:
  VAR_3->opt_tx_entries_per_subcrq =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "opt_tx_entries_per_subcrq = %lld\n",
      VAR_3->opt_tx_entries_per_subcrq);
  break;
 case 138:
  VAR_3->opt_rxba_entries_per_subcrq =
      FUNC_3(VAR_2->query_capability.number);
  FUNC_6(VAR_4, "opt_rxba_entries_per_subcrq = %lld\n",
      VAR_3->opt_rxba_entries_per_subcrq);
  break;
 case 129:
  VAR_3->tx_rx_desc_req = VAR_2->query_capability.number;
  FUNC_6(VAR_4, "tx_rx_desc_req = %llx\n",
      VAR_3->tx_rx_desc_req);
  break;

 default:
  FUNC_7(VAR_4, "Got invalid cap rsp %d\n",
      VAR_2->query_capability.capability);
 }

out:
 if (FUNC_1(&VAR_3->running_cap_crqs) == 0) {
  VAR_3->wait_capability = 0;
  FUNC_5(VAR_3, 0);
 }
}
