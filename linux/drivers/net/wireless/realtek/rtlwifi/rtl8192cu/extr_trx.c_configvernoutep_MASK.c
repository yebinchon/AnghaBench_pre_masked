
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_usb_priv {int dummy; } ;
struct rtl_usb {int out_ep_nums; int out_queue_sel; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__) ;
 struct rtl_usb* FUNC_2 (struct rtl_usb_priv*) ;
 struct rtl_usb_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_7)
{
 u8 VAR_8;
 u8 VAR_9 = 0;

 struct rtl_priv *VAR_10 = FUNC_0(VAR_7);
 struct rtl_usb_priv *VAR_11 = FUNC_3(VAR_7);
 struct rtl_usb *VAR_12 = FUNC_2(VAR_11);

 VAR_12->out_queue_sel = 0;

 VAR_8 = FUNC_1(VAR_10, (VAR_1 + 1));
 if (VAR_8 & VAR_5) {
  VAR_12->out_queue_sel |= VAR_2;
  VAR_9++;
 }
 if ((VAR_8 >> VAR_6) & VAR_5) {
  VAR_12->out_queue_sel |= VAR_4;
  VAR_9++;
 }

 VAR_8 = FUNC_1(VAR_10, (VAR_1 + 2));
 if (VAR_8 & VAR_5) {
  VAR_12->out_queue_sel |= VAR_3;
  VAR_9++;
 }
 return (VAR_12->out_ep_nums == VAR_9) ? 0 : -VAR_0;
}
