
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; int * data; } ;
struct iwl_wowlan_status_data {int wakeup_reasons; int pattern_number; int wake_packet_bufsize; int wake_packet_length; int * wake_packet; } ;
struct iwl_mvm {int gtk_ivlen; int ptk_ivlen; scalar_t__ ptk_icvlen; scalar_t__ gtk_icvlen; int dev; } ;
struct ieee80211_vif {int type; int addr; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct cfg80211_wowlan_wakeup {int pattern_idx; int magic_pkt; int disconnect; int gtk_rekey_failure; int rfkill_release; int eap_identity_req; int four_way_handshake; int tcp_connlost; int tcp_nomoretokens; int tcp_match; int packet_present_len; int packet_len; int packet_80211; int * packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_vif*,struct cfg80211_wowlan_wakeup*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct sk_buff*,int const*,int) ;

__attribute__((used)) static void FUNC_11(struct iwl_mvm *VAR_13,
       struct ieee80211_vif *VAR_14,
       struct iwl_wowlan_status_data *VAR_15)
{
 struct sk_buff *VAR_16 = ((void*)0);
 struct cfg80211_wowlan_wakeup VAR_17 = {
  .pattern_idx = -1,
 };
 struct cfg80211_wowlan_wakeup *VAR_18 = &VAR_17;
 u32 VAR_19 = VAR_15->wakeup_reasons;

 if (VAR_19 == VAR_7) {
  VAR_18 = ((void*)0);
  goto report;
 }

 FUNC_9(VAR_13->dev, 0);

 if (VAR_19 & VAR_6)
  VAR_17.magic_pkt = 1;

 if (VAR_19 & VAR_8)
  VAR_17.pattern_idx =
   VAR_15->pattern_number;

 if (VAR_19 & (VAR_2 |
         VAR_1))
  VAR_17.disconnect = 1;

 if (VAR_19 & VAR_5)
  VAR_17.gtk_rekey_failure = 1;

 if (VAR_19 & VAR_12)
  VAR_17.rfkill_release = 1;

 if (VAR_19 & VAR_3)
  VAR_17.eap_identity_req = 1;

 if (VAR_19 & VAR_4)
  VAR_17.four_way_handshake = 1;

 if (VAR_19 & VAR_9)
  VAR_17.tcp_connlost = 1;

 if (VAR_19 & VAR_10)
  VAR_17.tcp_nomoretokens = 1;

 if (VAR_19 & VAR_11)
  VAR_17.tcp_match = 1;

 if (VAR_15->wake_packet_bufsize) {
  int VAR_20 = VAR_15->wake_packet_bufsize;
  int VAR_21 = VAR_15->wake_packet_length;
  const u8 *VAR_22 = VAR_15->wake_packet;
  struct ieee80211_hdr *VAR_23 = (void *)VAR_22;
  int VAR_24 = VAR_21 - VAR_20;


  if (FUNC_0(VAR_24 < 0))
   VAR_24 = 0;

  if (FUNC_5(VAR_23->frame_control)) {
   int VAR_25 = FUNC_4(VAR_23->frame_control);
   int VAR_26 = 0, VAR_27 = 4;

   VAR_16 = FUNC_1(VAR_20, VAR_0);
   if (!VAR_16)
    goto report;

   FUNC_10(VAR_16, VAR_22, VAR_25);
   VAR_22 += VAR_25;
   VAR_20 -= VAR_25;

   if (FUNC_3(VAR_23->frame_control)) {






    if (FUNC_7(VAR_23->addr1)) {
     VAR_26 = VAR_13->gtk_ivlen;
     VAR_27 += VAR_13->gtk_icvlen;
    } else {
     VAR_26 = VAR_13->ptk_ivlen;
     VAR_27 += VAR_13->ptk_icvlen;
    }
   }


   if (VAR_24 >= VAR_27) {
    VAR_27 = 0;
    VAR_24 -= VAR_27;
   } else {
    VAR_27 -= VAR_24;
    VAR_24 = 0;
   }

   VAR_20 -= VAR_26 + VAR_27;
   VAR_22 += VAR_26;

   FUNC_10(VAR_16, VAR_22, VAR_20);

   if (FUNC_2(VAR_16, VAR_14->addr, VAR_14->type))
    goto report;
   VAR_17.packet = VAR_16->data;
   VAR_17.packet_present_len = VAR_16->len;
   VAR_17.packet_len = VAR_16->len - VAR_24;
   VAR_17.packet_80211 = 0;
  } else {
   int VAR_28 = 4;

   if (VAR_24 >= 4) {
    VAR_24 -= 4;
    VAR_28 = 0;
   } else {
    VAR_28 -= VAR_24;
    VAR_24 = 0;
   }
   VAR_20 -= VAR_28;
   VAR_17.packet = VAR_15->wake_packet;
   VAR_17.packet_present_len = VAR_20;
   VAR_17.packet_len = VAR_21 - VAR_24;
   VAR_17.packet_80211 = 1;
  }
 }

 report:
 FUNC_6(VAR_14, VAR_18, VAR_0);
 FUNC_8(VAR_16);
}
