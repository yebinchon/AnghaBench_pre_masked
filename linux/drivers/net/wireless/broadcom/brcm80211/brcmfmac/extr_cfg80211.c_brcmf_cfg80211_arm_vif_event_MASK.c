
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_vif_event {int vif_event_lock; scalar_t__ action; struct brcmf_cfg80211_vif* vif; } ;
struct brcmf_cfg80211_vif {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_cfg80211_vif_event vif_event; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct brcmf_cfg80211_info *VAR_0,
      struct brcmf_cfg80211_vif *VAR_1)
{
 struct brcmf_cfg80211_vif_event *VAR_2 = &VAR_0->vif_event;

 FUNC_0(&VAR_2->vif_event_lock);
 VAR_2->vif = VAR_1;
 VAR_2->action = 0;
 FUNC_1(&VAR_2->vif_event_lock);
}
