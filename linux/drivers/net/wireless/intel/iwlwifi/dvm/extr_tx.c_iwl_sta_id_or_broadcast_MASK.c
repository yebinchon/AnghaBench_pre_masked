
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {int bcast_sta_id; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sta*) ;

__attribute__((used)) static int FUNC_2(struct iwl_rxon_context *VAR_1,
       struct ieee80211_sta *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return VAR_1->bcast_sta_id;

 VAR_3 = FUNC_1(VAR_2);





 FUNC_0(VAR_3 == VAR_0);

 return VAR_3;
}
