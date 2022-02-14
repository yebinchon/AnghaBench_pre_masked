
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wl1271 {size_t hw_tx_rate_tbl_size; size_t** band_rate_to_idx; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,size_t) ;

u8 FUNC_3(struct wl1271 *VAR_1, u8 VAR_2, enum nl80211_band VAR_3)
{
 u8 VAR_4;

 FUNC_0(VAR_3 >= 2);

 if (FUNC_1(VAR_2 >= VAR_1->hw_tx_rate_tbl_size)) {
  FUNC_2("Illegal RX rate from HW: %d", VAR_2);
  return 0;
 }

 VAR_4 = VAR_1->band_rate_to_idx[VAR_3][VAR_2];
 if (FUNC_1(VAR_4 == VAR_0)) {
  FUNC_2("Unsupported RX rate from HW: %d", VAR_2);
  return 0;
 }

 return VAR_4;
}
