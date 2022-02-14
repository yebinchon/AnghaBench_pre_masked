
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ieee80211_supported_band {int n_bitrates; TYPE_1__* bitrates; } ;
struct TYPE_2__ {scalar_t__ bitrate; } ;



u8 FUNC_0(const struct ieee80211_supported_band *VAR_0,
        u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_bitrates; VAR_2++)
  if (VAR_0->bitrates[VAR_2].bitrate == VAR_1)
   return VAR_2;

 return 0;
}
