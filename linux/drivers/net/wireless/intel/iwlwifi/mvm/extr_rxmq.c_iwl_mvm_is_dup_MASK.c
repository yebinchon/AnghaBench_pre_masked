
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_rx_mpdu_desc {size_t amsdu_info; int mac_flags2; } ;
struct iwl_mvm_sta {struct iwl_mvm_rxq_dup_data* dup_data; } ;
struct iwl_mvm_rxq_dup_data {scalar_t__* last_seq; size_t* last_sub_frame; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hdr {scalar_t__ seq_ctrl; int frame_control; int addr1; } ;


 int FUNC_0 (struct ieee80211_sta*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct iwl_mvm_sta* FUNC_8 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct ieee80211_sta *VAR_5, int VAR_6,
      struct ieee80211_rx_status *VAR_7,
      struct ieee80211_hdr *VAR_8,
      struct iwl_rx_mpdu_desc *VAR_9)
{
 struct iwl_mvm_sta *VAR_10;
 struct iwl_mvm_rxq_dup_data *VAR_11;
 u8 VAR_12, VAR_13;

 if (FUNC_1(FUNC_0(VAR_5)))
  return 0;

 VAR_10 = FUNC_8(VAR_5);
 VAR_11 = &VAR_10->dup_data[VAR_6];





 if (FUNC_4(VAR_8->frame_control) ||
     FUNC_6(VAR_8->frame_control) ||
     FUNC_7(VAR_8->addr1)) {
  VAR_7->flag |= VAR_4;
  return 0;
 }

 if (FUNC_5(VAR_8->frame_control))

  VAR_12 = FUNC_2(VAR_8);
 else
  VAR_12 = VAR_0;


 VAR_13 = VAR_9->amsdu_info &
  VAR_1;

 if (FUNC_9(FUNC_3(VAR_8->frame_control) &&
       VAR_11->last_seq[VAR_12] == VAR_8->seq_ctrl &&
       VAR_11->last_sub_frame[VAR_12] >= VAR_13))
  return 1;


 if (VAR_11->last_seq[VAR_12] == VAR_8->seq_ctrl &&
     VAR_13 > VAR_11->last_sub_frame[VAR_12] &&
     VAR_9->mac_flags2 & VAR_2)
  VAR_7->flag |= VAR_3;

 VAR_11->last_seq[VAR_12] = VAR_8->seq_ctrl;
 VAR_11->last_sub_frame[VAR_12] = VAR_13;

 VAR_7->flag |= VAR_4;

 return 0;
}
