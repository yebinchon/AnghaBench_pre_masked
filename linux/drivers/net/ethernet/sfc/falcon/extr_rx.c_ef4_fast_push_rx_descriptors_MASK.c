
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_queue {unsigned int added_count; unsigned int removed_count; unsigned int fast_fill_trigger; unsigned int min_fill; unsigned int max_fill; scalar_t__ notified_count; struct ef4_nic* efx; int refill_enabled; } ;
struct ef4_nic {unsigned int rxq_entries; unsigned int rx_pages_per_batch; unsigned int rx_bufs_per_page; int net_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ef4_rx_queue*,int) ;
 int FUNC_2 (struct ef4_rx_queue*) ;
 int FUNC_3 (struct ef4_rx_queue*) ;
 int FUNC_4 (struct ef4_rx_queue*) ;
 int FUNC_5 (struct ef4_nic*,int ,int ,char*,int ,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct ef4_rx_queue *VAR_1, bool VAR_2)
{
 struct ef4_nic *VAR_3 = VAR_1->efx;
 unsigned int VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0;

 if (!VAR_1->refill_enabled)
  return;


 VAR_4 = (VAR_1->added_count - VAR_1->removed_count);
 FUNC_0(VAR_4 > VAR_1->efx->rxq_entries);
 if (VAR_4 >= VAR_1->fast_fill_trigger)
  goto out;


 if (FUNC_6(VAR_4 < VAR_1->min_fill)) {
  if (VAR_4)
   VAR_1->min_fill = VAR_4;
 }

 VAR_5 = VAR_3->rx_pages_per_batch * VAR_3->rx_bufs_per_page;
 VAR_6 = VAR_1->max_fill - VAR_4;
 FUNC_0(VAR_6 < VAR_5);

 FUNC_5(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
     "RX queue %d fast-filling descriptor ring from"
     " level %d to level %d\n",
     FUNC_3(VAR_1), VAR_4,
     VAR_1->max_fill);


 do {
  VAR_7 = FUNC_1(VAR_1, VAR_2);
  if (FUNC_6(VAR_7)) {

   if (VAR_1->added_count == VAR_1->removed_count)
    FUNC_4(VAR_1);
   goto out;
  }
 } while ((VAR_6 -= VAR_5) >= VAR_5);

 FUNC_5(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
     "RX queue %d fast-filled descriptor ring "
     "to level %d\n", FUNC_3(VAR_1),
     VAR_1->added_count - VAR_1->removed_count);

 out:
 if (VAR_1->notified_count != VAR_1->added_count)
  FUNC_2(VAR_1);
}
