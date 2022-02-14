
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct station_parameters {scalar_t__ supported_rates_len; int sta_flags_set; int sta_flags_mask; scalar_t__ ht_capa; scalar_t__* supported_rates; int aid; } ;
struct ieee80211_ht_cap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,scalar_t__*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_1, const u8 *VAR_2,
        struct station_parameters *VAR_3)
{
 FUNC_0(VAR_1, VAR_2);
 VAR_1 += VAR_0;

 FUNC_2(VAR_3->aid, VAR_1);
 VAR_1 += 2;

 *VAR_1++ = VAR_3->supported_rates_len;
 if (VAR_3->supported_rates_len > 0)
  FUNC_1(VAR_1, VAR_3->supported_rates,
         VAR_3->supported_rates_len);
 VAR_1 += VAR_3->supported_rates_len;

 if (VAR_3->ht_capa) {
  *VAR_1++ = 1;
  FUNC_1(VAR_1, &VAR_3->ht_capa,
         sizeof(struct ieee80211_ht_cap));
 } else {
  *VAR_1++ = 0;
 }
 VAR_1 += sizeof(struct ieee80211_ht_cap);

 FUNC_2(VAR_3->sta_flags_mask, VAR_1);
 VAR_1 += 2;
 FUNC_2(VAR_3->sta_flags_set, VAR_1);
}
