
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u8 ;
struct brcmf_cfg80211_vif_event {int vif_wq; } ;
struct brcmf_cfg80211_info {struct brcmf_cfg80211_vif_event vif_event; } ;


 int FUNC_0 (struct brcmf_cfg80211_vif_event*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct brcmf_cfg80211_info *VAR_0,
      u8 VAR_1, ulong VAR_2)
{
 struct brcmf_cfg80211_vif_event *VAR_3 = &VAR_0->vif_event;

 return FUNC_1(VAR_3->vif_wq,
      FUNC_0(VAR_3, VAR_1), VAR_2);
}
