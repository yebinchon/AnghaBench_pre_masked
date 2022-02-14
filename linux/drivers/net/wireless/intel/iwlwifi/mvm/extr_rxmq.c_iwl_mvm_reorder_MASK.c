
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_rx_mpdu_desc {int mac_flags2; int amsdu_info; int reorder_data; } ;
struct iwl_mvm_sta {scalar_t__ sta_id; } ;
struct iwl_mvm_reorder_buffer {int valid; int head_sn; int buf_size; int last_amsdu; size_t last_sub_index; int lock; int num_stored; } ;
struct TYPE_2__ {int reorder_time; int frames; } ;
struct iwl_mvm_reorder_buf_entry {TYPE_1__ e; } ;
struct iwl_mvm_baid_data {size_t tid; scalar_t__ sta_id; int entries_per_queue; struct iwl_mvm_reorder_buf_entry* entries; struct iwl_mvm_reorder_buffer* reorder_buf; } ;
struct iwl_mvm {int * baid_map; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int device_timestamp; } ;
struct ieee80211_hdr {int frame_control; int addr1; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,char*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ FUNC_3 (int,char*,size_t,scalar_t__,size_t,scalar_t__,size_t) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 size_t FUNC_6 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int,int,int) ;
 int FUNC_14 (struct iwl_mvm*,struct ieee80211_sta*,size_t,struct iwl_mvm_reorder_buffer*,int,int ,int) ;
 int FUNC_15 (struct iwl_mvm*,struct ieee80211_sta*,struct napi_struct*,struct iwl_mvm_baid_data*,struct iwl_mvm_reorder_buffer*,int,int ) ;
 struct ieee80211_hdr* FUNC_16 (struct sk_buff*) ;
 struct iwl_mvm_sta* FUNC_17 (struct ieee80211_sta*) ;
 int FUNC_18 (struct iwl_mvm*,size_t,int) ;
 int VAR_11 ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int ) ;
 struct iwl_mvm_baid_data* FUNC_21 (int ) ;
 struct sk_buff* FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static bool FUNC_26(struct iwl_mvm *VAR_12,
       struct napi_struct *VAR_13,
       int VAR_14,
       struct ieee80211_sta *VAR_15,
       struct sk_buff *VAR_16,
       struct iwl_rx_mpdu_desc *VAR_17)
{
 struct ieee80211_rx_status *VAR_18 = FUNC_0(VAR_16);
 struct ieee80211_hdr *VAR_19 = FUNC_16(VAR_16);
 struct iwl_mvm_sta *VAR_20;
 struct iwl_mvm_baid_data *VAR_21;
 struct iwl_mvm_reorder_buffer *VAR_22;
 struct sk_buff *VAR_23;
 u32 VAR_24 = FUNC_20(VAR_17->reorder_data);
 bool VAR_25 = VAR_17->mac_flags2 & VAR_3;
 bool VAR_26 =
  VAR_17->amsdu_info & VAR_1;
 u8 VAR_27 = FUNC_6(VAR_19);
 u8 VAR_28 = VAR_17->amsdu_info &
      VAR_2;
 struct iwl_mvm_reorder_buf_entry *VAR_29;
 int VAR_30;
 u16 VAR_31, VAR_32;
 u8 VAR_33;

 VAR_33 = (VAR_24 & VAR_4) >>
  VAR_5;
 if (VAR_33 == VAR_10)
  return 0;


 if (FUNC_4(FUNC_1(VAR_15),
        "Got valid BAID without a valid station assigned\n"))
  return 0;

 VAR_20 = FUNC_17(VAR_15);


 if (!FUNC_7(VAR_19->frame_control) &&
     (!FUNC_9(VAR_19->frame_control) ||
      FUNC_12(VAR_19->addr1)))
  return 0;

 if (FUNC_25(!FUNC_8(VAR_19->frame_control)))
  return 0;

 VAR_21 = FUNC_21(VAR_12->baid_map[VAR_33]);
 if (!VAR_21) {
  FUNC_2(VAR_12,
        "Got valid BAID but no baid allocated, bypass the re-ordering buffer. Baid %d reorder 0x%x\n",
         VAR_33, VAR_24);
  return 0;
 }

 if (FUNC_3(VAR_27 != VAR_21->tid || VAR_20->sta_id != VAR_21->sta_id,
   "baid 0x%x is mapped to sta:%d tid:%d, but was received for sta:%d tid:%d\n",
   VAR_33, VAR_21->sta_id, VAR_21->tid, VAR_20->sta_id,
   VAR_27))
  return 0;

 VAR_31 = VAR_24 & VAR_7;
 VAR_32 = (VAR_24 & VAR_8) >>
  VAR_9;

 VAR_22 = &VAR_21->reorder_buf[VAR_14];
 VAR_29 = &VAR_21->entries[VAR_14 * VAR_21->entries_per_queue];

 FUNC_23(&VAR_22->lock);

 if (!VAR_22->valid) {
  if (VAR_24 & VAR_6) {
   FUNC_24(&VAR_22->lock);
   return 0;
  }
  VAR_22->valid = 1;
 }

 if (FUNC_7(VAR_19->frame_control)) {
  FUNC_15(VAR_12, VAR_15, VAR_13, VAR_21,
           VAR_22, VAR_31, 0);
  goto drop;
 }
 if (!FUNC_13(VAR_31, VAR_22->head_sn + VAR_22->buf_size,
    VAR_22->buf_size) ||
     !FUNC_11(VAR_32, VAR_22->head_sn + VAR_22->buf_size)) {
  u16 VAR_34 = FUNC_11(VAR_32, VAR_31) ? VAR_32 : VAR_31;

  FUNC_15(VAR_12, VAR_15, VAR_13, VAR_21, VAR_22,
           VAR_34, VAR_0);
 }

 FUNC_14(VAR_12, VAR_15, VAR_27, VAR_22, VAR_24,
     VAR_18->device_timestamp, VAR_14);


 if (FUNC_11(VAR_32, VAR_22->head_sn))
  goto drop;


 if (!VAR_22->num_stored && FUNC_11(VAR_32, VAR_31)) {
  if (FUNC_13(VAR_22->head_sn, VAR_31,
           VAR_22->buf_size) &&
     (!VAR_25 || VAR_26)) {
   if (VAR_32 == 2048 || VAR_32 == 0)
    FUNC_18(VAR_12, VAR_33, VAR_32);
   VAR_22->head_sn = VAR_31;
  }

  FUNC_24(&VAR_22->lock);
  return 0;
 }
 if (!VAR_22->num_stored && VAR_32 == VAR_22->head_sn) {
  if (!VAR_25 || VAR_26) {
   if (VAR_32 == 2048 || VAR_32 == 0)
    FUNC_18(VAR_12, VAR_33, VAR_32);
   VAR_22->head_sn = FUNC_10(VAR_22->head_sn);
  }

  FUNC_24(&VAR_22->lock);
  return 0;
 }

 VAR_30 = VAR_32 % VAR_22->buf_size;
 VAR_23 = FUNC_22(&VAR_29[VAR_30].e.frames);
 if (VAR_23 && !VAR_25)
  goto drop;
 else if (VAR_23 && (VAR_32 != VAR_22->last_amsdu ||
     VAR_22->last_sub_index >= VAR_28))
  goto drop;


 FUNC_5(&VAR_29[VAR_30].e.frames, VAR_16);
 VAR_22->num_stored++;
 VAR_29[VAR_30].e.reorder_time = VAR_11;

 if (VAR_25) {
  VAR_22->last_amsdu = VAR_32;
  VAR_22->last_sub_index = VAR_28;
 }
 if (!VAR_25 || VAR_26)
  FUNC_15(VAR_12, VAR_15, VAR_13, VAR_21,
           VAR_22, VAR_31,
           VAR_0);

 FUNC_24(&VAR_22->lock);
 return 1;

drop:
 FUNC_19(VAR_16);
 FUNC_24(&VAR_22->lock);
 return 1;
}
