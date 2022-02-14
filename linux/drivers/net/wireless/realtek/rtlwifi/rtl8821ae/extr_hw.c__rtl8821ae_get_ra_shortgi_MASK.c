
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int cap; } ;
struct TYPE_3__ {int cap; } ;
struct ieee80211_sta {TYPE_2__ vht_cap; TYPE_1__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct ieee80211_hw *VAR_4, struct ieee80211_sta *VAR_5,
         u8 VAR_6)
{
 bool VAR_7 = 0;
 u8 VAR_8 = (VAR_5->ht_cap.cap & VAR_1) ?
    1 : 0;
 u8 VAR_9 = (VAR_5->ht_cap.cap & VAR_0) ?
    1 : 0;
 u8 VAR_10 = 0;
 VAR_10 = (VAR_5->vht_cap.cap &
         VAR_2) ? 1 : 0;

 if (VAR_6 == VAR_3)
   VAR_7 = 0;

 if (VAR_8 || VAR_10
  || VAR_9)
  VAR_7 = 1;

 return VAR_7;
}
