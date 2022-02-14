
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct brcmf_if {int ndev; TYPE_1__* vif; TYPE_2__* drvr; } ;
struct brcmf_event_msg {scalar_t__ event_code; scalar_t__ status; } ;
struct brcmf_cfg80211_info {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {struct brcmf_cfg80211_info* config; } ;
struct TYPE_3__ {int sme_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_cfg80211_info*,int ,struct brcmf_event_msg const*,int) ;
 int FUNC_1 (struct brcmf_cfg80211_info*,int ,struct brcmf_event_msg const*) ;
 int FUNC_2 (struct brcmf_if*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static s32
FUNC_4(struct brcmf_if *VAR_3,
       const struct brcmf_event_msg *VAR_4, void *VAR_5)
{
 struct brcmf_cfg80211_info *VAR_6 = VAR_3->drvr->config;
 u32 VAR_7 = VAR_4->event_code;
 u32 VAR_8 = VAR_4->status;

 if (VAR_7 == VAR_0 && VAR_8 == VAR_1) {
  if (FUNC_3(VAR_2,
        &VAR_3->vif->sme_state)) {
   FUNC_1(VAR_6, VAR_3->ndev, VAR_4);
  } else {
   FUNC_0(VAR_6, VAR_3->ndev, VAR_4, 1);
   FUNC_2(VAR_3, 1);
  }
 }

 return 0;
}
