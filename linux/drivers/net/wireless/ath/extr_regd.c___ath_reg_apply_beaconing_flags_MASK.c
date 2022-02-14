
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_channel {int flags; int beacon_found; int center_freq; } ;
struct ath_regulatory {int dummy; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct wiphy*,struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (int ,struct ath_regulatory*) ;
 int FUNC_2 (struct ath_regulatory*) ;

__attribute__((used)) static void
FUNC_3(struct wiphy *VAR_2,
    struct ath_regulatory *VAR_3,
    enum nl80211_reg_initiator VAR_4,
    struct ieee80211_channel *VAR_5)
{
 if (FUNC_1(VAR_5->center_freq, VAR_3) ||
     (VAR_5->flags & VAR_1))
  return;

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_2, VAR_5);
  break;
 case 128:
  if (FUNC_2(VAR_3))
   FUNC_0(VAR_2, VAR_5);
  break;
 default:
  if (VAR_5->beacon_found)
   VAR_5->flags &= ~VAR_0;
 }
}
