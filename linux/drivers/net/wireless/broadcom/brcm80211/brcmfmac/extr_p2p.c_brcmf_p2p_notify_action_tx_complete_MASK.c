
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_p2p_info {int send_af_done; int status; int wait_for_offchan_complete; } ;
struct brcmf_if {TYPE_1__* drvr; } ;
struct brcmf_event_msg {scalar_t__ event_code; scalar_t__ status; } ;
struct brcmf_cfg80211_info {struct brcmf_p2p_info p2p; } ;
struct TYPE_2__ {struct brcmf_cfg80211_info* config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,char*,scalar_t__) ;
 int FUNC_1 (struct brcmf_cfg80211_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct brcmf_if *VAR_7,
     const struct brcmf_event_msg *VAR_8,
     void *VAR_9)
{
 struct brcmf_cfg80211_info *VAR_10 = VAR_7->drvr->config;
 struct brcmf_p2p_info *VAR_11 = &VAR_10->p2p;

 FUNC_0(VAR_6, "Enter: event %s, status=%d\n",
    VAR_8->event_code == VAR_1 ?
    "ACTION_FRAME_OFF_CHAN_COMPLETE" : "ACTION_FRAME_COMPLETE",
    VAR_8->status);

 if (!FUNC_4(VAR_5, &VAR_11->status))
  return 0;

 if (VAR_8->event_code == VAR_0) {
  if (VAR_8->status == VAR_2) {
   FUNC_3(VAR_3,
    &VAR_11->status);
   if (!VAR_11->wait_for_offchan_complete)
    FUNC_2(&VAR_11->send_af_done);
  } else {
   FUNC_3(VAR_4, &VAR_11->status);



   FUNC_1(VAR_10);
  }

 } else {
  FUNC_2(&VAR_11->send_af_done);
 }
 return 0;
}
