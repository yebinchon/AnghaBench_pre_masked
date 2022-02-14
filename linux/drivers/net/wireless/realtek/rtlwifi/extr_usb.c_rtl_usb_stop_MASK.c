
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; } ;
struct rtl_usb {int rx_cleanup_urbs; int rx_queue; int rx_work_tasklet; int rx_submitted; } ;
struct TYPE_4__ {int rtl_wq; int lps_change_work; int fill_h2c_cmd; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ works; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* hw_disable ) (struct ieee80211_hw*) ;} ;


 int FUNC_0 (struct rtl_usb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_hal*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (struct urb*) ;
 struct urb* FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_4(VAR_0);
 struct rtl_hal *VAR_2 = FUNC_3(FUNC_4(VAR_0));
 struct rtl_usb *VAR_3 = FUNC_5(FUNC_6(VAR_0));
 struct urb *VAR_4;


 FUNC_7(VAR_2);
 FUNC_1(&VAR_1->works.fill_h2c_cmd);

 FUNC_0(VAR_3);


 FUNC_14(&VAR_3->rx_submitted);

 FUNC_10(&VAR_3->rx_work_tasklet);
 FUNC_1(&VAR_1->works.lps_change_work);

 FUNC_2(VAR_1->works.rtl_wq);

 FUNC_8(&VAR_3->rx_queue);

 while ((VAR_4 = FUNC_13(&VAR_3->rx_cleanup_urbs))) {
  FUNC_11(VAR_4->dev, VAR_4->transfer_buffer_length,
    VAR_4->transfer_buffer, VAR_4->transfer_dma);
  FUNC_12(VAR_4);
 }

 VAR_1->cfg->ops->hw_disable(VAR_0);
}
