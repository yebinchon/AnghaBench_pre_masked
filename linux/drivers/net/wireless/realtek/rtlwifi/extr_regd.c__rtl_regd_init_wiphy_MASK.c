
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {void (* reg_notifier ) (struct wiphy*,struct regulatory_request*) ;int regulatory_flags; } ;
struct rtl_regulatory {int dummy; } ;
struct ieee80211_regdomain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wiphy*) ;
 int FUNC_1 (struct wiphy*,int ,struct rtl_regulatory*) ;
 struct ieee80211_regdomain* FUNC_2 (struct rtl_regulatory*) ;
 int FUNC_3 (struct wiphy*,struct ieee80211_regdomain const*) ;

__attribute__((used)) static int FUNC_4(struct rtl_regulatory *VAR_4,
    struct wiphy *VAR_5,
    void (*VAR_6)(struct wiphy *VAR_7,
           struct regulatory_request *
           VAR_8))
{
 const struct ieee80211_regdomain *VAR_9;

 VAR_5->reg_notifier = VAR_6;

 VAR_5->regulatory_flags |= VAR_1;
 VAR_5->regulatory_flags &= ~VAR_3;
 VAR_5->regulatory_flags &= ~VAR_2;
 VAR_9 = FUNC_2(VAR_4);
 FUNC_3(VAR_5, VAR_9);
 FUNC_0(VAR_5);
 FUNC_1(VAR_5, VAR_0, VAR_4);
 return 0;
}
