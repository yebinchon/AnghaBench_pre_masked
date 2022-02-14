
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ PortOffset; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {int beacon_int; } ;


 int FUNC_0 (struct vnt_private*,int ) ;
 int FUNC_1 (struct vnt_private*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct vnt_private*,struct ieee80211_vif*) ;

int FUNC_4(struct vnt_private *VAR_3, struct ieee80211_vif *VAR_4,
        struct ieee80211_bss_conf *VAR_5)
{
 FUNC_2(VAR_3->PortOffset + VAR_0, VAR_2);

 FUNC_2(VAR_3->PortOffset + VAR_0, VAR_1);

 FUNC_1(VAR_3, VAR_5->beacon_int);

 FUNC_0(VAR_3, VAR_5->beacon_int);

 return FUNC_3(VAR_3, VAR_4);
}
