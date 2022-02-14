
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iftype; } ;
struct brcmf_cfg80211_vif {TYPE_1__ wdev; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct brcmf_cfg80211_vif *VAR_2)
{
 enum nl80211_iftype VAR_3;

 VAR_3 = VAR_2->wdev.iftype;
 return VAR_3 == VAR_0 || VAR_3 == VAR_1;
}
