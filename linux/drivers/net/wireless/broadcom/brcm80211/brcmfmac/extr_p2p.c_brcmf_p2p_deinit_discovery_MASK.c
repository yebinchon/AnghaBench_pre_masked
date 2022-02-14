
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_p2p_info {TYPE_1__* bss_idx; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
typedef int s32 ;
struct TYPE_2__ {struct brcmf_cfg80211_vif* vif; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct brcmf_p2p_info *VAR_4)
{
 struct brcmf_cfg80211_vif *VAR_5;

 FUNC_0(VAR_2, "enter\n");


 VAR_5 = VAR_4->bss_idx[VAR_0].vif;
 (void)FUNC_2(VAR_5->ifp, VAR_3, 0, 0);


 VAR_5 = VAR_4->bss_idx[VAR_1].vif;
 (void)FUNC_1(VAR_5->ifp, "p2p_disc", 0);

 return 0;
}
