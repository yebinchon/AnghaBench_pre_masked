
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ ptcl; int nss; } ;
struct rtw_efuse {TYPE_1__ hw_cap; } ;
struct rtw_dev {struct rtw_efuse efuse; } ;
struct TYPE_4__ {void* tx_highest; void* rx_highest; void* tx_mcs_map; void* rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int vht_supported; int cap; TYPE_2__ vht_mcs; } ;
typedef void* __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_11,
        struct ieee80211_sta_vht_cap *VAR_12)
{
 struct rtw_efuse *VAR_13 = &VAR_11->efuse;
 u16 VAR_14;
 __le16 VAR_15;

 if (VAR_13->hw_cap.ptcl != VAR_0 &&
     VAR_13->hw_cap.ptcl != VAR_1)
  return;

 VAR_12->vht_supported = 1;
 VAR_12->cap = VAR_4 |
         VAR_5 |
         VAR_7 |
         VAR_8 |
         VAR_6 |
         VAR_2 |
         VAR_3 |
         0;
 VAR_14 = VAR_10 << 0 |
    VAR_9 << 4 |
    VAR_9 << 6 |
    VAR_9 << 8 |
    VAR_9 << 10 |
    VAR_9 << 12 |
    VAR_9 << 14;
 if (VAR_13->hw_cap.nss > 1) {
  VAR_15 = FUNC_0(780);
  VAR_14 |= VAR_10 << 2;
 } else {
  VAR_15 = FUNC_0(390);
  VAR_14 |= VAR_9 << 2;
 }

 VAR_12->vht_mcs.rx_mcs_map = FUNC_0(VAR_14);
 VAR_12->vht_mcs.tx_mcs_map = FUNC_0(VAR_14);
 VAR_12->vht_mcs.rx_highest = VAR_15;
 VAR_12->vht_mcs.tx_highest = VAR_15;
}
