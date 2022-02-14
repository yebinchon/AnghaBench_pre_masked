
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int supported_mcs_set; int * ofdm_rates; int * dsss_rates; int op_rate_mode; } ;
struct wcn36xx_sta {TYPE_5__ supported_rates; } ;
struct TYPE_6__ {int rx_mask; } ;
struct TYPE_7__ {TYPE_1__ mcs; scalar_t__ ht_supported; } ;
struct ieee80211_sta {int* supp_rates; TYPE_2__ ht_cap; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {int hw_value; } ;
struct TYPE_8__ {int hw_value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 struct wcn36xx_sta* FUNC_4 (struct ieee80211_sta*) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sta *VAR_4,
      enum nl80211_band VAR_5)
{
 int VAR_6, VAR_7;
 u16 *VAR_8;
 struct wcn36xx_sta *VAR_9 = FUNC_4(VAR_4);
 u32 VAR_10 = VAR_4->supp_rates[VAR_5];

 FUNC_3(&VAR_9->supported_rates, 0,
  sizeof(VAR_9->supported_rates));
 VAR_9->supported_rates.op_rate_mode = VAR_1;

 VAR_7 = FUNC_0(VAR_9->supported_rates.dsss_rates);
 VAR_8 = VAR_9->supported_rates.dsss_rates;
 if (VAR_5 == VAR_0) {
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_10 & 0x01) {
    VAR_8[VAR_6] = VAR_2[VAR_6].hw_value;
    VAR_10 = VAR_10 >> 1;
   }
  }
 }

 VAR_7 = FUNC_0(VAR_9->supported_rates.ofdm_rates);
 VAR_8 = VAR_9->supported_rates.ofdm_rates;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_10 & 0x01) {
   VAR_8[VAR_6] = VAR_3[VAR_6].hw_value;
   VAR_10 = VAR_10 >> 1;
  }
 }

 if (VAR_4->ht_cap.ht_supported) {
  FUNC_1(sizeof(VAR_4->ht_cap.mcs.rx_mask) >
   sizeof(VAR_9->supported_rates.supported_mcs_set));
  FUNC_2(VAR_9->supported_rates.supported_mcs_set,
         VAR_4->ht_cap.mcs.rx_mask,
         sizeof(VAR_4->ht_cap.mcs.rx_mask));
 }
}
