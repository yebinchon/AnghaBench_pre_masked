
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct wilc_priv {int cfg_scanning; struct cfg80211_scan_request* scan_req; } ;
struct wilc_vif {int ndev; struct wilc_priv priv; } ;
struct cfg80211_scan_request {int n_channels; scalar_t__ n_ssids; TYPE_2__** channels; TYPE_1__* wdev; } ;
struct TYPE_4__ {int center_freq; } ;
struct TYPE_3__ {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct wilc_vif* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc_vif*,int ,int ,int *,size_t,int ,void*,struct cfg80211_scan_request*) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_6, struct cfg80211_scan_request *VAR_7)
{
 struct wilc_vif *VAR_8 = FUNC_2(VAR_7->wdev->netdev);
 struct wilc_priv *VAR_9 = &VAR_8->priv;
 u32 VAR_10;
 int VAR_11 = 0;
 u8 VAR_12[VAR_4];
 u8 VAR_13;

 if (VAR_7->n_channels > VAR_4) {
  FUNC_1(VAR_8->ndev, "Requested scanned channels over\n");
  return -VAR_0;
 }

 VAR_9->scan_req = VAR_7;
 VAR_9->cfg_scanning = 1;
 for (VAR_10 = 0; VAR_10 < VAR_7->n_channels; VAR_10++) {
  u16 VAR_14 = VAR_7->channels[VAR_10]->center_freq;

  VAR_12[VAR_10] = FUNC_0(VAR_14);
 }

 if (VAR_7->n_ssids)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_2;

 VAR_11 = FUNC_3(VAR_8, VAR_3, VAR_13, VAR_12,
   VAR_7->n_channels, VAR_5, (void *)VAR_9,
   VAR_7);

 if (VAR_11) {
  VAR_9->scan_req = ((void*)0);
  VAR_9->cfg_scanning = 0;
 }

 return VAR_11;
}
