
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi_queue_header {int status; int q_size; int rx_wm; int tx_wm; int rx_req; scalar_t__ write_idx; scalar_t__ read_idx; scalar_t__ tx_irq_status; scalar_t__ rx_irq_status; scalar_t__ tx_req; scalar_t__ pkt_size; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct hfi_queue_header *VAR_2)
{
 VAR_2->status = 1;
 VAR_2->type = VAR_0;
 VAR_2->q_size = VAR_1 / 4;
 VAR_2->pkt_size = 0;
 VAR_2->rx_wm = 1;
 VAR_2->tx_wm = 1;
 VAR_2->rx_req = 1;
 VAR_2->tx_req = 0;
 VAR_2->rx_irq_status = 0;
 VAR_2->tx_irq_status = 0;
 VAR_2->read_idx = 0;
 VAR_2->write_idx = 0;
}
