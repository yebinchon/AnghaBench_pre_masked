
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_vif_event {int vif_event_lock; int * vif; } ;
struct brcmf_cfg80211_info {struct brcmf_cfg80211_vif_event vif_event; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct brcmf_cfg80211_info *VAR_0)
{
 struct brcmf_cfg80211_vif_event *VAR_1 = &VAR_0->vif_event;
 bool VAR_2;

 FUNC_0(&VAR_1->vif_event_lock);
 VAR_2 = VAR_1->vif != ((void*)0);
 FUNC_1(&VAR_1->vif_event_lock);

 return VAR_2;
}
