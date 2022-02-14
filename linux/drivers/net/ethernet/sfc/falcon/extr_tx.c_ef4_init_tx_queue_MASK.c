
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {int empty_read_count; int xmit_more_available; int tx_min_size; int initialised; scalar_t__ old_read_count; scalar_t__ read_count; scalar_t__ old_write_count; scalar_t__ write_count; scalar_t__ insert_count; int queue; struct ef4_nic* efx; } ;
struct ef4_nic {int net_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 int VAR_1 ;
 int FUNC_1 (struct ef4_tx_queue*) ;
 int FUNC_2 (struct ef4_nic*,int ,int ,char*,int ) ;

void FUNC_3(struct ef4_tx_queue *VAR_2)
{
 struct ef4_nic *VAR_3 = VAR_2->efx;

 FUNC_2(VAR_3, VAR_1, VAR_3->net_dev,
    "initialising TX queue %d\n", VAR_2->queue);

 VAR_2->insert_count = 0;
 VAR_2->write_count = 0;
 VAR_2->old_write_count = 0;
 VAR_2->read_count = 0;
 VAR_2->old_read_count = 0;
 VAR_2->empty_read_count = 0 | VAR_0;
 VAR_2->xmit_more_available = 0;


 VAR_2->tx_min_size = FUNC_0(VAR_3) ? 33 : 0;


 FUNC_1(VAR_2);

 VAR_2->initialised = 1;
}
