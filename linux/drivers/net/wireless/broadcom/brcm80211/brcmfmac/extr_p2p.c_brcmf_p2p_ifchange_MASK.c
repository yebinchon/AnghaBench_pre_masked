
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_p2p_info {int int_addr; TYPE_1__* bss_idx; } ;
struct brcmf_fil_p2p_if_le {int addr; void* chspec; void* type; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
struct brcmf_cfg80211_info {struct brcmf_pub* pub; struct brcmf_p2p_info p2p; } ;
typedef int s32 ;
typedef int if_request ;
typedef enum brcmf_fil_p2p_if_types { ____Placeholder_brcmf_fil_p2p_if_types } brcmf_fil_p2p_if_types ;
struct TYPE_2__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct brcmf_pub*,char*,...) ;
 int FUNC_1 (struct brcmf_cfg80211_info*,struct brcmf_cfg80211_vif*) ;
 int FUNC_2 (struct brcmf_cfg80211_info*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,struct brcmf_fil_p2p_if_le*,int) ;
 int FUNC_6 (struct brcmf_cfg80211_info*,int ,int,int) ;
 int FUNC_7 (struct brcmf_p2p_info*,int *) ;
 int FUNC_8 (int ,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;

int FUNC_11(struct brcmf_cfg80211_info *VAR_9,
         enum brcmf_fil_p2p_if_types VAR_10)
{
 struct brcmf_p2p_info *VAR_11 = &VAR_9->p2p;
 struct brcmf_pub *VAR_12 = VAR_9->pub;
 struct brcmf_cfg80211_vif *VAR_13;
 struct brcmf_fil_p2p_if_le VAR_14;
 s32 VAR_15;
 u16 VAR_16;

 FUNC_3(VAR_8, "Enter\n");

 VAR_13 = VAR_11->bss_idx[VAR_7].vif;
 if (!VAR_13) {
  FUNC_0(VAR_12, "vif for P2PAPI_BSSCFG_PRIMARY does not exist\n");
  return -VAR_5;
 }
 FUNC_6(VAR_9, VAR_13->ifp, 1, 1);
 VAR_13 = VAR_11->bss_idx[VAR_6].vif;
 if (!VAR_13) {
  FUNC_0(VAR_12, "vif for P2PAPI_BSSCFG_CONNECTION does not exist\n");
  return -VAR_5;
 }
 FUNC_8(VAR_13->ifp, 0);




 FUNC_7(VAR_11, &VAR_16);

 VAR_14.type = FUNC_9((u16)VAR_10);
 VAR_14.chspec = FUNC_9(VAR_16);
 FUNC_10(VAR_14.addr, VAR_11->int_addr, sizeof(VAR_14.addr));

 FUNC_1(VAR_9, VAR_13);
 VAR_15 = FUNC_5(VAR_13->ifp, "p2p_ifupd", &VAR_14,
           sizeof(VAR_14));
 if (VAR_15) {
  FUNC_0(VAR_12, "p2p_ifupd FAILED, err=%d\n", VAR_15);
  FUNC_1(VAR_9, ((void*)0));
  return VAR_15;
 }
 VAR_15 = FUNC_2(VAR_9, VAR_1,
         VAR_3);
 FUNC_1(VAR_9, ((void*)0));
 if (!VAR_15) {
  FUNC_0(VAR_12, "No BRCMF_E_IF_CHANGE event received\n");
  return -VAR_4;
 }

 VAR_15 = FUNC_4(VAR_13->ifp, VAR_0,
        VAR_2);

 return VAR_15;
}
