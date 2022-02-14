
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_buffer; int transfer_buffer_length; int dev; } ;
struct rtl_usb {int rx_cleanup_urbs; int rx_queue; int rx_work_tasklet; int rx_submitted; } ;
struct TYPE_2__ {int rtl_wq; int lps_change_work; } ;
struct rtl_priv {TYPE_1__ works; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (struct urb*) ;
 struct urb* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_3(VAR_0);
 struct rtl_usb *VAR_2 = FUNC_4(FUNC_5(VAR_0));
 struct urb *VAR_3;

 FUNC_11(&VAR_2->rx_submitted);

 FUNC_7(&VAR_2->rx_work_tasklet);
 FUNC_0(&VAR_1->works.lps_change_work);

 FUNC_2(VAR_1->works.rtl_wq);
 FUNC_1(VAR_1->works.rtl_wq);

 FUNC_6(&VAR_2->rx_queue);

 while ((VAR_3 = FUNC_10(&VAR_2->rx_cleanup_urbs))) {
  FUNC_8(VAR_3->dev, VAR_3->transfer_buffer_length,
    VAR_3->transfer_buffer, VAR_3->transfer_dma);
  FUNC_9(VAR_3);
 }
}
