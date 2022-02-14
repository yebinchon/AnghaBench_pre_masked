
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct brcmf_if {struct brcmf_cfg80211_vif* vif; } ;
struct brcmf_cfg80211_vif {int dummy; } ;


 struct brcmf_if* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline struct brcmf_cfg80211_vif *FUNC_1(struct net_device *VAR_0)
{
 struct brcmf_if *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->vif;
}
