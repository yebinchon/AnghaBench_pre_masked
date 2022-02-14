
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcmf_if_event {int action; int bsscfgidx; int ifidx; int flags; } ;
struct brcmf_if {TYPE_3__* ndev; struct brcmf_cfg80211_vif* vif; TYPE_1__* drvr; } ;
struct brcmf_event_msg {int dummy; } ;
struct brcmf_cfg80211_vif_event {int action; int vif_event_lock; int vif_wq; struct brcmf_cfg80211_vif* vif; } ;
struct TYPE_5__ {TYPE_3__* netdev; } ;
struct brcmf_cfg80211_vif {TYPE_2__ wdev; struct brcmf_if* ifp; } ;
struct brcmf_cfg80211_info {int wiphy; struct brcmf_cfg80211_vif_event vif_event; } ;
typedef int s32 ;
struct TYPE_6__ {TYPE_2__* ieee80211_ptr; } ;
struct TYPE_4__ {struct brcmf_cfg80211_info* config; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct brcmf_cfg80211_info*) ;
 int FUNC_2 (int ,char*,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static s32 FUNC_7(struct brcmf_if *VAR_3,
      const struct brcmf_event_msg *VAR_4, void *VAR_5)
{
 struct brcmf_cfg80211_info *VAR_6 = VAR_3->drvr->config;
 struct brcmf_if_event *VAR_7 = (struct brcmf_if_event *)VAR_5;
 struct brcmf_cfg80211_vif_event *VAR_8 = &VAR_6->vif_event;
 struct brcmf_cfg80211_vif *VAR_9;

 FUNC_2(VAR_2, "Enter: action %u flags %u ifidx %u bsscfgidx %u\n",
    VAR_7->action, VAR_7->flags, VAR_7->ifidx,
    VAR_7->bsscfgidx);

 FUNC_3(&VAR_8->vif_event_lock);
 VAR_8->action = VAR_7->action;
 VAR_9 = VAR_8->vif;

 switch (VAR_7->action) {
 case 130:

  if (!VAR_6->vif_event.vif) {
   FUNC_4(&VAR_8->vif_event_lock);
   return -VAR_0;
  }

  VAR_3->vif = VAR_9;
  VAR_9->ifp = VAR_3;
  if (VAR_3->ndev) {
   VAR_9->wdev.netdev = VAR_3->ndev;
   VAR_3->ndev->ieee80211_ptr = &VAR_9->wdev;
   FUNC_0(VAR_3->ndev, FUNC_6(VAR_6->wiphy));
  }
  FUNC_4(&VAR_8->vif_event_lock);
  FUNC_5(&VAR_8->vif_wq);
  return 0;

 case 128:
  FUNC_4(&VAR_8->vif_event_lock);

  if (FUNC_1(VAR_6))
   FUNC_5(&VAR_8->vif_wq);
  return 0;

 case 129:
  FUNC_4(&VAR_8->vif_event_lock);
  FUNC_5(&VAR_8->vif_wq);
  return 0;

 default:
  FUNC_4(&VAR_8->vif_event_lock);
  break;
 }
 return -VAR_1;
}
