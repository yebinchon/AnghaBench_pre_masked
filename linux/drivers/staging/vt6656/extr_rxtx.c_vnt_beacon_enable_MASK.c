
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {int beacon_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnt_private*,struct ieee80211_vif*) ;
 int FUNC_1 (struct vnt_private*) ;
 int FUNC_2 (struct vnt_private*,int ,int ) ;
 int FUNC_3 (struct vnt_private*,int ,int ) ;
 int FUNC_4 (struct vnt_private*,int ) ;
 int FUNC_5 (struct vnt_private*,int ) ;

int FUNC_6(struct vnt_private *VAR_4, struct ieee80211_vif *VAR_5,
        struct ieee80211_bss_conf *VAR_6)
{
 FUNC_2(VAR_4, VAR_0, VAR_2);

 FUNC_2(VAR_4, VAR_1, VAR_3);

 FUNC_4(VAR_4, VAR_6->beacon_int);

 FUNC_1(VAR_4);

 FUNC_3(VAR_4, VAR_1, VAR_3);

 FUNC_5(VAR_4, VAR_6->beacon_int);

 return FUNC_0(VAR_4, VAR_5);
}
