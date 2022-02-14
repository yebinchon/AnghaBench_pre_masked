
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int * scan_req; scalar_t__ internal_scan; } ;
struct cfg80211_scan_info {int aborted; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct cfg80211_scan_info*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct lbs_private *VAR_0)
{
 FUNC_0(!VAR_0->scan_req);

 if (VAR_0->internal_scan) {
  FUNC_2(VAR_0->scan_req);
 } else {
  struct cfg80211_scan_info VAR_1 = {
   .aborted = 0,
  };

  FUNC_1(VAR_0->scan_req, &VAR_1);
 }

 VAR_0->scan_req = ((void*)0);
}
