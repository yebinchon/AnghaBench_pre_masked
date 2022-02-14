
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8xxxu_priv {int shutdown; scalar_t__ usb_interrupts; TYPE_1__* fops; int int_anchor; int tx_anchor; int rx_anchor; int rx_urb_lock; } ;
struct ieee80211_hw {struct rtl8xxxu_priv* priv; } ;
struct TYPE_2__ {int (* disable_rf ) (struct rtl8xxxu_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8xxxu_priv*) ;
 int FUNC_1 (struct rtl8xxxu_priv*) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct rtl8xxxu_priv*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_4)
{
 struct rtl8xxxu_priv *VAR_5 = VAR_4->priv;
 unsigned long VAR_6;

 FUNC_4(VAR_5, VAR_2, 0xff);

 FUNC_2(VAR_5, VAR_0, 0x0000);
 FUNC_2(VAR_5, VAR_1, 0x0000);

 FUNC_5(&VAR_5->rx_urb_lock, VAR_6);
 VAR_5->shutdown = 1;
 FUNC_6(&VAR_5->rx_urb_lock, VAR_6);

 FUNC_8(&VAR_5->rx_anchor);
 FUNC_8(&VAR_5->tx_anchor);
 if (VAR_5->usb_interrupts)
  FUNC_8(&VAR_5->int_anchor);

 FUNC_4(VAR_5, VAR_2, 0xff);

 VAR_5->fops->disable_rf(VAR_5);




 if (VAR_5->usb_interrupts)
  FUNC_3(VAR_5, VAR_3, 0);

 FUNC_0(VAR_5);
 FUNC_1(VAR_5);
}
