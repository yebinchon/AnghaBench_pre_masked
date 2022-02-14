
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {size_t global_hlid; int mgmt_rate_idx; size_t bcast_hlid; int bcast_rate_idx; int* ucast_rate_idx; } ;
struct TYPE_4__ {int basic_rate_idx; int p2p_rate_idx; int ap_rate_idx; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_2__ ap; TYPE_1__ sta; } ;
struct wl1271_tx_hw_descr {size_t hlid; void* tx_attr; int tid; void* life_time; int start_time; } ;
struct wl1271 {size_t* session_ids; int quirks; scalar_t__ time_offset; } ;
struct sk_buff {scalar_t__ protocol; int priority; scalar_t__ data; } ;
struct TYPE_6__ {int flags; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int s64 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (size_t*,struct ieee80211_hdr*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct wl1271*,struct sk_buff*) ;
 int FUNC_14 (struct wl1271*,struct wl1271_tx_hw_descr*,struct sk_buff*) ;
 int FUNC_15 (struct wl1271*,struct wl1271_tx_hw_descr*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_16(struct wl1271 *VAR_14, struct wl12xx_vif *VAR_15,
          struct sk_buff *VAR_16, u32 VAR_17,
          struct ieee80211_tx_info *VAR_18, u8 VAR_19)
{
 struct wl1271_tx_hw_descr *VAR_20;
 int VAR_21, VAR_22;
 s64 VAR_23;
 u16 VAR_24 = 0;
 __le16 VAR_25;
 struct ieee80211_hdr *VAR_26;
 u8 *VAR_27;
 bool VAR_28;

 VAR_20 = (struct wl1271_tx_hw_descr *) VAR_16->data;
 VAR_27 = (u8 *)(VAR_20 + 1);
 VAR_26 = (struct ieee80211_hdr *)(VAR_27 + VAR_17);
 VAR_25 = VAR_26->frame_control;


 if (VAR_17) {
  int VAR_29 = FUNC_4(VAR_25);
  FUNC_8(VAR_27, VAR_26, VAR_29);
  FUNC_11(VAR_16, FUNC_10(VAR_16) + VAR_17);
 }


 VAR_23 = (FUNC_7() >> 10);
 VAR_20->start_time = FUNC_2(VAR_23 - VAR_14->time_offset);

 VAR_28 = FUNC_13(VAR_14, VAR_16);
 if (VAR_28 || !VAR_15 || VAR_15->bss_type != VAR_0)
  VAR_20->life_time = FUNC_1(VAR_12);
 else
  VAR_20->life_time = FUNC_1(VAR_5);


 VAR_21 = FUNC_12(FUNC_9(VAR_16));
 VAR_20->tid = VAR_16->priority;

 if (VAR_28) {




  VAR_24 = (VAR_4 <<
      VAR_9) &
      VAR_10;

  VAR_24 |= VAR_11;
 } else if (VAR_15) {
  u8 VAR_30 = VAR_14->session_ids[VAR_19];

  if ((VAR_14->quirks & VAR_13) &&
      (VAR_15->bss_type == VAR_0))
   VAR_30 = 0;


  VAR_24 = VAR_30 << VAR_9;
 }

 VAR_20->hlid = VAR_19;
 if (VAR_28 || !VAR_15)
  VAR_22 = 0;
 else if (VAR_15->bss_type != VAR_0) {





  if (VAR_16->protocol == FUNC_0(VAR_1))
   VAR_22 = VAR_15->sta.basic_rate_idx;
  else if (VAR_18->flags & VAR_2)
   VAR_22 = VAR_15->sta.p2p_rate_idx;
  else if (FUNC_6(VAR_25))
   VAR_22 = VAR_15->sta.ap_rate_idx;
  else
   VAR_22 = VAR_15->sta.basic_rate_idx;
 } else {
  if (VAR_19 == VAR_15->ap.global_hlid)
   VAR_22 = VAR_15->ap.mgmt_rate_idx;
  else if (VAR_19 == VAR_15->ap.bcast_hlid ||
    VAR_16->protocol == FUNC_0(VAR_1) ||
    !FUNC_6(VAR_25))




   VAR_22 = VAR_15->ap.bcast_rate_idx;
  else
   VAR_22 = VAR_15->ap.ucast_rate_idx[VAR_21];
 }

 VAR_24 |= VAR_22 << VAR_8;


 if (FUNC_5(VAR_25) &&
     FUNC_3(VAR_25))
  VAR_24 |= VAR_7;


 if (VAR_18->control.flags & VAR_3)
  VAR_24 |= VAR_6;

 VAR_20->tx_attr = FUNC_1(VAR_24);

 FUNC_14(VAR_14, VAR_20, VAR_16);
 FUNC_15(VAR_14, VAR_20, VAR_16);
}
