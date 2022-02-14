
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct urb {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * ep_mapping; } ;
struct rtl_usb {TYPE_1__ ep_map; int * usb_tx_aggregate_hdl; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum rtl_txq { ____Placeholder_rtl_txq } rtl_txq ;


 int FUNC_0 (struct rtl_usb*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,struct urb*) ;
 struct urb* FUNC_3 (struct ieee80211_hw*,struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;
 struct rtl_usb* FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1,
         enum rtl_txq VAR_2)
{
 struct rtl_usb *VAR_3 = FUNC_6(FUNC_7(VAR_0));
 u32 VAR_4;
 struct urb *VAR_5 = ((void*)0);
 struct sk_buff *VAR_6 = ((void*)0);

 FUNC_1(((void*)0) == VAR_3->usb_tx_aggregate_hdl);
 if (FUNC_8(FUNC_0(VAR_3))) {
  FUNC_5("USB device is stopping...\n");
  FUNC_4(VAR_1);
  return;
 }
 VAR_4 = VAR_3->ep_map.ep_mapping[VAR_2];
 VAR_6 = VAR_1;
 VAR_5 = FUNC_3(VAR_0, VAR_6, VAR_4);
 if (FUNC_8(!VAR_5)) {
  FUNC_5("Can't allocate urb. Drop skb!\n");
  FUNC_4(VAR_1);
  return;
 }
 FUNC_2(VAR_0, VAR_5);
}
