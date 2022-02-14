
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int internal_scan; int scan_work; int work_thread; struct cfg80211_scan_request* scan_req; scalar_t__ scan_channel; } ;
struct cfg80211_scan_request {int ie_len; int n_channels; int n_ssids; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct lbs_private *VAR_0, bool VAR_1,
 struct cfg80211_scan_request *VAR_2)
{
 FUNC_0("scan: ssids %d, channels %d, ie_len %zd\n",
  VAR_2->n_ssids, VAR_2->n_channels, VAR_2->ie_len);

 VAR_0->scan_channel = 0;
 VAR_0->scan_req = VAR_2;
 VAR_0->internal_scan = VAR_1;

 FUNC_2(VAR_0->work_thread, &VAR_0->scan_work,
  FUNC_1(50));
}
