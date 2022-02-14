
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct rtl_usb {int dummy; } ;
struct ieee80211_tx_info {struct rtl_usb** rate_driver_data; } ;
typedef scalar_t__ __kernel_size_t ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct rtl_usb *VAR_0,
      struct sk_buff *VAR_1,
      u32 VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_0(VAR_1);

 VAR_3->rate_driver_data[0] = VAR_0;
 VAR_3->rate_driver_data[1] = (void *)(__kernel_size_t)VAR_2;
}
