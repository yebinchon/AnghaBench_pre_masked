
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {TYPE_4__* hw; TYPE_3__* bcn; int extra_tx_headroom; TYPE_2__* ops; int sleep_work; int autowakeup_work; int intf_work; int workqueue; int flags; int txstatus_timer; int bar_list_lock; int bar_list; int conf_mutex; int csr_mutex; int irqmask_lock; int drv_data; } ;
struct TYPE_11__ {int interface_modes; int flags; scalar_t__* addr_mask; } ;
struct TYPE_10__ {int vif_data_size; TYPE_5__* wiphy; } ;
struct TYPE_9__ {scalar_t__ limit; } ;
struct TYPE_8__ {scalar_t__ drv_data_size; TYPE_1__* lib; scalar_t__ max_ap_intf; } ;
struct TYPE_7__ {int (* probe_hw ) (struct rt2x00_dev*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct rt2x00_dev*,char*) ;
 int FUNC_9 (struct rt2x00_dev*,int ) ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (struct rt2x00_dev*) ;
 int FUNC_12 (struct rt2x00_dev*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (struct rt2x00_dev*) ;
 int FUNC_14 (struct rt2x00_dev*) ;
 int FUNC_15 (struct rt2x00_dev*) ;
 int VAR_16 ;
 int FUNC_16 (struct rt2x00_dev*) ;
 int FUNC_17 (struct rt2x00_dev*) ;
 int FUNC_18 (struct rt2x00_dev*) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct rt2x00_dev*) ;
 int FUNC_22 (TYPE_5__*,int ) ;
 int FUNC_23 (TYPE_5__*) ;

int FUNC_24(struct rt2x00_dev *VAR_17)
{
 int VAR_18 = -VAR_2;




 FUNC_15(VAR_17);




 if (VAR_17->ops->drv_data_size > 0) {
  VAR_17->drv_data = FUNC_6(VAR_17->ops->drv_data_size,
                         VAR_4);
  if (!VAR_17->drv_data) {
   VAR_18 = -VAR_2;
   goto exit;
  }
 }

 FUNC_20(&VAR_17->irqmask_lock);
 FUNC_7(&VAR_17->csr_mutex);
 FUNC_7(&VAR_17->conf_mutex);
 FUNC_2(&VAR_17->bar_list);
 FUNC_20(&VAR_17->bar_list_lock);
 FUNC_5(&VAR_17->txstatus_timer, VAR_0,
       VAR_5);

 FUNC_19(VAR_1, &VAR_17->flags);





 VAR_17->hw->vif_data_size = sizeof(struct rt2x00_intf);





 VAR_17->hw->wiphy->addr_mask[VAR_3 - 1] =
  (VAR_17->ops->max_ap_intf - 1);




 VAR_17->workqueue =
     FUNC_4("%s", 0, FUNC_23(VAR_17->hw->wiphy));
 if (!VAR_17->workqueue) {
  VAR_18 = -VAR_2;
  goto exit;
 }

 FUNC_3(&VAR_17->intf_work, VAR_15);
 FUNC_1(&VAR_17->autowakeup_work, VAR_14);
 FUNC_3(&VAR_17->sleep_work, VAR_16);




 VAR_18 = VAR_17->ops->lib->probe_hw(VAR_17);
 if (VAR_18) {
  FUNC_8(VAR_17, "Failed to allocate device\n");
  goto exit;
 }




 VAR_18 = FUNC_17(VAR_17);
 if (VAR_18)
  goto exit;


 VAR_17->extra_tx_headroom = FUNC_11(VAR_17);






 VAR_17->hw->wiphy->interface_modes = FUNC_0(VAR_10);
 if (VAR_17->bcn->limit > 0)
  VAR_17->hw->wiphy->interface_modes |=
      FUNC_0(VAR_7) |






      FUNC_0(VAR_8);

 VAR_17->hw->wiphy->flags |= VAR_13;

 FUNC_22(VAR_17->hw->wiphy,
         VAR_6);




 VAR_18 = FUNC_13(VAR_17);
 if (VAR_18) {
  FUNC_8(VAR_17, "Failed to initialize hw\n");
  goto exit;
 }




 FUNC_16(VAR_17);
 FUNC_12(VAR_17);
 FUNC_10(VAR_17);




 if (!FUNC_9(VAR_17, VAR_12))
  FUNC_18(VAR_17);

 return 0;

exit:
 FUNC_14(VAR_17);

 return VAR_18;
}
