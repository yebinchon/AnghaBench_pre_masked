
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_transport_qp {int tx_max_frame; int tx_pkts; int tx_max_entry; int tx_index; int tx_free_q; int ntb_tx_free_q_lock; int cb_data; int (* tx_handler ) (struct ntb_transport_qp*,int ,int *,int ) ;int tx_ring_full; TYPE_1__* remote_rx_info; } ;
struct ntb_queue_entry {int len; int entry; } ;
struct ntb_payload_header {int dummy; } ;
struct TYPE_2__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (struct ntb_transport_qp*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ntb_transport_qp *VAR_2,
     struct ntb_queue_entry *VAR_3)
{
 if (VAR_2->tx_index == VAR_2->remote_rx_info->entry) {
  VAR_2->tx_ring_full++;
  return -VAR_0;
 }

 if (VAR_3->len > VAR_2->tx_max_frame - sizeof(struct ntb_payload_header)) {
  if (VAR_2->tx_handler)
   VAR_2->tx_handler(VAR_2, VAR_2->cb_data, ((void*)0), -VAR_1);

  FUNC_1(&VAR_2->ntb_tx_free_q_lock, &VAR_3->entry,
        &VAR_2->tx_free_q);
  return 0;
 }

 FUNC_0(VAR_2, VAR_3);

 VAR_2->tx_index++;
 VAR_2->tx_index %= VAR_2->tx_max_entry;

 VAR_2->tx_pkts++;

 return 0;
}
