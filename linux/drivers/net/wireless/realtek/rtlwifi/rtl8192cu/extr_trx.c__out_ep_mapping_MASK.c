
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_usb_priv {int dummy; } ;
struct rtl_ep_map {int dummy; } ;
struct rtl_usb {int out_ep_nums; struct rtl_ep_map ep_map; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct rtl_ep_map*) ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_4 (struct rtl_usb_priv*) ;
 struct rtl_usb_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int,struct rtl_ep_map*) ;
 int FUNC_7 (struct ieee80211_hw*,int,int,struct rtl_ep_map*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_1)
{
 int VAR_2 = 0;
 bool VAR_3, VAR_4 = 0;
 struct rtl_hal *VAR_5 = FUNC_2(FUNC_3(VAR_1));
 struct rtl_usb_priv *VAR_6 = FUNC_5(VAR_1);
 struct rtl_usb *VAR_7 = FUNC_4(VAR_6);
 struct rtl_ep_map *VAR_8 = &(VAR_7->ep_map);

 VAR_3 = FUNC_0(VAR_5->version);
 switch (VAR_7->out_ep_nums) {
 case 2:
  FUNC_7(VAR_1, VAR_3, VAR_4, VAR_8);
  break;
 case 3:

  if (!VAR_3) {
   VAR_2 = -VAR_0;
   goto err_out;
  }
  FUNC_6(VAR_1, VAR_3, VAR_8);
  break;
 case 1:
  FUNC_1(VAR_1, VAR_8);
  break;
 default:
  VAR_2 = -VAR_0;
  break;
 }
err_out:
 return VAR_2;

}
