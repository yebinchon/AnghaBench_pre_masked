
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcmf_pub {int dummy; } ;
struct TYPE_6__ {int center_freq; } ;
struct brcmf_p2p_info {scalar_t__ af_sent_channel; int wait_for_offchan_complete; int status; int send_af_done; TYPE_3__ remain_on_channel; int af_tx_sent_jiffies; TYPE_2__* bss_idx; TYPE_1__* cfg; } ;
struct brcmf_fil_af_params_le {int channel; } ;
struct brcmf_cfg80211_vif {int ifp; } ;
typedef int s32 ;
struct TYPE_5__ {struct brcmf_cfg80211_vif* vif; } ;
struct TYPE_4__ {struct brcmf_pub* pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,struct brcmf_fil_af_params_le*,int) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static s32 FUNC_9(struct brcmf_p2p_info *VAR_8,
         struct brcmf_fil_af_params_le *VAR_9)
{
 struct brcmf_pub *VAR_10 = VAR_8->cfg->pub;
 struct brcmf_cfg80211_vif *VAR_11;
 s32 VAR_12 = 0;
 s32 VAR_13 = 0;

 FUNC_1(VAR_6, "Enter\n");

 FUNC_6(&VAR_8->send_af_done);
 FUNC_3(VAR_0, &VAR_8->status);
 FUNC_3(VAR_1, &VAR_8->status);

 VAR_11 = VAR_8->bss_idx[VAR_4].vif;
 VAR_12 = FUNC_2(VAR_11->ifp, "actframe", VAR_9,
     sizeof(*VAR_9));
 if (VAR_12) {
  FUNC_0(VAR_10, " sending action frame has failed\n");
  goto exit;
 }

 VAR_8->af_sent_channel = FUNC_5(VAR_9->channel);
 VAR_8->af_tx_sent_jiffies = VAR_7;

 if (FUNC_7(VAR_2, &VAR_8->status) &&
     VAR_8->af_sent_channel ==
     FUNC_4(VAR_8->remain_on_channel.center_freq))
  VAR_8->wait_for_offchan_complete = 0;
 else
  VAR_8->wait_for_offchan_complete = 1;

 FUNC_1(VAR_6, "Waiting for %s tx completion event\n",
    (VAR_8->wait_for_offchan_complete) ?
     "off-channel" : "on-channel");

 VAR_13 = FUNC_8(&VAR_8->send_af_done,
           VAR_5);

 if (FUNC_7(VAR_0, &VAR_8->status)) {
  FUNC_1(VAR_6, "TX action frame operation is success\n");
 } else {
  VAR_12 = -VAR_3;
  FUNC_1(VAR_6, "TX action frame operation has failed\n");
 }

 FUNC_3(VAR_0, &VAR_8->status);
 FUNC_3(VAR_1, &VAR_8->status);

exit:
 return VAR_12;
}
