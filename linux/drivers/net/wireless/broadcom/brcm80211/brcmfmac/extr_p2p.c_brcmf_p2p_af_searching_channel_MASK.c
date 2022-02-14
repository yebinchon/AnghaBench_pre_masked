
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afx_hdl {int is_active; scalar_t__ peer_chan; int is_listen; scalar_t__ my_listen_chan; int act_frm_scan; int afx_work; } ;
struct brcmf_p2p_info {int status; TYPE_1__* bss_idx; struct afx_hdl afx_hdl; } ;
struct brcmf_cfg80211_vif {int sme_state; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static s32 FUNC_8(struct brcmf_p2p_info *VAR_9)
{
 struct afx_hdl *VAR_10 = &VAR_9->afx_hdl;
 struct brcmf_cfg80211_vif *VAR_11;
 s32 VAR_12;

 FUNC_0(VAR_8, "Enter\n");

 VAR_11 = VAR_9->bss_idx[VAR_3].vif;

 FUNC_3(&VAR_10->act_frm_scan);
 FUNC_5(VAR_0, &VAR_9->status);
 VAR_10->is_active = 1;
 VAR_10->peer_chan = VAR_7;




 VAR_12 = 0;
 while ((VAR_12 < VAR_5) &&
        (VAR_10->peer_chan == VAR_7)) {
  VAR_10->is_listen = 0;
  FUNC_0(VAR_8, "Scheduling action frame for sending.. (%d)\n",
     VAR_12);

  FUNC_4(&VAR_10->afx_work);
  FUNC_7(&VAR_10->act_frm_scan,
         VAR_4);
  if ((VAR_10->peer_chan != VAR_7) ||
      (!FUNC_6(VAR_0,
          &VAR_9->status)))
   break;

  if (VAR_10->my_listen_chan) {
   FUNC_0(VAR_8, "Scheduling listen peer, channel=%d\n",
      VAR_10->my_listen_chan);

   VAR_10->is_listen = 1;
   FUNC_4(&VAR_10->afx_work);
   FUNC_7(&VAR_10->act_frm_scan,
          VAR_4);
  }
  if ((VAR_10->peer_chan != VAR_7) ||
      (!FUNC_6(VAR_0,
          &VAR_9->status)))
   break;
  VAR_12++;




  if (FUNC_6(VAR_1, &VAR_11->sme_state) ||
      FUNC_6(VAR_2, &VAR_11->sme_state))
   FUNC_2(VAR_6);
 }

 FUNC_0(VAR_8, "Completed search/listen peer_chan=%d\n",
    VAR_10->peer_chan);
 VAR_10->is_active = 0;

 FUNC_1(VAR_0, &VAR_9->status);

 return VAR_10->peer_chan;
}
