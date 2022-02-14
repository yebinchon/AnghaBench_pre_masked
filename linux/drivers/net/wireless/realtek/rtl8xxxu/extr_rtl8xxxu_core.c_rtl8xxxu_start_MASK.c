
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8xxxu_tx_urb {int list; struct ieee80211_hw* hw; int urb; } ;
struct rtl8xxxu_rx_urb {struct ieee80211_hw* hw; int list; int urb; } ;
struct rtl8xxxu_priv {int tx_stopped; int shutdown; int rx_urb_lock; int tx_urb_free_count; int tx_urb_free_list; scalar_t__ usb_interrupts; TYPE_1__* fops; int int_anchor; int tx_anchor; int rx_anchor; } ;
struct ieee80211_hw {struct rtl8xxxu_priv* priv; } ;
struct TYPE_2__ {int (* enable_rf ) (struct rtl8xxxu_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct rtl8xxxu_priv*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl8xxxu_priv*,struct rtl8xxxu_rx_urb*) ;
 int FUNC_7 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_8 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct rtl8xxxu_priv*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_7)
{
 struct rtl8xxxu_priv *VAR_8 = VAR_7->priv;
 struct rtl8xxxu_rx_urb *VAR_9;
 struct rtl8xxxu_tx_urb *VAR_10;
 unsigned long VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = 0;

 FUNC_1(&VAR_8->rx_anchor);
 FUNC_1(&VAR_8->tx_anchor);
 FUNC_1(&VAR_8->int_anchor);

 VAR_8->fops->enable_rf(VAR_8);
 if (VAR_8->usb_interrupts) {
  VAR_12 = FUNC_5(VAR_7);
  if (VAR_12)
   goto exit;
 }

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_10 = FUNC_2(sizeof(struct rtl8xxxu_tx_urb), VAR_1);
  if (!VAR_10) {
   if (!VAR_13)
    VAR_12 = -VAR_0;

   goto error_out;
  }
  FUNC_12(&VAR_10->urb);
  FUNC_0(&VAR_10->list);
  VAR_10->hw = VAR_7;
  FUNC_3(&VAR_10->list, &VAR_8->tx_urb_free_list);
  VAR_8->tx_urb_free_count++;
 }

 VAR_8->tx_stopped = 0;

 FUNC_9(&VAR_8->rx_urb_lock, VAR_11);
 VAR_8->shutdown = 0;
 FUNC_10(&VAR_8->rx_urb_lock, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_9 = FUNC_2(sizeof(struct rtl8xxxu_rx_urb), VAR_1);
  if (!VAR_9) {
   if (!VAR_13)
    VAR_12 = -VAR_0;

   goto error_out;
  }
  FUNC_12(&VAR_9->urb);
  FUNC_0(&VAR_9->list);
  VAR_9->hw = VAR_7;

  VAR_12 = FUNC_6(VAR_8, VAR_9);
 }
exit:



 FUNC_7(VAR_8, VAR_4, 0xffff);
 FUNC_7(VAR_8, VAR_3, 0xffff);

 FUNC_8(VAR_8, VAR_2, 0x6954341e);

 return VAR_12;

error_out:
 FUNC_4(VAR_8);



 FUNC_7(VAR_8, VAR_4, 0x0000);
 FUNC_7(VAR_8, VAR_3, 0x0000);

 return VAR_12;
}
