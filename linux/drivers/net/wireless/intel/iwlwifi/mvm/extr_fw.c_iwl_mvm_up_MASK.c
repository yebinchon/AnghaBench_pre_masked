
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_26__ {int cur_state; } ;
struct TYPE_22__ {int sta_id; } ;
struct TYPE_23__ {TYPE_4__ peer; } ;
struct TYPE_20__ {int conf; } ;
struct TYPE_18__ {TYPE_2__ dump; } ;
struct iwl_mvm {int ext_clock_valid; int dev; int status; void* hb_scan_type; void* scan_type; TYPE_9__* fw; TYPE_8__ cooling_dev; int * phy_ctxts; TYPE_7__* hw; int last_quota_cmd; TYPE_5__ tdls_cs; int * fw_id_to_mac_id; TYPE_11__* trans; int phy_db; TYPE_13__ fwrt; int mutex; } ;
struct ieee80211_supported_band {struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_19__ {scalar_t__ dest_tlv; } ;
struct TYPE_27__ {int ucode_capa; TYPE_1__ dbg; } ;
struct TYPE_25__ {TYPE_6__* wiphy; } ;
struct TYPE_24__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_21__ {scalar_t__ device_family; } ;
struct TYPE_17__ {TYPE_3__* trans_cfg; } ;
struct TYPE_16__ {int init_dbg; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (TYPE_13__*,int ) ;
 int FUNC_11 (TYPE_13__*,int ) ;
 int FUNC_12 (TYPE_13__*) ;
 int FUNC_13 (struct iwl_mvm*) ;
 int FUNC_14 (struct iwl_mvm*) ;
 int FUNC_15 (struct iwl_mvm*) ;
 int FUNC_16 (struct iwl_mvm*,int ,int ) ;
 int FUNC_17 (struct iwl_mvm*) ;
 scalar_t__ FUNC_18 (struct iwl_mvm*) ;
 int FUNC_19 (struct iwl_mvm*) ;
 int FUNC_20 (struct iwl_mvm*) ;
 scalar_t__ FUNC_21 (struct iwl_mvm*) ;
 scalar_t__ FUNC_22 (struct iwl_mvm*) ;
 int FUNC_23 (struct iwl_mvm*) ;
 int FUNC_24 (struct iwl_mvm*) ;
 int FUNC_25 (struct iwl_mvm*,int *,struct cfg80211_chan_def*,int,int) ;
 int FUNC_26 (struct iwl_mvm*) ;
 int FUNC_27 (struct iwl_mvm*) ;
 int FUNC_28 (struct iwl_mvm*) ;
 int FUNC_29 (struct iwl_mvm*) ;
 int FUNC_30 (struct iwl_mvm*) ;
 int FUNC_31 (struct iwl_mvm*) ;
 int FUNC_32 (struct iwl_mvm*) ;
 int FUNC_33 (struct iwl_mvm*,int ) ;
 int FUNC_34 (struct iwl_mvm*) ;
 int FUNC_35 (struct iwl_mvm*,int *,int) ;
 int FUNC_36 (struct iwl_mvm*) ;
 int FUNC_37 (struct iwl_mvm*,int ) ;
 int FUNC_38 (struct iwl_mvm*) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (struct iwl_mvm*) ;
 int FUNC_41 (struct iwl_mvm*,int ) ;
 int FUNC_42 (TYPE_11__*) ;
 int FUNC_43 (TYPE_11__*) ;
 TYPE_10__ VAR_17 ;
 int FUNC_44 (int *) ;
 int FUNC_45 (int *,int,int) ;
 scalar_t__ FUNC_46 (int ,int *) ;

int FUNC_47(struct iwl_mvm *VAR_18)
{
 int VAR_19, VAR_20;
 struct ieee80211_channel *VAR_21;
 struct cfg80211_chan_def VAR_22;
 struct ieee80211_supported_band *VAR_23 = ((void*)0);

 FUNC_44(&VAR_18->mutex);

 VAR_19 = FUNC_43(VAR_18->trans);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_24(VAR_18);
 if (VAR_19) {
  FUNC_2(VAR_18, "Failed to start RT ucode: %d\n", VAR_19);
  if (VAR_19 != -VAR_1)
   FUNC_10(&VAR_18->fwrt,
       VAR_5);
  goto error;
 }

 FUNC_12(&VAR_18->fwrt);

 VAR_19 = FUNC_35(VAR_18, ((void*)0), 0);
 if (VAR_19)
  FUNC_2(VAR_18, "Failed to initialize Smart Fifo\n");

 if (!FUNC_42(VAR_18->trans)) {
  VAR_18->fwrt.dump.conf = VAR_3;

  if (VAR_18->fw->dbg.dest_tlv)
   VAR_18->fwrt.dump.conf = VAR_4;
  FUNC_11(&VAR_18->fwrt, VAR_4);
 }

 VAR_19 = FUNC_41(VAR_18, FUNC_17(VAR_18));
 if (VAR_19)
  goto error;

 if (!FUNC_19(VAR_18)) {

  VAR_19 = FUNC_39(VAR_18->phy_db);
  if (VAR_19)
   goto error;

  VAR_19 = FUNC_38(VAR_18);
  if (VAR_19)
   goto error;
 }

 VAR_19 = FUNC_31(VAR_18);
 if (VAR_19)
  goto error;


 if (VAR_18->trans->trans_cfg->device_family >= VAR_6) {
  VAR_19 = FUNC_9(VAR_18);
  if (VAR_19) {
   FUNC_2(VAR_18, "Failed to configure RX queues: %d\n",
    VAR_19);
   goto error;
  }
 }

 if (FUNC_18(VAR_18)) {
  VAR_19 = FUNC_40(VAR_18);
  if (VAR_19) {
   FUNC_2(VAR_18, "Failed to configure RSS queues: %d\n",
    VAR_19);
   goto error;
  }
 }


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_18->fw_id_to_mac_id); VAR_20++)
  FUNC_3(VAR_18->fw_id_to_mac_id[VAR_20], ((void*)0));

 VAR_18->tdls_cs.peer.sta_id = VAR_7;


 FUNC_45(&VAR_18->last_quota_cmd, 0xff, sizeof(VAR_18->last_quota_cmd));

 if (FUNC_7(&VAR_18->fw->ucode_capa, VAR_11)) {
  VAR_19 = FUNC_32(VAR_18);
  if (VAR_19)
   goto error;
 }


 VAR_19 = FUNC_13(VAR_18);
 if (VAR_19)
  goto error;


 VAR_20 = 0;
 while (!VAR_23 && VAR_20 < VAR_15)
  VAR_23 = VAR_18->hw->wiphy->bands[VAR_20++];

 if (FUNC_5(!VAR_23))
  goto error;

 VAR_21 = &VAR_23->channels[0];

 FUNC_6(&VAR_22, VAR_21, VAR_14);
 for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {





  VAR_19 = FUNC_25(VAR_18, &VAR_18->phy_ctxts[VAR_20],
        &VAR_22, 1, 1);
  if (VAR_19)
   goto error;
 }

 if (FUNC_22(VAR_18)) {




  FUNC_34(VAR_18);
 } else {

  FUNC_37(VAR_18, 0);
 }
 if (!FUNC_7(&VAR_18->fw->ucode_capa, VAR_12))
  FUNC_4(FUNC_14(VAR_18));

 VAR_19 = FUNC_26(VAR_18);
 if (VAR_19)
  goto error;





 if (!FUNC_46(VAR_8, &VAR_18->status)) {
  VAR_19 = FUNC_20(VAR_18);
  if (VAR_19)
   goto error;
 }

 if (FUNC_7(&VAR_18->fw->ucode_capa, VAR_13)) {
  VAR_18->scan_type = VAR_10;
  VAR_18->hb_scan_type = VAR_10;
  VAR_19 = FUNC_15(VAR_18);
  if (VAR_19)
   goto error;
 }

 if (FUNC_46(VAR_9, &VAR_18->status))
  FUNC_33(VAR_18, VAR_2);

 if (FUNC_8(VAR_18->dev, &VAR_18->ext_clock_valid))
  FUNC_1(VAR_18, "ECKV table doesn't exist in BIOS\n");

 VAR_19 = FUNC_27(VAR_18);
 if (VAR_19)
  goto error;

 VAR_19 = FUNC_30(VAR_18);
 if (VAR_19 == 0) {
  VAR_19 = FUNC_28(VAR_18);
 } else if (VAR_19 > 0 && !FUNC_29(VAR_18)) {






  FUNC_2(VAR_18, "BIOS contains WGDS but no WRDS\n");
 }

 if (VAR_19 < 0)
  goto error;

 FUNC_23(VAR_18);

 FUNC_1(VAR_18, "RT uCode started.\n");
 return 0;
 error:
 if (!VAR_17.init_dbg || !VAR_19)
  FUNC_36(VAR_18);
 return VAR_19;
}
