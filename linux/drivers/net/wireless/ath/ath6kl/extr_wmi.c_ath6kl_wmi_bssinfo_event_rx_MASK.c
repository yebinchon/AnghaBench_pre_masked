
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_bss_info_hdr2 {int snr; scalar_t__ frame_type; int bssid; int ch; } ;
struct wmi {struct ath6kl* parent_dev; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct ath6kl_vif {int assoc_bss_dtim_period; int sched_scan_timer; int flags; int bssid; int fw_vif_idx; } ;
struct ath6kl {int wiphy; int wmi; } ;
typedef int __le64 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,int ,int,int,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int* FUNC_2 (int ,int*,int) ;
 struct cfg80211_bss* FUNC_3 (int ,struct ieee80211_channel*,int ,int ,int ,int ,int ,int*,int,int,int ) ;
 int FUNC_4 (int ,struct cfg80211_bss*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ieee80211_channel* FUNC_8 (int ,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct wmi *VAR_17, u8 *VAR_18, int VAR_19,
           struct ath6kl_vif *VAR_20)
{
 struct wmi_bss_info_hdr2 *VAR_21;
 u8 *VAR_22;
 struct ieee80211_channel *VAR_23;
 struct ath6kl *VAR_24 = VAR_17->parent_dev;
 struct cfg80211_bss *VAR_25;

 if (VAR_19 <= sizeof(struct wmi_bss_info_hdr2))
  return -VAR_8;

 VAR_21 = (struct wmi_bss_info_hdr2 *) VAR_18;
 VAR_22 = VAR_18 + sizeof(struct wmi_bss_info_hdr2);
 VAR_19 -= sizeof(struct wmi_bss_info_hdr2);

 FUNC_0(VAR_0,
     "bss info evt - ch %u, snr %d, rssi %d, bssid \"%pM\" "
     "frame_type=%d\n",
     VAR_21->ch, VAR_21->snr, VAR_21->snr - 95, VAR_21->bssid,
     VAR_21->frame_type);

 if (VAR_21->frame_type != VAR_2 &&
     VAR_21->frame_type != VAR_13)
  return 0;

 if (VAR_21->frame_type == VAR_2 &&
     FUNC_14(VAR_5, &VAR_20->flags)) {
  FUNC_5(VAR_5, &VAR_20->flags);
  FUNC_1(VAR_24->wmi, VAR_20->fw_vif_idx,
      VAR_12, 0);
 }

 VAR_23 = FUNC_8(VAR_24->wiphy, FUNC_9(VAR_21->ch));
 if (VAR_23 == ((void*)0))
  return -VAR_8;

 if (VAR_19 < 8 + 2 + 2)
  return -VAR_8;

 if (VAR_21->frame_type == VAR_2 &&
     FUNC_14(VAR_6, &VAR_20->flags) &&
     FUNC_10(VAR_21->bssid, VAR_20->bssid, VAR_10) == 0) {
  const u8 *VAR_26;
  VAR_26 = FUNC_2(VAR_15, VAR_22 + 8 + 2 + 2,
           VAR_19 - 8 - 2 - 2);
  if (VAR_26 && VAR_26[1] >= 2) {
   VAR_20->assoc_bss_dtim_period = VAR_26[3];
   FUNC_13(VAR_7, &VAR_20->flags);
  }
 }

 VAR_25 = FUNC_3(VAR_24->wiphy, VAR_23,
      VAR_21->frame_type == VAR_2 ?
     VAR_3 :
     VAR_4,
      VAR_21->bssid, FUNC_7((__le64 *)VAR_22),
      FUNC_6(((__le16 *)VAR_22) + 5),
      FUNC_6(((__le16 *)VAR_22) + 4),
      VAR_22 + 8 + 2 + 2, VAR_19 - 8 - 2 - 2,
      (VAR_21->snr - 95) * 100, VAR_11);
 if (VAR_25 == ((void*)0))
  return -VAR_9;
 FUNC_4(VAR_24->wiphy, VAR_25);
 if (FUNC_14(VAR_14, &VAR_20->flags) &&
     !FUNC_15(&VAR_20->sched_scan_timer)) {
  FUNC_11(&VAR_20->sched_scan_timer, VAR_16 +
     FUNC_12(VAR_1));
 }

 return 0;
}
