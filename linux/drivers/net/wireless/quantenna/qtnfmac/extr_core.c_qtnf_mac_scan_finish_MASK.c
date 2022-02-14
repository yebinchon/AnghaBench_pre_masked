
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_wmac {int mac_lock; int * scan_req; } ;
struct cfg80211_scan_info {int aborted; } ;


 int FUNC_0 (int *,struct cfg80211_scan_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qtnf_wmac *VAR_0, bool VAR_1)
{
 struct cfg80211_scan_info VAR_2 = {
  .aborted = VAR_1,
 };

 FUNC_1(&VAR_0->mac_lock);

 if (VAR_0->scan_req) {
  FUNC_0(VAR_0->scan_req, &VAR_2);
  VAR_0->scan_req = ((void*)0);
 }

 FUNC_2(&VAR_0->mac_lock);
}
