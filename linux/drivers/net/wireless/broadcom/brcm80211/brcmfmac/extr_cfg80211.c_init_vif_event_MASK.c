
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_vif_event {int vif_event_lock; int vif_wq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct brcmf_cfg80211_vif_event *VAR_0)
{
 FUNC_0(&VAR_0->vif_wq);
 FUNC_1(&VAR_0->vif_event_lock);
}
