
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef void* u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {int sequence; } ;
struct iwl_rx_packet {scalar_t__ data; TYPE_1__ hdr; } ;
struct iwl_mvm_tx_resp {int wireless_media_time; scalar_t__ failure_frame; int initial_rate; int reduced_tpc; int tlc_info; int seq_ctl; int tx_queue; int ra_tid; } ;
struct iwl_mvm_tid_data {void* next_reclaimed; } ;
struct iwl_mvm_sta {scalar_t__ sta_state; int next_status_eosp; scalar_t__ sleep_tx_count; int lock; struct iwl_mvm_tid_data* tid_data; int tx_ant; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int hw; int mgmt_last_antenna_idx; int trans; } ;
struct TYPE_6__ {void** status_driver_data; void* tx_time; TYPE_2__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ status; int * driver_data; } ;
struct ieee80211_sta {scalar_t__ wme; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
struct agg_tx_status {int status; } ;
struct TYPE_5__ {scalar_t__ count; } ;


 int FUNC_0 (void**) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ieee80211_sta*) ;
 int FUNC_4 (struct iwl_mvm*,char*,...) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ) ;




 int VAR_7 ;

 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 struct sk_buff* FUNC_13 (struct sk_buff_head*) ;
 int FUNC_14 (struct sk_buff_head*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct ieee80211_sta*,int) ;
 int FUNC_19 (struct ieee80211_sta*) ;
 int FUNC_20 (int ,struct sk_buff*) ;
 int FUNC_21 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 struct agg_tx_status* FUNC_22 (struct iwl_mvm*,struct iwl_mvm_tx_resp*) ;
 void* FUNC_23 (struct iwl_mvm*,struct iwl_mvm_tx_resp*) ;
 int FUNC_24 (int) ;
 scalar_t__ FUNC_25 (struct iwl_mvm*) ;
 int FUNC_26 (scalar_t__,struct ieee80211_tx_info*) ;
 struct iwl_mvm_sta* FUNC_27 (struct ieee80211_sta*) ;
 int FUNC_28 (struct iwl_mvm*,struct ieee80211_sta*,int ,int,int,int,int) ;
 int FUNC_29 (struct iwl_mvm*,struct iwl_mvm_tid_data*) ;
 int FUNC_30 (struct iwl_mvm*,int *) ;
 int FUNC_31 (struct iwl_mvm*,struct iwl_mvm_sta*,void*) ;
 int FUNC_32 (struct iwl_mvm*,int) ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (int ,int,void*,struct sk_buff_head*) ;
 void* FUNC_35 (int ) ;
 scalar_t__ FUNC_36 (int ) ;
 int FUNC_37 (TYPE_3__*,int ,int) ;
 struct ieee80211_sta* FUNC_38 (int ) ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 (struct sk_buff_head*) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int *) ;
 scalar_t__ FUNC_44 (int) ;

__attribute__((used)) static void FUNC_45(struct iwl_mvm *VAR_8,
         struct iwl_rx_packet *VAR_9)
{
 struct ieee80211_sta *VAR_10;
 u16 VAR_11 = FUNC_35(VAR_9->hdr.sequence);
 int VAR_12 = FUNC_9(VAR_11);

 struct iwl_mvm_tx_resp *VAR_13 = (void *)VAR_9->data;
 int VAR_14 = FUNC_5(VAR_13->ra_tid);
 int VAR_15 = FUNC_6(VAR_13->ra_tid);
 struct agg_tx_status *VAR_16 =
  FUNC_22(VAR_8, VAR_13);
 u32 VAR_17 = FUNC_35(VAR_16->status);
 u16 VAR_18 = FUNC_23(VAR_8, VAR_13);
 struct sk_buff_head VAR_19;
 u8 VAR_20 = 0;
 u8 VAR_21;
 u16 VAR_22, VAR_23;
 bool VAR_24 = 0;

 FUNC_14(&VAR_19);

 if (FUNC_25(VAR_8))
  VAR_12 = FUNC_35(VAR_13->tx_queue);

 VAR_23 = FUNC_35(VAR_13->seq_ctl);


 FUNC_34(VAR_8->trans, VAR_12, VAR_18, &VAR_19);

 while (!FUNC_41(&VAR_19)) {
  struct sk_buff *VAR_25 = FUNC_13(&VAR_19);
  struct ieee80211_tx_info *VAR_26 = FUNC_2(VAR_25);
  struct ieee80211_hdr *VAR_27 = (void *)VAR_25->data;
  bool VAR_28 = 0;

  VAR_20++;

  FUNC_33(VAR_8->trans, VAR_26->driver_data[1]);

  FUNC_37(&VAR_26->status, 0, sizeof(VAR_26->status));


  switch (VAR_17 & VAR_7) {
  case 128:
  case 132:
   VAR_26->flags |= VAR_3;
   break;
  case 129:
  case 130:
   VAR_28 = 1;
   break;
  case 131:



   FUNC_11(1);
   VAR_26->flags |= VAR_5;
   break;
  default:
   break;
  }

  if ((VAR_17 & VAR_7) != 128 &&
      FUNC_16(VAR_27->frame_control))
   FUNC_30(VAR_8, &VAR_8->mgmt_last_antenna_idx);






  if (VAR_20 > 1)
   VAR_26->flags |= VAR_3;

  FUNC_32(VAR_8, VAR_17);

  VAR_26->status.rates[0].count = VAR_13->failure_frame + 1;
  FUNC_26(FUNC_36(VAR_13->initial_rate),
         VAR_26);
  VAR_26->status.status_driver_data[1] =
   (void *)(uintptr_t)FUNC_36(VAR_13->initial_rate);


  if (VAR_26->flags & VAR_2 &&
      !(VAR_26->flags & VAR_3) &&
      !(VAR_26->flags & VAR_5) && !VAR_28)
   VAR_26->flags |= VAR_4;
  VAR_26->flags &= ~VAR_2;


  if (FUNC_15(VAR_27->frame_control))
   VAR_23 = 0;
  else if (VAR_17 != 128)
   VAR_23 = FUNC_35(VAR_27->seq_ctrl);

  if (FUNC_44(!VAR_23)) {
   struct ieee80211_hdr *VAR_29 = (void *)VAR_25->data;
   if (FUNC_17(VAR_29->frame_control))
    VAR_24 = 1;
  }





  VAR_26->status.tx_time =
   FUNC_35(VAR_13->wireless_media_time);
  FUNC_1(FUNC_0(VAR_26->status.status_driver_data) < 1);
  VAR_21 = FUNC_10(VAR_13->tlc_info);
  VAR_26->status.status_driver_data[0] =
   FUNC_7(VAR_21, VAR_13->reduced_tpc);

  FUNC_20(VAR_8->hw, VAR_25);
 }
 VAR_22 = VAR_18;

 FUNC_4(VAR_8,
      "TXQ %d status %s (0x%08x)\n",
      VAR_12, FUNC_24(VAR_17), VAR_17);

 FUNC_4(VAR_8,
      "\t\t\t\tinitial_rate 0x%x retries %d, idx=%d ssn=%d next_reclaimed=0x%x seq_ctl=0x%x\n",
      FUNC_36(VAR_13->initial_rate),
      VAR_13->failure_frame, FUNC_8(VAR_11),
      VAR_18, VAR_22, VAR_23);

 FUNC_39();

 VAR_10 = FUNC_38(VAR_8->fw_id_to_mac_id[VAR_14]);




 if (FUNC_12(!VAR_10))
  goto out;

 if (!FUNC_3(VAR_10)) {
  struct iwl_mvm_sta *VAR_30 = FUNC_27(VAR_10);

  FUNC_31(VAR_8, VAR_30,
       FUNC_35(VAR_13->wireless_media_time));

  if ((VAR_17 & VAR_7) != 128 &&
      VAR_30->sta_state < VAR_1)
   FUNC_30(VAR_8, &VAR_30->tx_ant);

  if (VAR_10->wme && VAR_15 != VAR_6) {
   struct iwl_mvm_tid_data *VAR_31 =
    &VAR_30->tid_data[VAR_15];
   bool VAR_32 = 0;

   FUNC_42(&VAR_30->lock);

   if (!VAR_24) {
    VAR_31->next_reclaimed = VAR_22;
    FUNC_4(VAR_8,
         "Next reclaimed packet:%d\n",
         VAR_22);
   } else {
    FUNC_4(VAR_8,
         "NDP - don't update next_reclaimed\n");
   }

   FUNC_21(VAR_8, VAR_10, VAR_15);

   if (VAR_30->sleep_tx_count) {
    VAR_30->sleep_tx_count--;
    if (VAR_30->sleep_tx_count &&
        !FUNC_29(VAR_8, VAR_31)) {
     VAR_32 = 1;
    }
   }

   FUNC_43(&VAR_30->lock);
   if (VAR_32) {
    FUNC_28(VAR_8, VAR_10,
     VAR_0,
     1, VAR_15, 0, 0);
    VAR_30->sleep_tx_count = 0;
    FUNC_18(VAR_10, VAR_15);
   }
  }

  if (VAR_30->next_status_eosp) {
   VAR_30->next_status_eosp = 0;
   FUNC_19(VAR_10);
  }
 }
out:
 FUNC_40();
}
