
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {int seq_ctrl; int addr1; int frame_control; } ;
struct ath_rx_status {scalar_t__ rs_keyix; int rs_status; } ;
struct ath_hw {scalar_t__ is_monitoring; } ;
struct ath_common {int ccmp_keymap; int tkip_keymap; struct ath_hw* ah; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

bool FUNC_7(struct ath_common *VAR_10,
    struct ieee80211_hdr *VAR_11,
    struct ieee80211_rx_status *VAR_12,
    struct ath_rx_status *VAR_13,
    bool *VAR_14,
    unsigned int VAR_15)
{
 struct ath_hw *VAR_16 = VAR_10->ah;
 bool VAR_17, VAR_18, VAR_19, VAR_20;
 __le16 VAR_21;

 VAR_21 = VAR_11->frame_control;

 VAR_17 = !!FUNC_4(VAR_11->addr1);
 VAR_18 = VAR_13->rs_keyix != VAR_4 &&
  FUNC_6(VAR_13->rs_keyix, VAR_10->tkip_keymap);
 VAR_19 = VAR_18 && FUNC_3(VAR_21) &&
  FUNC_1(VAR_21) &&
  !(VAR_13->rs_status &
  (VAR_1 | VAR_0 | VAR_3 |
   VAR_2));






 if (VAR_13->rs_keyix == VAR_4 ||
     !FUNC_6(VAR_13->rs_keyix, VAR_10->ccmp_keymap))
  VAR_13->rs_status &= ~VAR_2;

 VAR_20 = VAR_18 && !FUNC_2(VAR_21) &&
  !FUNC_0(VAR_21) &&
  !(FUNC_5(VAR_11->seq_ctrl) & VAR_6) &&
  (VAR_13->rs_status & VAR_3);







 if (VAR_13->rs_status != 0) {
  u8 VAR_22;

  if (VAR_13->rs_status & VAR_0) {
   VAR_12->flag |= VAR_7;
   VAR_20 = 0;
  }

  if ((VAR_13->rs_status & VAR_1) ||
      (!VAR_17 && (VAR_13->rs_status & VAR_2))) {
   *VAR_14 = 1;
   VAR_20 = 0;
  }







  VAR_22 = VAR_1 | VAR_3 |
         VAR_2;

  if (VAR_16->is_monitoring && (VAR_15 & VAR_5))
   VAR_22 |= VAR_0;

  if (VAR_13->rs_status & ~VAR_22)
   return 0;
 }







 if (VAR_19)
  VAR_12->flag |= VAR_9;
 else if (VAR_17 && VAR_20)
  VAR_12->flag |= VAR_8;

 return 1;
}
