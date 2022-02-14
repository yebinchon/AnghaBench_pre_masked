
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;
struct mwifiex_private {int scan_aborting; TYPE_1__ wdev; int adapter; scalar_t__ sched_scanning; int * scan_request; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cfg80211_scan_info*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 struct mwifiex_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mwifiex_private*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_1)
{
 struct mwifiex_private *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->scan_request) {
  struct cfg80211_scan_info VAR_3 = {
   .aborted = 1,
  };

  FUNC_2(VAR_2->adapter, VAR_0,
       "aborting scan on ndo_stop\n");
  FUNC_0(VAR_2->scan_request, &VAR_3);
  VAR_2->scan_request = ((void*)0);
  VAR_2->scan_aborting = 1;
 }

 if (VAR_2->sched_scanning) {
  FUNC_2(VAR_2->adapter, VAR_0,
       "aborting bgscan on ndo_stop\n");
  FUNC_4(VAR_2);
  FUNC_1(VAR_2->wdev.wiphy, 0);
 }

 return 0;
}
