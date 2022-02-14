
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int driver_info; } ;
struct usb_device {int dummy; } ;
struct ieee80211_hw {int extra_tx_headroom; int queues; TYPE_1__* wiphy; struct ar5523* priv; } ;
struct ar5523_tx_desc {int dummy; } ;
struct ar5523_chunk {int dummy; } ;
struct ar5523 {int wq; int * vif; int rx_data_list_lock; int rx_data_used; int rx_data_free; int rx_refill_work; int rx_data_free_cnt; int tx_flush_waitq; int tx_nr_pending; int tx_nr_total; int tx_data_list_lock; int tx_queue_submitted; int tx_queue_pending; int tx_work; int tx_wd_work; int tx_wd_timer; int stat_work; int mutex; struct usb_device* dev; struct ieee80211_hw* hw; } ;
struct TYPE_2__ {int interface_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ieee80211_hw*,int *) ;
 int VAR_7 ;
 int FUNC_5 (struct ar5523*) ;
 int FUNC_6 (struct ar5523*) ;
 int FUNC_7 (struct ar5523*) ;
 int FUNC_8 (struct ar5523*) ;
 int FUNC_9 (struct ar5523*,char*) ;
 int FUNC_10 (struct ar5523*) ;
 int FUNC_11 (struct ar5523*) ;
 int FUNC_12 (struct ar5523*) ;
 int FUNC_13 (struct ar5523*) ;
 int FUNC_14 (struct ar5523*) ;
 int FUNC_15 (struct ar5523*) ;
 int FUNC_16 (struct ar5523*) ;
 int FUNC_17 (struct ar5523*,char*,...) ;
 int FUNC_18 (struct ar5523*) ;
 int FUNC_19 (struct usb_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (struct ar5523*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int ) ;
 struct ieee80211_hw* FUNC_24 (int,int *) ;
 int FUNC_25 (struct ieee80211_hw*) ;
 int FUNC_26 (struct ieee80211_hw*,int ) ;
 int FUNC_27 (struct ieee80211_hw*) ;
 int FUNC_28 (int *) ;
 struct usb_device* FUNC_29 (struct usb_interface*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *,int ,int ) ;
 int FUNC_33 (struct usb_interface*,struct ieee80211_hw*) ;
 int FUNC_34 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_35(struct usb_interface *VAR_14,
   const struct usb_device_id *VAR_15)
{
 struct usb_device *VAR_16 = FUNC_29(VAR_14);
 struct ieee80211_hw *VAR_17;
 struct ar5523 *VAR_18;
 int VAR_19 = -VAR_2;






 if (VAR_15->driver_info & VAR_1)
  return FUNC_19(VAR_16);


 VAR_17 = FUNC_24(sizeof(*VAR_18), &VAR_8);
 if (!VAR_17)
  goto out;
 FUNC_4(VAR_17, &VAR_14->dev);

 VAR_18 = VAR_17->priv;
 VAR_18->hw = VAR_17;
 VAR_18->dev = VAR_16;
 FUNC_30(&VAR_18->mutex);

 FUNC_1(&VAR_18->stat_work, VAR_10);
 FUNC_32(&VAR_18->tx_wd_timer, VAR_11, 0);
 FUNC_3(&VAR_18->tx_wd_work, VAR_12);
 FUNC_3(&VAR_18->tx_work, VAR_13);
 FUNC_2(&VAR_18->tx_queue_pending);
 FUNC_2(&VAR_18->tx_queue_submitted);
 FUNC_31(&VAR_18->tx_data_list_lock);
 FUNC_21(&VAR_18->tx_nr_total, 0);
 FUNC_21(&VAR_18->tx_nr_pending, 0);
 FUNC_28(&VAR_18->tx_flush_waitq);

 FUNC_21(&VAR_18->rx_data_free_cnt, 0);
 FUNC_3(&VAR_18->rx_refill_work, VAR_9);
 FUNC_2(&VAR_18->rx_data_free);
 FUNC_2(&VAR_18->rx_data_used);
 FUNC_31(&VAR_18->rx_data_list_lock);

 VAR_18->wq = FUNC_22("ar5523");
 if (!VAR_18->wq) {
  FUNC_9(VAR_18, "Could not create wq\n");
  goto out_free_ar;
 }

 VAR_19 = FUNC_5(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "Could not allocate rx buffers\n");
  goto out_free_wq;
 }

 VAR_19 = FUNC_6(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "Could not allocate rx command buffers\n");
  goto out_free_rx_bufs;
 }

 VAR_19 = FUNC_7(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "Could not allocate tx command buffers\n");
  goto out_free_rx_cmd;
 }

 VAR_19 = FUNC_20(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "Failed to submit rx cmd\n");
  goto out_free_tx_cmd;
 }




 VAR_19 = FUNC_16(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "could not initialize adapter\n");
  goto out_cancel_rx_cmd;
 }

 VAR_19 = FUNC_15(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "could not get caps from adapter\n");
  goto out_cancel_rx_cmd;
 }

 VAR_19 = FUNC_13(VAR_18);
 if (VAR_19) {
  FUNC_9(VAR_18, "could not get caps from adapter\n");
  goto out_cancel_rx_cmd;
 }

 VAR_19 = FUNC_14(VAR_18);
 if (VAR_19 != 0) {
  FUNC_9(VAR_18, "could not get device status\n");
  goto out_cancel_rx_cmd;
 }

 FUNC_17(VAR_18, "MAC/BBP AR5523, RF AR%c112\n",
   (VAR_15->driver_info & VAR_0) ? '5' : '2');

 VAR_18->vif = ((void*)0);
 FUNC_26(VAR_17, VAR_3);
 FUNC_26(VAR_17, VAR_6);
 FUNC_26(VAR_17, VAR_7);
 VAR_17->extra_tx_headroom = sizeof(struct ar5523_tx_desc) +
    sizeof(struct ar5523_chunk);
 VAR_17->wiphy->interface_modes = FUNC_0(VAR_5);
 VAR_17->queues = 1;

 VAR_19 = FUNC_18(VAR_18);
 if (VAR_19)
  goto out_cancel_rx_cmd;

 FUNC_34(VAR_17->wiphy, VAR_4);

 FUNC_33(VAR_14, VAR_17);

 VAR_19 = FUNC_27(VAR_17);
 if (VAR_19) {
  FUNC_9(VAR_18, "could not register device\n");
  goto out_cancel_rx_cmd;
 }

 FUNC_17(VAR_18, "Found and initialized AR5523 device\n");
 return 0;

out_cancel_rx_cmd:
 FUNC_8(VAR_18);
out_free_tx_cmd:
 FUNC_12(VAR_18);
out_free_rx_cmd:
 FUNC_11(VAR_18);
out_free_rx_bufs:
 FUNC_10(VAR_18);
out_free_wq:
 FUNC_23(VAR_18->wq);
out_free_ar:
 FUNC_25(VAR_17);
out:
 return VAR_19;
}
