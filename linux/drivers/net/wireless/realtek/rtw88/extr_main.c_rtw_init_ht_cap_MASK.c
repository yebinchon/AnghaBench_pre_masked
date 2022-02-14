
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bw; int nss; } ;
struct rtw_efuse {TYPE_1__ hw_cap; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;
struct TYPE_4__ {int* rx_mask; void* rx_highest; int tx_params; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_2__ mcs; int ampdu_density; int ampdu_factor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_11,
       struct ieee80211_sta_ht_cap *VAR_12)
{
 struct rtw_efuse *VAR_13 = &VAR_11->efuse;

 VAR_12->ht_supported = 1;
 VAR_12->cap = 0;
 VAR_12->cap |= VAR_4 |
   VAR_2 |
   VAR_1 |
   (1 << VAR_3);
 if (VAR_13->hw_cap.bw & FUNC_0(VAR_10))
  VAR_12->cap |= VAR_6 |
    VAR_0 |
    VAR_5;
 VAR_12->ampdu_factor = VAR_7;
 VAR_12->ampdu_density = VAR_9;
 VAR_12->mcs.tx_params = VAR_8;
 if (VAR_13->hw_cap.nss > 1) {
  VAR_12->mcs.rx_mask[0] = 0xFF;
  VAR_12->mcs.rx_mask[1] = 0xFF;
  VAR_12->mcs.rx_mask[4] = 0x01;
  VAR_12->mcs.rx_highest = FUNC_1(300);
 } else {
  VAR_12->mcs.rx_mask[0] = 0xFF;
  VAR_12->mcs.rx_mask[1] = 0x00;
  VAR_12->mcs.rx_mask[4] = 0x01;
  VAR_12->mcs.rx_highest = FUNC_1(150);
 }
}
