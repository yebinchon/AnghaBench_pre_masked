
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct cfg80211_scan_request {scalar_t__ n_channels; int rates; int no_cck; TYPE_1__** channels; int ie_len; int ie; int n_ssids; int ssids; int wdev; } ;
struct ath6kl_vif {struct cfg80211_scan_request* scan_req; int fw_vif_idx; int flags; int ndev; } ;
struct ath6kl {int wmi; int usr_bss_filter; } ;
typedef size_t s8 ;
struct TYPE_2__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (struct ath6kl_vif*) ;
 int FUNC_2 (char*,...) ;
 struct ath6kl* FUNC_3 (int ) ;
 int FUNC_4 (struct ath6kl*,struct ath6kl_vif*,int ,int ,int *,int ) ;
 struct ath6kl_vif* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ,int,int,int ,int ,size_t,int *,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int * FUNC_11 (size_t,int,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct wiphy *VAR_9,
    struct cfg80211_scan_request *VAR_10)
{
 struct ath6kl_vif *VAR_11 = FUNC_5(VAR_10->wdev);
 struct ath6kl *VAR_12 = FUNC_3(VAR_11->ndev);
 s8 VAR_13 = 0;
 u16 *VAR_14 = ((void*)0);
 int VAR_15 = 0;
 u32 VAR_16 = 0;

 if (!FUNC_0(VAR_11))
  return -VAR_4;

 FUNC_1(VAR_11);

 if (!VAR_12->usr_bss_filter) {
  FUNC_10(VAR_2, &VAR_11->flags);
  VAR_15 = FUNC_8(VAR_12->wmi, VAR_11->fw_vif_idx,
            VAR_0, 0);
  if (VAR_15) {
   FUNC_2("couldn't set bss filtering\n");
   return VAR_15;
  }
 }

 VAR_15 = FUNC_4(VAR_12, VAR_11, VAR_10->ssids,
          VAR_10->n_ssids, ((void*)0), 0);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_9(VAR_12->wmi, VAR_11->fw_vif_idx,
           VAR_6,
           VAR_10->ie, VAR_10->ie_len);
 if (VAR_15) {
  FUNC_2("failed to set Probe Request appie for scan\n");
  return VAR_15;
 }






 if (VAR_10->n_channels > 0 &&
     VAR_10->n_channels <= VAR_8) {
  u8 VAR_17;

  VAR_13 = VAR_10->n_channels;

  VAR_14 = FUNC_11(VAR_13, sizeof(u16), VAR_5);
  if (VAR_14 == ((void*)0)) {
   FUNC_6("failed to set scan channels, scan all channels");
   VAR_13 = 0;
  }

  for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++)
   VAR_14[VAR_17] = VAR_10->channels[VAR_17]->center_freq;
 }

 if (FUNC_13(VAR_3, &VAR_11->flags))
  VAR_16 = 1;

 VAR_11->scan_req = VAR_10;

 VAR_15 = FUNC_7(VAR_12->wmi, VAR_11->fw_vif_idx,
           VAR_7, VAR_16,
           0, 0,
           VAR_1,
           VAR_13, VAR_14,
           VAR_10->no_cck,
           VAR_10->rates);
 if (VAR_15) {
  FUNC_2("failed to start scan: %d\n", VAR_15);
  VAR_11->scan_req = ((void*)0);
 }

 FUNC_12(VAR_14);

 return VAR_15;
}
