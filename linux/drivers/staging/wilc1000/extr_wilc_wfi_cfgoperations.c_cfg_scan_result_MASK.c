
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct wilc_rcvd_net_info {scalar_t__ rssi; int frame_len; int mgmt; scalar_t__ ch; } ;
struct wilc_priv {int cfg_scanning; int scan_req_lock; int * scan_req; TYPE_2__* dev; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_scan_info {int aborted; } ;
struct cfg80211_bss {int dummy; } ;
typedef int s32 ;
typedef enum scan_event { ____Placeholder_scan_event } scan_event ;
struct TYPE_4__ {TYPE_1__* ieee80211_ptr; } ;
struct TYPE_3__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cfg80211_bss* FUNC_0 (struct wiphy*,struct ieee80211_channel*,int ,int ,int,int ) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_bss*) ;
 int FUNC_2 (int *,struct cfg80211_scan_info*) ;
 int FUNC_3 (int,int ) ;
 struct ieee80211_channel* FUNC_4 (struct wiphy*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(enum scan_event VAR_5,
       struct wilc_rcvd_net_info *VAR_6, void *VAR_7)
{
 struct wilc_priv *VAR_8 = VAR_7;

 if (!VAR_8->cfg_scanning)
  return;

 if (VAR_5 == VAR_4) {
  s32 VAR_9;
  struct ieee80211_channel *VAR_10;
  struct cfg80211_bss *VAR_11;
  struct wiphy *VAR_12 = VAR_8->dev->ieee80211_ptr->wiphy;

  if (!VAR_12 || !VAR_6)
   return;

  VAR_9 = FUNC_3((s32)VAR_6->ch,
            VAR_1);
  VAR_10 = FUNC_4(VAR_12, VAR_9);
  if (!VAR_10)
   return;

  VAR_11 = FUNC_0(VAR_12, VAR_10, VAR_6->mgmt,
      VAR_6->frame_len,
      (s32)VAR_6->rssi * 100,
      VAR_0);
  if (!VAR_11)
   FUNC_1(VAR_12, VAR_11);
 } else if (VAR_5 == VAR_3) {
  FUNC_5(&VAR_8->scan_req_lock);

  if (VAR_8->scan_req) {
   struct cfg80211_scan_info VAR_13 = {
    .aborted = 0,
   };

   FUNC_2(VAR_8->scan_req, &VAR_13);
   VAR_8->cfg_scanning = 0;
   VAR_8->scan_req = ((void*)0);
  }
  FUNC_6(&VAR_8->scan_req_lock);
 } else if (VAR_5 == VAR_2) {
  FUNC_5(&VAR_8->scan_req_lock);

  if (VAR_8->scan_req) {
   struct cfg80211_scan_info VAR_14 = {
    .aborted = 0,
   };

   FUNC_2(VAR_8->scan_req, &VAR_14);
   VAR_8->cfg_scanning = 0;
   VAR_8->scan_req = ((void*)0);
  }
  FUNC_6(&VAR_8->scan_req_lock);
 }
}
