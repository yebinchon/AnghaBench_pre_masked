
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_bitrate_mask {TYPE_1__* control; } ;
struct ath10k {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int * vht_mcs; int * ht_mcs; int legacy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct ath10k *VAR_0,
     enum nl80211_band VAR_1,
     const struct cfg80211_bitrate_mask *VAR_2,
     int *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5, VAR_6;

 VAR_4 += FUNC_2(VAR_2->control[VAR_1].legacy);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->control[VAR_1].ht_mcs); VAR_5++)
  VAR_4 += FUNC_3(VAR_2->control[VAR_1].ht_mcs[VAR_5]);

 *VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->control[VAR_1].vht_mcs); VAR_5++) {
  VAR_6 = FUNC_1(VAR_2->control[VAR_1].vht_mcs[VAR_5]);
  VAR_4 += VAR_6;
  *VAR_3 += VAR_6;
 }

 return VAR_4 == 1;
}
