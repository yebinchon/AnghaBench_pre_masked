
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tkip_sc {int dummy; } ;
struct ieee80211_key_seq {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_key_conf*,int,struct ieee80211_key_seq*) ;
 int FUNC_2 (struct tkip_sc*,struct ieee80211_key_seq*) ;

__attribute__((used)) static void FUNC_3(struct tkip_sc *VAR_2,
        struct ieee80211_key_conf *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1 != VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct ieee80211_key_seq VAR_5 = {};

  FUNC_2(&VAR_2[VAR_4], &VAR_5);
  FUNC_1(VAR_3, VAR_4, &VAR_5);
 }
}
