
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct brcmf_if {struct brcmf_cfg80211_vif* vif; } ;
struct brcmf_cfg80211_vif {int dummy; } ;


 int FUNC_0 (struct brcmf_cfg80211_vif*) ;
 struct brcmf_if* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct brcmf_cfg80211_vif *VAR_1;
 struct brcmf_if *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = VAR_2->vif;

 if (VAR_1)
  FUNC_0(VAR_1);
}
