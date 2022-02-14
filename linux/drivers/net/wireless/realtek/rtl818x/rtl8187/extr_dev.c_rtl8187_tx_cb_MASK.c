
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct rtl8187b_tx_hdr {int dummy; } ;
struct rtl8187_tx_hdr {int dummy; } ;
struct TYPE_4__ {int queue; } ;
struct rtl8187_priv {int work; TYPE_2__ b_tx_status; scalar_t__ is_rtl8187b; TYPE_1__* udev; } ;
struct ieee80211_tx_info {int flags; struct ieee80211_hw** rate_driver_data; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_3__ {int dev; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_3 (struct ieee80211_tx_info*) ;
 int FUNC_4 (struct ieee80211_hw*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_2)
{
 struct sk_buff *VAR_3 = (struct sk_buff *)VAR_2->context;
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);
 struct ieee80211_hw *VAR_5 = VAR_4->rate_driver_data[0];
 struct rtl8187_priv *VAR_6 = VAR_5->priv;

 FUNC_6(VAR_3, VAR_6->is_rtl8187b ? sizeof(struct rtl8187b_tx_hdr) :
       sizeof(struct rtl8187_tx_hdr));
 FUNC_3(VAR_4);

 if (!(VAR_2->status) && !(VAR_4->flags & VAR_0)) {
  if (VAR_6->is_rtl8187b) {
   FUNC_8(&VAR_6->b_tx_status.queue, VAR_3);


   while (FUNC_7(&VAR_6->b_tx_status.queue) > 5) {
    struct sk_buff *VAR_7;

    FUNC_1(&VAR_6->udev->dev,
     "transmit status queue full\n");

    VAR_7 = FUNC_5(&VAR_6->b_tx_status.queue);
    FUNC_4(VAR_5, VAR_7);
   }
   return;
  } else {
   VAR_4->flags |= VAR_1;
  }
 }
 if (VAR_6->is_rtl8187b)
  FUNC_4(VAR_5, VAR_3);
 else {



  FUNC_8(&VAR_6->b_tx_status.queue, VAR_3);
  FUNC_2(VAR_5, &VAR_6->work, 0);
 }
}
