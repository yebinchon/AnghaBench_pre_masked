
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_p2p_info {int remain_on_channel; int remain_on_channel_cookie; int wait_next_af; int status; } ;
struct brcmf_if {TYPE_1__* vif; TYPE_2__* drvr; } ;
struct brcmf_event_msg {int dummy; } ;
struct brcmf_cfg80211_info {struct brcmf_p2p_info p2p; } ;
struct TYPE_4__ {struct brcmf_cfg80211_info* config; } ;
struct TYPE_3__ {int wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct brcmf_if *VAR_6,
         const struct brcmf_event_msg *VAR_7,
         void *VAR_8)
{
 struct brcmf_cfg80211_info *VAR_9 = VAR_6->drvr->config;
 struct brcmf_p2p_info *VAR_10 = &VAR_9->p2p;

 FUNC_0(VAR_5, "Enter\n");
 if (FUNC_4(VAR_0,
          &VAR_10->status)) {
  if (FUNC_4(VAR_2,
           &VAR_10->status)) {
   FUNC_2(VAR_1,
      &VAR_10->status);
   FUNC_0(VAR_4, "Listen DONE, wake up wait_next_af\n");
   FUNC_3(&VAR_10->wait_next_af);
  }

  FUNC_1(&VAR_6->vif->wdev,
         VAR_10->remain_on_channel_cookie,
         &VAR_10->remain_on_channel,
         VAR_3);
 }
 return 0;
}
