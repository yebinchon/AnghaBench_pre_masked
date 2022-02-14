
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct afx_hdl {scalar_t__ my_listen_chan; int peer_chan; scalar_t__ peer_listen_chan; int tx_dst_addr; } ;
struct brcmf_p2p_info {scalar_t__ next_af_subtype; int gon_req_action; scalar_t__ af_sent_channel; int block_gon_req_tx; int status; int wait_next_af; scalar_t__ af_tx_sent_jiffies; struct afx_hdl afx_hdl; TYPE_3__* bss_idx; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_fil_action_frame_le {scalar_t__* data; int da; int len; } ;
struct brcmf_fil_af_params_le {void* dwell_time; void* channel; struct brcmf_fil_action_frame_le action_frame; } ;
struct brcmf_config_af_params {int mpc_onoff; int search_channel; int extra_listen; } ;
struct brcmf_cfg80211_info {int scan_status; struct brcmf_pub* pub; struct brcmf_p2p_info p2p; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {TYPE_2__* vif; } ;
struct TYPE_4__ {scalar_t__ probe_req_ie_len; } ;
struct TYPE_5__ {TYPE_1__ saved_ie; int sme_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (struct brcmf_pub*,char*,...) ;
 int FUNC_2 (struct brcmf_cfg80211_info*) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct brcmf_cfg80211_info*,struct brcmf_if*,int,int) ;
 scalar_t__ FUNC_5 (struct brcmf_p2p_info*) ;
 int FUNC_6 (struct brcmf_p2p_info*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (scalar_t__*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__*,int ) ;
 int FUNC_10 (int,scalar_t__*,int ) ;
 scalar_t__ FUNC_11 (struct brcmf_cfg80211_info*,struct brcmf_fil_af_params_le*,struct brcmf_config_af_params*) ;
 int FUNC_12 (struct brcmf_p2p_info*,struct brcmf_fil_af_params_le*) ;
 int FUNC_13 (struct brcmf_if*,int) ;
 int FUNC_14 (int ,int *) ;
 void* FUNC_15 (int ) ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (void*) ;
 int FUNC_19 (int ,int ,int ) ;
 unsigned long FUNC_20 (scalar_t__) ;
 int FUNC_21 (int) ;
 struct brcmf_if* FUNC_22 (struct net_device*) ;
 int FUNC_23 (int ,int *) ;
 scalar_t__ FUNC_24 (int ,int *) ;
 int FUNC_25 (int *,unsigned long) ;

bool FUNC_26(struct brcmf_cfg80211_info *VAR_23,
     struct net_device *VAR_24,
     struct brcmf_fil_af_params_le *VAR_25)
{
 struct brcmf_p2p_info *VAR_26 = &VAR_23->p2p;
 struct brcmf_if *VAR_27 = FUNC_22(VAR_24);
 struct brcmf_fil_action_frame_le *VAR_28;
 struct brcmf_config_af_params VAR_29;
 struct afx_hdl *VAR_30 = &VAR_26->afx_hdl;
 struct brcmf_pub *VAR_31 = VAR_23->pub;
 u16 VAR_32;
 bool VAR_33 = 0;
 u8 VAR_34;
 u8 VAR_35;
 s32 VAR_36;
 s32 VAR_37;
 uint VAR_38;

 VAR_28 = &VAR_25->action_frame;
 VAR_32 = FUNC_17(VAR_28->len);

 FUNC_10(1, VAR_28->data, VAR_32);




 VAR_25->dwell_time = FUNC_15(VAR_16);

 VAR_34 = VAR_28->data[VAR_7];
 VAR_35 = VAR_28->data[VAR_6];


 VAR_26->next_af_subtype = VAR_21;
 VAR_26->gon_req_action = 0;


 VAR_29.mpc_onoff = -1;
 VAR_29.search_channel = 0;
 VAR_29.extra_listen = 0;

 if (FUNC_9(VAR_28->data, VAR_32)) {

  if (FUNC_11(VAR_23, VAR_25, &VAR_29)) {


   FUNC_1(VAR_31, "P2P Public action frame, unknown subtype.\n");
  }
 } else if (FUNC_7(VAR_28->data,
        VAR_32)) {

  if (VAR_35 == VAR_14 ||
      VAR_35 == VAR_12) {

   VAR_29.search_channel = 1;



   VAR_26->next_af_subtype = VAR_35 + 1;

   VAR_25->dwell_time =
    FUNC_15(VAR_17);
  } else if (VAR_35 == VAR_15 ||
      VAR_35 == VAR_13) {

   VAR_25->dwell_time =
    FUNC_15(VAR_18);
  } else {
   FUNC_1(VAR_31, "Unknown action type: %d\n", VAR_35);
   goto exit;
  }
 } else if (FUNC_8(VAR_28->data,
        VAR_32)) {


 } else {
  FUNC_1(VAR_31, "Unknown Frame: category 0x%x, action 0x%x\n",
    VAR_34, VAR_35);
  return 0;
 }




 if (FUNC_24(VAR_5,
       &VAR_26->bss_idx[VAR_11].vif->sme_state))
  FUNC_21(50);


 if (FUNC_24(VAR_4, &VAR_23->scan_status))
  FUNC_2(VAR_23);

 FUNC_19(VAR_30->tx_dst_addr, VAR_28->da, VAR_8);


 if (VAR_29.mpc_onoff == 0)
  FUNC_13(VAR_27, 0);


 if (VAR_26->next_af_subtype != VAR_21) {

  FUNC_23(VAR_2, &VAR_26->status);
 }

 VAR_26->af_sent_channel = 0;
 FUNC_23(VAR_1, &VAR_26->status);

 if (VAR_29.search_channel &&
     FUNC_0(FUNC_18(VAR_25->channel)) &&
     VAR_26->bss_idx[VAR_10].vif->saved_ie.probe_req_ie_len) {
  VAR_30 = &VAR_26->afx_hdl;
  VAR_30->peer_listen_chan = FUNC_18(VAR_25->channel);

  if (FUNC_5(VAR_26) ==
       VAR_20) {
   FUNC_1(VAR_31, "Couldn't find peer's channel.\n");
   goto exit;
  }






  FUNC_4(VAR_23, VAR_27, 1, 1);


  VAR_25->channel = FUNC_15(VAR_30->peer_chan);
 }

 VAR_36 = 0;
 while (!VAR_26->block_gon_req_tx &&
        (VAR_33 == 0) && (VAR_36 < VAR_19)) {
  VAR_33 = !FUNC_12(VAR_26, VAR_25);
  VAR_36++;
 }
 if (VAR_33 == 0) {
  FUNC_1(VAR_31, "Failed to send Action Frame(retry %d)\n",
    VAR_36);
  FUNC_14(VAR_0, &VAR_26->status);
 }

exit:
 FUNC_14(VAR_1, &VAR_26->status);






 if (VAR_33 && VAR_29.extra_listen && !VAR_26->block_gon_req_tx &&
     FUNC_24(VAR_2, &VAR_26->status) &&
     VAR_26->af_sent_channel == VAR_30->my_listen_chan) {
  VAR_38 = FUNC_16(VAR_22 - VAR_26->af_tx_sent_jiffies);
  if (FUNC_18(VAR_25->dwell_time) > VAR_38)
   VAR_37 = FUNC_18(VAR_25->dwell_time) -
         VAR_38;
  else
   VAR_37 = 0;
  if (VAR_37 > 50) {
   FUNC_23(VAR_3,
    &VAR_26->status);
   FUNC_3(VAR_9, "Wait more time! actual af time:%d, calculated extra listen:%d\n",
      FUNC_18(VAR_25->dwell_time),
      VAR_37);
   VAR_37 += 100;
   if (!FUNC_6(VAR_26,
             VAR_26->af_sent_channel,
             VAR_37)) {
    unsigned long VAR_39;

    VAR_37 += 100;
    VAR_39 = FUNC_20(VAR_37);
    FUNC_25(&VAR_26->wait_next_af,
           VAR_39);
   }
   FUNC_14(VAR_3,
      &VAR_26->status);
  }
 }

 if (VAR_26->block_gon_req_tx) {



  VAR_26->block_gon_req_tx = 0;
  VAR_33 = 1;
 }

 FUNC_14(VAR_2, &VAR_26->status);

 if (VAR_29.mpc_onoff == 1)
  FUNC_13(VAR_27, 1);

 return VAR_33;
}
