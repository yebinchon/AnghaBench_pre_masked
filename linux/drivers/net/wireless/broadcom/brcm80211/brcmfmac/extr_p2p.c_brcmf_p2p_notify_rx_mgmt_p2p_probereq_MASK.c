
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcmu_chan {scalar_t__ band; int chspec; int control_ch_num; } ;
struct brcmf_rx_mgmt_data {int chanspec; } ;
struct afx_hdl {int act_frm_scan; int peer_chan; int tx_dst_addr; } ;
struct brcmf_p2p_info {int status; struct afx_hdl afx_hdl; } ;
struct brcmf_if {struct brcmf_cfg80211_vif* vif; TYPE_1__* drvr; } ;
struct brcmf_event_msg {int datalen; scalar_t__ bsscfgidx; int addr; int reason; int event_code; } ;
struct brcmf_cfg80211_vif {int mgmt_rx_reg; int wdev; } ;
struct TYPE_4__ {int (* decchspec ) (struct brcmu_chan*) ;} ;
struct brcmf_cfg80211_info {TYPE_2__ d11inf; struct brcmf_p2p_info p2p; } ;
typedef int s32 ;
struct TYPE_3__ {struct brcmf_cfg80211_info* config; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,int ,int ,int *,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct brcmu_chan*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

s32 FUNC_9(struct brcmf_if *VAR_9,
       const struct brcmf_event_msg *VAR_10,
       void *VAR_11)
{
 struct brcmf_cfg80211_info *VAR_12 = VAR_9->drvr->config;
 struct brcmf_p2p_info *VAR_13 = &VAR_12->p2p;
 struct afx_hdl *VAR_14 = &VAR_13->afx_hdl;
 struct brcmf_cfg80211_vif *VAR_15 = VAR_9->vif;
 struct brcmf_rx_mgmt_data *VAR_16 = (struct brcmf_rx_mgmt_data *)VAR_11;
 struct brcmu_chan VAR_17;
 u8 *VAR_18;
 u32 VAR_19;
 s32 VAR_20;
 u16 VAR_21;

 FUNC_2(VAR_5, "Enter: event %d reason %d\n", VAR_10->event_code,
    VAR_10->reason);

 if (VAR_10->datalen < sizeof(*VAR_16)) {
  FUNC_2(VAR_8, "Event data to small. Ignore\n");
  return 0;
 }

 VAR_17.chspec = FUNC_1(VAR_16->chanspec);
 VAR_12->d11inf.decchspec(&VAR_17);

 if (FUNC_8(VAR_0, &VAR_13->status) &&
     (FUNC_5(VAR_14->tx_dst_addr, VAR_10->addr))) {
  VAR_14->peer_chan = VAR_17.control_ch_num;
  FUNC_2(VAR_5, "PROBE REQUEST: Peer found, channel=%d\n",
     VAR_14->peer_chan);
  FUNC_4(&VAR_14->act_frm_scan);
 }



 if (VAR_10->bsscfgidx == 0)
  return 0;


 if (FUNC_8(VAR_1, &VAR_13->status)) {
  FUNC_2(VAR_5, "Filtering P2P probe_req in GO-NEG phase\n");
  return 0;
 }


 FUNC_2(VAR_5, "vif->mgmt_rx_reg %04x\n", VAR_15->mgmt_rx_reg);
 VAR_21 = (VAR_4 & VAR_3) >> 4;
 if ((VAR_15->mgmt_rx_reg & FUNC_0(VAR_21)) == 0)
  return 0;

 VAR_18 = (u8 *)(VAR_16 + 1);
 VAR_19 = VAR_10->datalen - sizeof(*VAR_16);
 VAR_20 = FUNC_6(VAR_17.control_ch_num,
           VAR_17.band == VAR_2 ?
           VAR_6 :
           VAR_7);

 FUNC_3(&VAR_15->wdev, VAR_20, 0, VAR_18, VAR_19, 0);

 FUNC_2(VAR_5, "mgmt_frame_len (%d) , e->datalen (%d), chanspec (%04x), freq (%d)\n",
    VAR_19, VAR_10->datalen, VAR_17.chspec, VAR_20);

 return 0;
}
