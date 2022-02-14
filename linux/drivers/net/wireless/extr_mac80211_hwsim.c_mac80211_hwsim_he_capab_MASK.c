
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_supported_band {scalar_t__ band; int n_iftype_data; struct ieee80211_sband_iftype_data* iftype_data; } ;
struct ieee80211_sband_iftype_data {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_4)
{
 u16 VAR_5;

 if (VAR_4->band == VAR_0) {
  VAR_5 = FUNC_0(VAR_2);
  VAR_4->iftype_data =
   (struct ieee80211_sband_iftype_data *)VAR_2;
 } else if (VAR_4->band == VAR_1) {
  VAR_5 = FUNC_0(VAR_3);
  VAR_4->iftype_data =
   (struct ieee80211_sband_iftype_data *)VAR_3;
 } else {
  return;
 }

 VAR_4->n_iftype_data = VAR_5;
}
