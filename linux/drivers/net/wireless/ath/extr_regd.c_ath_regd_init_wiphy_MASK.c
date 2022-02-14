
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {void (* reg_notifier ) (struct wiphy*,struct regulatory_request*) ;int regulatory_flags; } ;
struct ieee80211_regdomain {int dummy; } ;
struct ath_regulatory {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_regdomain* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct ath_regulatory*) ;
 int FUNC_2 (struct wiphy*,struct ath_regulatory*) ;
 int FUNC_3 (struct wiphy*,int ,struct ath_regulatory*) ;
 struct ieee80211_regdomain* FUNC_4 (struct ath_regulatory*) ;
 int FUNC_5 (struct wiphy*,struct ieee80211_regdomain const*) ;

__attribute__((used)) static int
FUNC_6(struct ath_regulatory *VAR_4,
      struct wiphy *VAR_5,
      void (*VAR_6)(struct wiphy *VAR_7,
      struct regulatory_request *VAR_8))
{
 const struct ieee80211_regdomain *VAR_9;

 VAR_5->reg_notifier = VAR_6;
 VAR_5->regulatory_flags |= VAR_3 |
       VAR_2;

 if (FUNC_1(VAR_4)) {




  VAR_9 = FUNC_4(VAR_4);
  VAR_5->regulatory_flags |= VAR_1;
 } else {





  VAR_9 = FUNC_0();
 }

 FUNC_5(VAR_5, VAR_9);
 FUNC_2(VAR_5, VAR_4);
 FUNC_3(VAR_5, VAR_0, VAR_4);
 return 0;
}
