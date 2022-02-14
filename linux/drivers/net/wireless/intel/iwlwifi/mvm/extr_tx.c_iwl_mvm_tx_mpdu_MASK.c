
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct iwl_tx_cmd {TYPE_1__* hdr; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; int lock; TYPE_3__* tid_data; } ;
struct iwl_mvm {int trans; int add_stream_wk; TYPE_2__* queue_info; } ;
struct iwl_device_cmd {scalar_t__ payload; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ state; size_t seq_number; size_t txq_id; } ;
struct TYPE_5__ {scalar_t__ status; int * last_frame_time; } ;
struct TYPE_4__ {int seq_ctrl; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct iwl_mvm*,char*,scalar_t__,size_t,...) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (size_t) ;
 size_t FUNC_5 (struct ieee80211_hdr*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct iwl_mvm*) ;
 int FUNC_13 (struct iwl_mvm*,struct sk_buff*) ;
 struct iwl_device_cmd* FUNC_14 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_tx_info*,int,struct ieee80211_sta*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,struct iwl_device_cmd*) ;
 struct iwl_mvm_sta* FUNC_16 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_17 (struct iwl_mvm*,struct iwl_mvm_sta*,size_t) ;
 scalar_t__ FUNC_18 (struct iwl_mvm*,size_t) ;
 int FUNC_19 (int ,struct iwl_device_cmd*) ;
 scalar_t__ FUNC_20 (int ,struct sk_buff*,struct iwl_device_cmd*,size_t) ;
 int VAR_12 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct iwl_mvm *VAR_13, struct sk_buff *VAR_14,
      struct ieee80211_tx_info *VAR_15,
      struct ieee80211_sta *VAR_16)
{
 struct ieee80211_hdr *VAR_17 = (struct ieee80211_hdr *)VAR_14->data;
 struct iwl_mvm_sta *VAR_18;
 struct iwl_device_cmd *VAR_19;
 __le16 VAR_20;
 u16 VAR_21 = 0;
 u8 VAR_22 = VAR_6;
 u16 VAR_23;
 bool VAR_24 = 0;
 int VAR_25;

 VAR_18 = FUNC_16(VAR_16);
 VAR_20 = VAR_17->frame_control;
 VAR_25 = FUNC_7(VAR_20);

 if (VAR_9 && FUNC_10(VAR_20))
  return -1;

 if (FUNC_3(!VAR_18))
  return -1;

 if (FUNC_3(VAR_18->sta_id == VAR_8))
  return -1;

 if (FUNC_24(FUNC_10(VAR_20)))
  FUNC_13(VAR_13, VAR_14);

 VAR_19 = FUNC_14(VAR_13, VAR_14, VAR_15, VAR_25,
     VAR_16, VAR_18->sta_id);
 if (!VAR_19)
  goto drop;






 VAR_15->flags &= ~VAR_4;

 FUNC_22(&VAR_18->lock);





 if (FUNC_9(VAR_20) && !FUNC_11(VAR_20)) {
  VAR_22 = FUNC_5(VAR_17);
  if (FUNC_2(VAR_22 >= VAR_6, "Invalid TID %d", VAR_22))
   goto drop_unlock_sta;

  VAR_24 = VAR_15->flags & VAR_2;
  if (FUNC_2(VAR_24 &&
         VAR_18->tid_data[VAR_22].state != VAR_5,
         "Invalid internal agg state %d for TID %d",
          VAR_18->tid_data[VAR_22].state, VAR_22))
   goto drop_unlock_sta;

  VAR_21 = VAR_18->tid_data[VAR_22].seq_number;
  VAR_21 &= VAR_1;

  if (!FUNC_12(VAR_13)) {
   struct iwl_tx_cmd *VAR_26 = (void *)VAR_19->payload;

   VAR_17->seq_ctrl &= FUNC_4(VAR_0);
   VAR_17->seq_ctrl |= FUNC_4(VAR_21);

   VAR_26->hdr->seq_ctrl = VAR_17->seq_ctrl;
  }
 } else if (FUNC_8(VAR_20) && !FUNC_9(VAR_20)) {
  VAR_22 = VAR_11;
 }

 VAR_23 = VAR_18->tid_data[VAR_22].txq_id;

 FUNC_3(VAR_15->flags & VAR_3);

 if (FUNC_2(VAR_23 == VAR_7, "Invalid TXQ id")) {
  FUNC_19(VAR_13->trans, VAR_19);
  FUNC_23(&VAR_18->lock);
  return 0;
 }

 if (!FUNC_12(VAR_13)) {

  VAR_13->queue_info[VAR_23].last_frame_time[VAR_22] = VAR_12;
  if (FUNC_24(VAR_13->queue_info[VAR_23].status ==
        VAR_10 &&
        FUNC_18(VAR_13, VAR_23)))
   FUNC_21(&VAR_13->add_stream_wk);
 }

 FUNC_1(VAR_13, "TX to [%d|%d] Q:%d - seq: 0x%x len %d\n",
       VAR_18->sta_id, VAR_22, VAR_23,
       FUNC_0(VAR_21), VAR_14->len);


 FUNC_15(VAR_14, VAR_19);

 if (FUNC_20(VAR_13->trans, VAR_14, VAR_19, VAR_23))
  goto drop_unlock_sta;

 if (VAR_22 < VAR_6 && !FUNC_6(VAR_20))
  VAR_18->tid_data[VAR_22].seq_number = VAR_21 + 0x10;

 FUNC_23(&VAR_18->lock);

 if (FUNC_17(VAR_13, VAR_18,
      VAR_22 == VAR_6 ? 0 : VAR_22))
  goto drop;

 return 0;

drop_unlock_sta:
 FUNC_19(VAR_13->trans, VAR_19);
 FUNC_23(&VAR_18->lock);
drop:
 FUNC_1(VAR_13, "TX to [%d|%d] dropped\n", VAR_18->sta_id, VAR_22);
 return -1;
}
