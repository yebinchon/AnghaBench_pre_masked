
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cap; } ;
struct ieee80211_sta {scalar_t__ bandwidth; TYPE_1__ vht_cap; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_phy_mode { ____Placeholder_wmi_phy_mode } wmi_phy_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static enum wmi_phy_mode FUNC_0(struct ath10k *VAR_11,
          struct ieee80211_sta *VAR_12)
{
 if (VAR_12->bandwidth == VAR_0) {
  switch (VAR_12->vht_cap.cap & VAR_4) {
  case 129:
   return VAR_5;
  case 128:
   return VAR_9;
  default:

   return VAR_5;
  }
 }

 if (VAR_12->bandwidth == VAR_3)
  return VAR_8;

 if (VAR_12->bandwidth == VAR_2)
  return VAR_7;

 if (VAR_12->bandwidth == VAR_1)
  return VAR_6;

 return VAR_10;
}
