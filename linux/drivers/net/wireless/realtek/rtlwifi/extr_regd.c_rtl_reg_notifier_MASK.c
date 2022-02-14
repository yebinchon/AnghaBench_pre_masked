
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct rtl_priv {int regd; } ;
struct regulatory_request {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct wiphy*,struct regulatory_request*,int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_3 (struct wiphy*) ;

void FUNC_4(struct wiphy *VAR_2, struct regulatory_request *VAR_3)
{
 struct ieee80211_hw *VAR_4 = FUNC_3(VAR_2);
 struct rtl_priv *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_5, VAR_0, VAR_1, "\n");

 FUNC_1(VAR_2, VAR_3, &VAR_5->regd);
}
