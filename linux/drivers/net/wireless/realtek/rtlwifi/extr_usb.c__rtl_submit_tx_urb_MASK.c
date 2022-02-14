
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct sk_buff {int dummy; } ;
struct rtl_usb {int tx_submitted; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*) ;
 struct rtl_usb* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct urb*,int *) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_1, struct urb *VAR_2)
{
 int VAR_3;
 struct rtl_usb *VAR_4 = FUNC_2(FUNC_3(VAR_1));

 FUNC_4(VAR_2, &VAR_4->tx_submitted);
 VAR_3 = FUNC_6(VAR_2, VAR_0);
 if (VAR_3 < 0) {
  struct sk_buff *VAR_5;

  FUNC_1("Failed to submit urb\n");
  FUNC_7(VAR_2);
  VAR_5 = (struct sk_buff *)VAR_2->context;
  FUNC_0(VAR_5);
 }
 FUNC_5(VAR_2);
}
