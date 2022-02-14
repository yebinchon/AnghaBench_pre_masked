
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct wireless_dev {int address; } ;
struct wiphy {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct TYPE_7__ {int act_frm_scan; int afx_work; } ;
struct brcmf_p2p_info {int wait_next_af; TYPE_2__ afx_hdl; int send_af_done; int dev_addr; TYPE_1__* bss_idx; TYPE_3__* cfg; } ;
struct brcmf_if {scalar_t__ bsscfgidx; int * mac_addr; } ;
struct brcmf_cfg80211_vif {struct wireless_dev wdev; struct brcmf_if* ifp; } ;
struct TYPE_8__ {struct brcmf_pub* pub; } ;
struct TYPE_6__ {struct brcmf_cfg80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wireless_dev* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct brcmf_cfg80211_vif*) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct brcmf_pub*,char*) ;
 struct brcmf_cfg80211_vif* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,struct brcmf_cfg80211_vif*) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (struct brcmf_if*,char*,scalar_t__*) ;
 int FUNC_9 (struct brcmf_if*,char*,int) ;
 int FUNC_10 (struct brcmf_cfg80211_vif*) ;
 int FUNC_11 (struct brcmf_if*,int) ;
 int VAR_9 ;
 int FUNC_12 (struct brcmf_p2p_info*,int *) ;
 int FUNC_13 (struct brcmf_if*,int ) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int) ;

__attribute__((used)) static struct wireless_dev *FUNC_17(struct brcmf_p2p_info *VAR_10,
          struct wiphy *VAR_11,
          u8 *VAR_12)
{
 struct brcmf_pub *VAR_13 = VAR_10->cfg->pub;
 struct brcmf_cfg80211_vif *VAR_14;
 struct brcmf_if *VAR_15;
 struct brcmf_if *VAR_16;
 int VAR_17;
 u32 VAR_18;

 if (VAR_10->bss_idx[VAR_7].vif)
  return FUNC_0(-VAR_4);

 VAR_14 = FUNC_5(VAR_10->cfg, VAR_6);
 if (FUNC_2(VAR_14)) {
  FUNC_4(VAR_13, "could not create discovery vif\n");
  return (struct wireless_dev *)VAR_14;
 }

 VAR_16 = VAR_10->bss_idx[VAR_8].vif->ifp;


 if (VAR_12 && FUNC_14(VAR_12, VAR_16->mac_addr)) {
  FUNC_4(VAR_13, "discovery vif must be different from primary interface\n");
  return FUNC_0(-VAR_2);
 }

 FUNC_12(VAR_10, VAR_12);
 FUNC_13(VAR_16, VAR_10->dev_addr);

 FUNC_6(VAR_10->cfg, VAR_14);
 FUNC_11(VAR_16, 1);


 VAR_17 = FUNC_9(VAR_16, "p2p_disc", 1);
 if (VAR_17 < 0) {
  FUNC_4(VAR_13, "set p2p_disc error\n");
  FUNC_11(VAR_16, 0);
  FUNC_6(VAR_10->cfg, ((void*)0));
  goto fail;
 }


 VAR_17 = FUNC_7(VAR_10->cfg, VAR_0,
         VAR_1);
 FUNC_6(VAR_10->cfg, ((void*)0));
 FUNC_11(VAR_16, 0);
 if (!VAR_17) {
  FUNC_4(VAR_13, "timeout occurred\n");
  VAR_17 = -VAR_3;
  goto fail;
 }


 VAR_15 = VAR_14->ifp;
 VAR_10->bss_idx[VAR_7].vif = VAR_14;
 FUNC_16(VAR_15->mac_addr, VAR_10->dev_addr, VAR_5);
 FUNC_16(&VAR_14->wdev.address, VAR_10->dev_addr, sizeof(VAR_10->dev_addr));


 VAR_17 = FUNC_8(VAR_16, "p2p_dev", &VAR_18);
 if (VAR_17 < 0) {
  FUNC_4(VAR_13, "retrieving discover bsscfg index failed\n");
  goto fail;
 }

 FUNC_3(VAR_15->bsscfgidx != VAR_18);

 FUNC_15(&VAR_10->send_af_done);
 FUNC_1(&VAR_10->afx_hdl.afx_work, VAR_9);
 FUNC_15(&VAR_10->afx_hdl.act_frm_scan);
 FUNC_15(&VAR_10->wait_next_af);

 return &VAR_14->wdev;

fail:
 FUNC_10(VAR_14);
 return FUNC_0(VAR_17);
}
