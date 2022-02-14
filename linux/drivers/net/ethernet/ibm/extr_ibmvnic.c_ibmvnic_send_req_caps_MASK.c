
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* number; void* capability; int cmd; int first; } ;
union ibmvnic_crq {TYPE_4__ request_capability; } ;
typedef int u64 ;
struct TYPE_7__ {int mtu; int tx_entries; int rx_entries; int tx_queues; int rx_queues; } ;
struct ibmvnic_adapter {int min_tx_entries_per_subcrq; int min_rx_add_entries_per_subcrq; int req_mtu; int max_tx_entries_per_subcrq; int max_rx_add_entries_per_subcrq; int req_tx_entries_per_subcrq; int req_rx_add_entries_per_subcrq; int req_tx_queues; int opt_tx_comp_sub_queues; int req_rx_queues; int opt_rx_comp_queues; int req_rx_add_queues; int max_rx_add_queues; int running_cap_crqs; scalar_t__ promisc_supported; TYPE_2__* netdev; TYPE_3__ desired; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
typedef int crq ;
struct TYPE_6__ {int mtu; int flags; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_5 (union ibmvnic_crq*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ibmvnic_adapter *VAR_14, int VAR_15)
{
 struct device *VAR_16 = &VAR_14->vdev->dev;
 union ibmvnic_crq VAR_17;
 int VAR_18;

 if (!VAR_15) {

  int VAR_19 = 4 * VAR_5 / (sizeof(u64) * 4);

  if (VAR_14->min_tx_entries_per_subcrq > VAR_19 ||
      VAR_14->min_rx_add_entries_per_subcrq > VAR_19) {
   FUNC_3(VAR_16, "Fatal, invalid entries per sub-crq\n");
   return;
  }

  if (VAR_14->desired.mtu)
   VAR_14->req_mtu = VAR_14->desired.mtu;
  else
   VAR_14->req_mtu = VAR_14->netdev->mtu + VAR_0;

  if (!VAR_14->desired.tx_entries)
   VAR_14->desired.tx_entries =
     VAR_14->max_tx_entries_per_subcrq;
  if (!VAR_14->desired.rx_entries)
   VAR_14->desired.rx_entries =
     VAR_14->max_rx_add_entries_per_subcrq;

  VAR_18 = VAR_3 /
         (VAR_14->req_mtu + VAR_1);

  if ((VAR_14->req_mtu + VAR_1) *
   VAR_14->desired.tx_entries > VAR_3) {
   VAR_14->desired.tx_entries = VAR_18;
  }

  if ((VAR_14->req_mtu + VAR_1) *
   VAR_14->desired.rx_entries > VAR_3) {
   VAR_14->desired.rx_entries = VAR_18;
  }

  if (VAR_14->desired.tx_entries)
   VAR_14->req_tx_entries_per_subcrq =
     VAR_14->desired.tx_entries;
  else
   VAR_14->req_tx_entries_per_subcrq =
     VAR_14->max_tx_entries_per_subcrq;

  if (VAR_14->desired.rx_entries)
   VAR_14->req_rx_add_entries_per_subcrq =
     VAR_14->desired.rx_entries;
  else
   VAR_14->req_rx_add_entries_per_subcrq =
     VAR_14->max_rx_add_entries_per_subcrq;

  if (VAR_14->desired.tx_queues)
   VAR_14->req_tx_queues =
     VAR_14->desired.tx_queues;
  else
   VAR_14->req_tx_queues =
     VAR_14->opt_tx_comp_sub_queues;

  if (VAR_14->desired.rx_queues)
   VAR_14->req_rx_queues =
     VAR_14->desired.rx_queues;
  else
   VAR_14->req_rx_queues =
     VAR_14->opt_rx_comp_queues;

  VAR_14->req_rx_add_queues = VAR_14->max_rx_add_queues;
 }

 FUNC_5(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.request_capability.first = VAR_2;
 VAR_17.request_capability.cmd = VAR_7;

 VAR_17.request_capability.capability = FUNC_1(VAR_13);
 VAR_17.request_capability.number = FUNC_2(VAR_14->req_tx_queues);
 FUNC_0(&VAR_14->running_cap_crqs);
 FUNC_4(VAR_14, &VAR_17);

 VAR_17.request_capability.capability = FUNC_1(VAR_11);
 VAR_17.request_capability.number = FUNC_2(VAR_14->req_rx_queues);
 FUNC_0(&VAR_14->running_cap_crqs);
 FUNC_4(VAR_14, &VAR_17);

 VAR_17.request_capability.capability = FUNC_1(VAR_10);
 VAR_17.request_capability.number = FUNC_2(VAR_14->req_rx_add_queues);
 FUNC_0(&VAR_14->running_cap_crqs);
 FUNC_4(VAR_14, &VAR_17);

 VAR_17.request_capability.capability =
     FUNC_1(VAR_12);
 VAR_17.request_capability.number =
     FUNC_2(VAR_14->req_tx_entries_per_subcrq);
 FUNC_0(&VAR_14->running_cap_crqs);
 FUNC_4(VAR_14, &VAR_17);

 VAR_17.request_capability.capability =
     FUNC_1(VAR_9);
 VAR_17.request_capability.number =
     FUNC_2(VAR_14->req_rx_add_entries_per_subcrq);
 FUNC_0(&VAR_14->running_cap_crqs);
 FUNC_4(VAR_14, &VAR_17);

 VAR_17.request_capability.capability = FUNC_1(VAR_8);
 VAR_17.request_capability.number = FUNC_2(VAR_14->req_mtu);
 FUNC_0(&VAR_14->running_cap_crqs);
 FUNC_4(VAR_14, &VAR_17);

 if (VAR_14->netdev->flags & VAR_4) {
  if (VAR_14->promisc_supported) {
   VAR_17.request_capability.capability =
       FUNC_1(VAR_6);
   VAR_17.request_capability.number = FUNC_2(1);
   FUNC_0(&VAR_14->running_cap_crqs);
   FUNC_4(VAR_14, &VAR_17);
  }
 } else {
  VAR_17.request_capability.capability =
      FUNC_1(VAR_6);
  VAR_17.request_capability.number = FUNC_2(0);
  FUNC_0(&VAR_14->running_cap_crqs);
  FUNC_4(VAR_14, &VAR_17);
 }
}
