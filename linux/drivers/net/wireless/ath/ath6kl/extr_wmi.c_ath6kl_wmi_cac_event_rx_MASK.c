
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_cac_event {size_t ac; scalar_t__ cac_indication; scalar_t__ status_code; int tspec_suggestion; } ;
struct wmi {int* stream_exist_for_ac; int fat_pipe_exist; int parent_dev; int lock; } ;
struct ieee80211_tspec_ie {int tsinfo; } ;
struct ath6kl_vif {int fw_vif_idx; } ;
typedef int active_tsids ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,size_t,int) ;
 int FUNC_2 (struct wmi*,int ,size_t,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct wmi *VAR_8, u8 *VAR_9, int VAR_10,
       struct ath6kl_vif *VAR_11)
{
 struct wmi_cac_event *VAR_12;
 struct ieee80211_tspec_ie *VAR_13;
 u16 VAR_14, VAR_15;
 u8 VAR_16, VAR_17;
 u8 VAR_18;

 if (VAR_10 < sizeof(struct wmi_cac_event))
  return -VAR_3;

 VAR_12 = (struct wmi_cac_event *) VAR_9;
 if (VAR_12->ac >= VAR_7) {
  FUNC_0("invalid AC: %d\n", VAR_12->ac);
  return -VAR_3;
 }

 if ((VAR_12->cac_indication == VAR_0) &&
     (VAR_12->status_code != VAR_4)) {
  VAR_13 = (struct ieee80211_tspec_ie *) &(VAR_12->tspec_suggestion);
  VAR_15 = FUNC_3(VAR_13->tsinfo);
  VAR_16 = (VAR_15 >> VAR_6) &
   VAR_5;

  FUNC_2(VAR_8, VAR_11->fw_vif_idx,
           VAR_12->ac, VAR_16);
 } else if (VAR_12->cac_indication == VAR_2) {




  FUNC_4(&VAR_8->lock);
  VAR_14 = VAR_8->stream_exist_for_ac[VAR_12->ac];
  FUNC_5(&VAR_8->lock);

  for (VAR_17 = 0; VAR_17 < sizeof(VAR_14) * 8; VAR_17++) {
   if ((VAR_14 >> VAR_17) & 1)
    break;
  }
  if (VAR_17 < (sizeof(VAR_14) * 8))
   FUNC_2(VAR_8, VAR_11->fw_vif_idx,
            VAR_12->ac, VAR_17);
 }





 else if (VAR_12->cac_indication == VAR_1) {
  VAR_13 = (struct ieee80211_tspec_ie *) &(VAR_12->tspec_suggestion);
  VAR_15 = FUNC_3(VAR_13->tsinfo);
  VAR_18 = ((VAR_15 >> VAR_6) &
    VAR_5);

  FUNC_4(&VAR_8->lock);
  VAR_8->stream_exist_for_ac[VAR_12->ac] &= ~(1 << VAR_18);
  VAR_14 = VAR_8->stream_exist_for_ac[VAR_12->ac];
  FUNC_5(&VAR_8->lock);




  if (!VAR_14) {
   FUNC_1(VAR_8->parent_dev, VAR_12->ac,
          0);
   VAR_8->fat_pipe_exist &= ~(1 << VAR_12->ac);
  }
 }

 return 0;
}
