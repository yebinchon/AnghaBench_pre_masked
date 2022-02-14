
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct cfg80211_bitrate_mask {TYPE_1__* control; } ;
struct ath10k {int phy_capability; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_4__ {int hw_value; int bitrate; } ;
struct TYPE_3__ {int * vht_mcs; int * ht_mcs; int legacy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ath10k *VAR_8,
     enum nl80211_band VAR_9,
     const struct cfg80211_bitrate_mask *VAR_10,
     u8 *VAR_11, u8 *VAR_12, bool VAR_13)
{
 int VAR_14;
 int VAR_15;
 u16 VAR_16;
 u8 VAR_17;
 u8 VAR_18;

 if (VAR_13)
  goto next;

 if (FUNC_4(VAR_10->control[VAR_9].legacy) == 1) {
  VAR_14 = FUNC_2(VAR_10->control[VAR_9].legacy) - 1;

  if (VAR_8->phy_capability & VAR_2)
   VAR_14 += VAR_0;

  VAR_18 = VAR_7[VAR_14].hw_value;
  VAR_16 = VAR_7[VAR_14].bitrate;

  if (FUNC_1(VAR_16))
   VAR_17 = VAR_3;
  else
   VAR_17 = VAR_5;

  *VAR_12 = 1;
  *VAR_11 = VAR_17 << 6 |
   (*VAR_12 - 1) << 4 |
   VAR_18 << 0;

  return 0;
 }

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_10->control[VAR_9].ht_mcs); VAR_15++) {
  if (FUNC_5(VAR_10->control[VAR_9].ht_mcs[VAR_15]) == 1) {
   *VAR_12 = VAR_15 + 1;
   *VAR_11 = VAR_4 << 6 |
    (*VAR_12 - 1) << 4 |
    (FUNC_2(VAR_10->control[VAR_9].ht_mcs[VAR_15]) - 1);

   return 0;
  }
 }

next:
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_10->control[VAR_9].vht_mcs); VAR_15++) {
  if (FUNC_3(VAR_10->control[VAR_9].vht_mcs[VAR_15]) == 1) {
   *VAR_12 = VAR_15 + 1;
   *VAR_11 = VAR_6 << 6 |
    (*VAR_12 - 1) << 4 |
    (FUNC_2(VAR_10->control[VAR_9].vht_mcs[VAR_15]) - 1);

   return 0;
  }
 }

 return -VAR_1;
}
