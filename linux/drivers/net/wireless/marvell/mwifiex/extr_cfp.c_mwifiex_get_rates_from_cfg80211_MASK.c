
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct mwifiex_private {struct cfg80211_scan_request* scan_request; TYPE_1__* adapter; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_2__* bitrates; } ;
struct cfg80211_scan_request {int* rates; } ;
struct TYPE_4__ {int bitrate; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

u32 FUNC_2(struct mwifiex_private *VAR_2,
        u8 *VAR_3, u8 VAR_4)
{
 struct wiphy *VAR_5 = VAR_2->adapter->wiphy;
 struct cfg80211_scan_request *VAR_6 = VAR_2->scan_request;
 u32 VAR_7, VAR_8;
 struct ieee80211_supported_band *VAR_9;
 int VAR_10;

 if (VAR_4) {
  VAR_9 = VAR_5->bands[VAR_1];
  if (FUNC_1(!VAR_9))
   return 0;
  VAR_8 = VAR_6->rates[VAR_1];
 } else {
  VAR_9 = VAR_5->bands[VAR_0];
  if (FUNC_1(!VAR_9))
   return 0;
  VAR_8 = VAR_6->rates[VAR_0];
 }

 VAR_7 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_9->n_bitrates; VAR_10++) {
  if ((FUNC_0(VAR_10) & VAR_8) == 0)
   continue;
  VAR_3[VAR_7++] = (u8)(VAR_9->bitrates[VAR_10].bitrate / 5);
 }

 return VAR_7;
}
