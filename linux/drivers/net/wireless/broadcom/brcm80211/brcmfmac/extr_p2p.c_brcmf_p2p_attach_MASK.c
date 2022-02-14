
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {int dummy; } ;
struct brcmf_p2p_info {int p2pdev_dynamically; TYPE_1__* bss_idx; struct brcmf_cfg80211_info* cfg; } ;
struct brcmf_if {int vif; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; struct brcmf_p2p_info p2p; } ;
typedef int s32 ;
struct TYPE_2__ {int vif; } ;


 scalar_t__ FUNC_0 (void*) ;
 size_t VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct brcmf_pub*,char*) ;
 struct brcmf_if* FUNC_3 (struct brcmf_pub*,int ) ;
 void* FUNC_4 (struct brcmf_p2p_info*,int *,int *) ;

s32 FUNC_5(struct brcmf_cfg80211_info *VAR_1, bool VAR_2)
{
 struct brcmf_pub *VAR_3 = VAR_1->pub;
 struct brcmf_p2p_info *VAR_4;
 struct brcmf_if *VAR_5;
 s32 VAR_6 = 0;
 void *VAR_7;

 VAR_4 = &VAR_1->p2p;
 VAR_4->cfg = VAR_1;

 VAR_5 = FUNC_3(VAR_1->pub, 0);
 VAR_4->bss_idx[VAR_0].vif = VAR_5->vif;

 if (VAR_2) {
  VAR_7 = FUNC_4(VAR_4, ((void*)0), ((void*)0));
  if (FUNC_0(VAR_7)) {
   FUNC_2(VAR_3, "P2P device creation failed.\n");
   VAR_6 = FUNC_1(VAR_7);
  }
 } else {
  VAR_4->p2pdev_dynamically = 1;
 }
 return VAR_6;
}
