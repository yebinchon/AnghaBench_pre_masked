
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct cfg80211_scan_request {int ie_len; int ie; } ;
struct TYPE_4__ {int my_listen_chan; } ;
struct brcmf_p2p_info {TYPE_2__* bss_idx; int status; TYPE_1__ afx_hdl; } ;
struct brcmf_cfg80211_vif {int dummy; } ;
struct TYPE_6__ {int run; } ;
struct brcmf_cfg80211_info {TYPE_3__ escan_info; struct brcmf_p2p_info p2p; } ;
struct TYPE_5__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_p2p_info*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct cfg80211_scan_request*) ;
 int FUNC_4 (int ,int *) ;
 struct brcmf_cfg80211_info* FUNC_5 (struct wiphy*) ;

int FUNC_6(struct wiphy *VAR_4,
   struct cfg80211_scan_request *VAR_5,
   struct brcmf_cfg80211_vif *VAR_6)
{
 struct brcmf_cfg80211_info *VAR_7 = FUNC_5(VAR_4);
 struct brcmf_p2p_info *VAR_8 = &VAR_7->p2p;
 int VAR_9;

 if (FUNC_3(VAR_5)) {

  VAR_9 = FUNC_2(VAR_5->ie,
          VAR_5->ie_len);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8->afx_hdl.my_listen_chan = VAR_9;

  FUNC_4(VAR_0, &VAR_8->status);
  FUNC_0(VAR_1, "P2P: GO_NEG_PHASE status cleared\n");

  VAR_9 = FUNC_1(VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_6 = VAR_8->bss_idx[VAR_2].vif;


  VAR_7->escan_info.run = VAR_3;
 }
 return 0;
}
