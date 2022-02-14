
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_p2p_info {TYPE_1__* bss_idx; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
struct TYPE_2__ {struct brcmf_cfg80211_vif* vif; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcmf_p2p_info*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct brcmf_p2p_info*,int ,int) ;

void FUNC_4(struct brcmf_p2p_info *VAR_1)
{
 struct brcmf_cfg80211_vif *VAR_2;

 VAR_2 = VAR_1->bss_idx[VAR_0].vif;
 if (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_2->ifp);
  FUNC_1(VAR_1);
  FUNC_2(VAR_2->ifp, 0);
 }

 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
}
