
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfg80211_scan_info {int aborted; } ;
struct ath6kl_vif {int nw_type; int* bssid; int * scan_req; int disconnect_timer; int flags; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath6kl_vif*,int) ;
 int FUNC_1 (struct ath6kl_vif*) ;
 int FUNC_2 (struct ath6kl_vif*,int ,int*,int ,int *,int ) ;
 int FUNC_3 (int *,struct cfg80211_scan_info*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct ath6kl_vif *VAR_5, bool VAR_6)
{
 static u8 VAR_7[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
 bool VAR_8;

 FUNC_6(VAR_5->ndev);

 FUNC_4(VAR_4, &VAR_5->flags);

 if (VAR_6) {
  VAR_8 = FUNC_7(VAR_1, &VAR_5->flags) ||
    FUNC_7(VAR_2, &VAR_5->flags);
  FUNC_1(VAR_5);
  FUNC_5(&VAR_5->disconnect_timer);

  if (VAR_8)
   FUNC_2(VAR_5, VAR_3,
      (VAR_5->nw_type & VAR_0) ?
      VAR_7 : VAR_5->bssid,
      0, ((void*)0), 0);
 }

 if (VAR_5->scan_req) {
  struct cfg80211_scan_info VAR_9 = {
   .aborted = 1,
  };

  FUNC_3(VAR_5->scan_req, &VAR_9);
  VAR_5->scan_req = ((void*)0);
 }


 FUNC_0(VAR_5, 0);
}
