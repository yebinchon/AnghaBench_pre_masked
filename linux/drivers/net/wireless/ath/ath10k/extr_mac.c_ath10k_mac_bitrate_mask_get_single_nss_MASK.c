
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_10__ {scalar_t__* rx_mask; } ;
struct TYPE_11__ {TYPE_4__ mcs; } ;
struct TYPE_8__ {int tx_mcs_map; } ;
struct TYPE_9__ {TYPE_2__ vht_mcs; } ;
struct ieee80211_supported_band {TYPE_5__ ht_cap; TYPE_3__ vht_cap; } ;
struct cfg80211_bitrate_mask {TYPE_6__* control; } ;
struct TYPE_7__ {struct ieee80211_supported_band* sbands; } ;
struct ath10k {TYPE_1__ mac; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_12__ {scalar_t__* ht_mcs; scalar_t__* vht_mcs; scalar_t__ legacy; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct ath10k *VAR_0,
           enum nl80211_band VAR_1,
           const struct cfg80211_bitrate_mask *VAR_2,
           int *VAR_3)
{
 struct ieee80211_supported_band *VAR_4 = &VAR_0->mac.sbands[VAR_1];
 u16 VAR_5 = FUNC_4(VAR_4->vht_cap.vht_mcs.tx_mcs_map);
 u8 VAR_6 = 0;
 u8 VAR_7 = 0;
 int VAR_8;

 if (VAR_2->control[VAR_1].legacy)
  return 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2->control[VAR_1].ht_mcs); VAR_8++) {
  if (VAR_2->control[VAR_1].ht_mcs[VAR_8] == 0)
   continue;
  else if (VAR_2->control[VAR_1].ht_mcs[VAR_8] ==
    VAR_4->ht_cap.mcs.rx_mask[VAR_8])
   VAR_6 |= FUNC_1(VAR_8);
  else
   return 0;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2->control[VAR_1].vht_mcs); VAR_8++) {
  if (VAR_2->control[VAR_1].vht_mcs[VAR_8] == 0)
   continue;
  else if (VAR_2->control[VAR_1].vht_mcs[VAR_8] ==
    FUNC_2(VAR_5, VAR_8))
   VAR_7 |= FUNC_1(VAR_8);
  else
   return 0;
 }

 if (VAR_6 != VAR_7)
  return 0;

 if (VAR_6 == 0)
  return 0;

 if (FUNC_1(FUNC_3(VAR_6)) - 1 != VAR_6)
  return 0;

 *VAR_3 = FUNC_3(VAR_6);

 return 1;
}
