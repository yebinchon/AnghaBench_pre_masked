
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_if {struct brcmf_cfg80211_vif* vif; } ;
struct brcmf_cfg80211_vif {int wdev; } ;
struct TYPE_4__ {TYPE_1__* bss_idx; } ;
struct brcmf_cfg80211_info {TYPE_2__ p2p; } ;
struct TYPE_3__ {int * vif; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_cfg80211_vif*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct brcmf_cfg80211_info* FUNC_5 (int *) ;

void FUNC_6(struct brcmf_if *VAR_2, bool VAR_3)
{
 struct brcmf_cfg80211_info *VAR_4;
 struct brcmf_cfg80211_vif *VAR_5;

 FUNC_0(VAR_0, "P2P: device interface removed\n");
 VAR_5 = VAR_2->vif;
 VAR_4 = FUNC_5(&VAR_5->wdev);
 VAR_4->p2p.bss_idx[VAR_1].vif = ((void*)0);
 if (!VAR_3)
  FUNC_3();
 FUNC_2(&VAR_5->wdev);
 if (!VAR_3)
  FUNC_4();
 FUNC_1(VAR_5);
}
