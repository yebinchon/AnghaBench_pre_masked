
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtw_vif {int net_type; int bssid; scalar_t__ aid; } ;
struct rtw_dev {int mutex; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;
struct ieee80211_bss_conf {int bssid; scalar_t__ assoc; scalar_t__ aid; } ;
typedef enum rtw_net_type { ____Placeholder_rtw_net_type } rtw_net_type ;
struct TYPE_2__ {int (* phy_calibration ) (struct rtw_dev*) ;} ;


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
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;
 int FUNC_4 (struct rtw_dev*,int ) ;
 int FUNC_5 (struct rtw_dev*,scalar_t__) ;
 int FUNC_6 (struct rtw_dev*,struct ieee80211_vif*) ;
 int FUNC_7 (struct rtw_dev*) ;
 int FUNC_8 (struct rtw_dev*) ;
 int FUNC_9 (struct rtw_dev*,struct rtw_vif*,int) ;
 int FUNC_10 (struct rtw_dev*) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_12,
         struct ieee80211_vif *VAR_13,
         struct ieee80211_bss_conf *VAR_14,
         u32 VAR_15)
{
 struct rtw_dev *VAR_16 = VAR_12->priv;
 struct rtw_vif *VAR_17 = (struct rtw_vif *)VAR_13->drv_priv;
 u32 VAR_18 = 0;

 FUNC_1(&VAR_16->mutex);

 if (VAR_15 & VAR_0) {
  struct rtw_chip_info *VAR_19 = VAR_16->chip;
  enum rtw_net_type VAR_20;

  if (VAR_14->assoc) {
   FUNC_4(VAR_16, VAR_3);
   VAR_20 = VAR_10;
   VAR_19->ops->phy_calibration(VAR_16);

   VAR_17->aid = VAR_14->aid;
   FUNC_3(VAR_16, VAR_8, 1);
   FUNC_3(VAR_16, VAR_9, 1);
   FUNC_3(VAR_16, VAR_7, 1);
   FUNC_6(VAR_16, VAR_13);
   FUNC_8(VAR_16);
   FUNC_5(VAR_16, VAR_14->assoc);
  } else {
   VAR_20 = VAR_11;
   VAR_17->aid = 0;
   FUNC_7(VAR_16);
  }

  VAR_17->net_type = VAR_20;
  VAR_18 |= VAR_6;
  VAR_18 |= VAR_4;
 }

 if (VAR_15 & VAR_2) {
  FUNC_0(VAR_17->bssid, VAR_14->bssid);
  VAR_18 |= VAR_5;
 }

 if (VAR_15 & VAR_1)
  FUNC_6(VAR_16, VAR_13);

 FUNC_9(VAR_16, VAR_17, VAR_18);

 FUNC_2(&VAR_16->mutex);
}
