
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct qtnf_wmac {int scan_timeout; TYPE_1__* bus; int macid; struct cfg80211_scan_request* scan_req; } ;
struct cfg80211_scan_request {int dummy; } ;
struct TYPE_2__ {int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct qtnf_wmac*) ;
 int FUNC_4 (int ,int *,int) ;
 struct qtnf_wmac* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static int
FUNC_6(struct wiphy *VAR_2, struct cfg80211_scan_request *VAR_3)
{
 struct qtnf_wmac *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 FUNC_0(&VAR_4->scan_timeout);

 VAR_4->scan_req = VAR_3;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_2("MAC%u: failed to start scan\n", VAR_4->macid);
  VAR_4->scan_req = ((void*)0);
  goto out;
 }

 FUNC_1("MAC%u: scan started\n", VAR_4->macid);
 FUNC_4(VAR_4->bus->workqueue, &VAR_4->scan_timeout,
      VAR_1 * VAR_0);

out:
 return VAR_5;
}
