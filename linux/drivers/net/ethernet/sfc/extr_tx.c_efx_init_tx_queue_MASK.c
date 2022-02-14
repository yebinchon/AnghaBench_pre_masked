
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int empty_read_count; int xmit_more_available; int timestamping; scalar_t__ channel; int initialised; int handle_tso; scalar_t__ completed_timestamp_minor; scalar_t__ completed_timestamp_major; int ptr_mask; int completed_desc_ptr; scalar_t__ old_read_count; scalar_t__ read_count; scalar_t__ old_write_count; scalar_t__ packet_write_count; scalar_t__ write_count; scalar_t__ insert_count; int queue; struct efx_nic* efx; } ;
struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_tx_queue*) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,int ) ;

void FUNC_4(struct efx_tx_queue *VAR_3)
{
 struct efx_nic *VAR_4 = VAR_3->efx;

 FUNC_3(VAR_4, VAR_1, VAR_4->net_dev,
    "initialising TX queue %d\n", VAR_3->queue);

 VAR_3->insert_count = 0;
 VAR_3->write_count = 0;
 VAR_3->packet_write_count = 0;
 VAR_3->old_write_count = 0;
 VAR_3->read_count = 0;
 VAR_3->old_read_count = 0;
 VAR_3->empty_read_count = 0 | VAR_0;
 VAR_3->xmit_more_available = 0;
 VAR_3->timestamping = (FUNC_2(VAR_4) &&
      VAR_3->channel == FUNC_1(VAR_4));
 VAR_3->completed_desc_ptr = VAR_3->ptr_mask;
 VAR_3->completed_timestamp_major = 0;
 VAR_3->completed_timestamp_minor = 0;




 VAR_3->handle_tso = VAR_2;


 FUNC_0(VAR_3);

 VAR_3->initialised = 1;
}
