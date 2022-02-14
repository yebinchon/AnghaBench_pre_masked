
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_entries; int rx_entries; int tx_queues; int rx_queues; int mtu; } ;
struct TYPE_3__ {int tx_entries; int rx_entries; int tx_queues; int rx_queues; int mtu; } ;
struct ibmvnic_adapter {int wait_for_reset; int reset_done; TYPE_2__ fallback; TYPE_1__ desired; scalar_t__ reset_done_rc; int req_tx_entries_per_subcrq; int req_rx_add_entries_per_subcrq; int req_tx_queues; int req_rx_queues; int req_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibmvnic_adapter*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ibmvnic_adapter *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->fallback.mtu = VAR_2->req_mtu;
 VAR_2->fallback.rx_queues = VAR_2->req_rx_queues;
 VAR_2->fallback.tx_queues = VAR_2->req_tx_queues;
 VAR_2->fallback.rx_entries = VAR_2->req_rx_add_entries_per_subcrq;
 VAR_2->fallback.tx_entries = VAR_2->req_tx_entries_per_subcrq;

 FUNC_1(&VAR_2->reset_done);
 VAR_2->wait_for_reset = 1;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3)
  return VAR_3;
 FUNC_2(&VAR_2->reset_done);

 VAR_4 = 0;
 if (VAR_2->reset_done_rc) {
  VAR_4 = -VAR_0;
  VAR_2->desired.mtu = VAR_2->fallback.mtu;
  VAR_2->desired.rx_queues = VAR_2->fallback.rx_queues;
  VAR_2->desired.tx_queues = VAR_2->fallback.tx_queues;
  VAR_2->desired.rx_entries = VAR_2->fallback.rx_entries;
  VAR_2->desired.tx_entries = VAR_2->fallback.tx_entries;

  FUNC_1(&VAR_2->reset_done);
  VAR_2->wait_for_reset = 1;
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (VAR_3)
   return VAR_4;
  FUNC_2(&VAR_2->reset_done);
 }
 VAR_2->wait_for_reset = 0;

 return VAR_4;
}
