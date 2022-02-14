
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {scalar_t__ bitmap_id; int tx_thread_active; int rx_thread_active; void* tx_thread; void* rx_thread; } ;
struct TYPE_2__ {int ts_bitmap_lock; int ts_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 void* FUNC_5 (int ,struct iscsi_conn*,char*,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,void*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iscsi_conn *VAR_8)
{
 int VAR_9 = 0;

 FUNC_9(&VAR_7->ts_bitmap_lock);
 VAR_8->bitmap_id = FUNC_2(VAR_7->ts_bitmap,
     VAR_1, FUNC_4(1));
 FUNC_10(&VAR_7->ts_bitmap_lock);

 if (VAR_8->bitmap_id < 0) {
  FUNC_7("bitmap_find_free_region() failed for"
         " iscsit_start_kthreads()\n");
  return -VAR_0;
 }

 VAR_8->tx_thread = FUNC_5(VAR_6, VAR_8,
          "%s", VAR_3);
 if (FUNC_0(VAR_8->tx_thread)) {
  FUNC_7("Unable to start iscsi_target_tx_thread\n");
  VAR_9 = FUNC_1(VAR_8->tx_thread);
  goto out_bitmap;
 }
 VAR_8->tx_thread_active = 1;

 VAR_8->rx_thread = FUNC_5(VAR_5, VAR_8,
          "%s", VAR_2);
 if (FUNC_0(VAR_8->rx_thread)) {
  FUNC_7("Unable to start iscsi_target_rx_thread\n");
  VAR_9 = FUNC_1(VAR_8->rx_thread);
  goto out_tx;
 }
 VAR_8->rx_thread_active = 1;

 return 0;
out_tx:
 FUNC_8(VAR_4, VAR_8->tx_thread, 1);
 FUNC_6(VAR_8->tx_thread);
 VAR_8->tx_thread_active = 0;
out_bitmap:
 FUNC_9(&VAR_7->ts_bitmap_lock);
 FUNC_3(VAR_7->ts_bitmap, VAR_8->bitmap_id,
         FUNC_4(1));
 FUNC_10(&VAR_7->ts_bitmap_lock);
 return VAR_9;
}
