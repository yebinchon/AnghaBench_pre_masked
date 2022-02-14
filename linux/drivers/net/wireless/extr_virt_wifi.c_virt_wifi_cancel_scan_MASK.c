
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct virt_wifi_wiphy_priv {int * scan_request; int scan_result; } ;
struct cfg80211_scan_info {int aborted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cfg80211_scan_info*) ;
 struct virt_wifi_wiphy_priv* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static void FUNC_3(struct wiphy *VAR_0)
{
 struct virt_wifi_wiphy_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->scan_result);

 if (VAR_1->scan_request) {
  struct cfg80211_scan_info VAR_2 = { .aborted = 1 };

  FUNC_1(VAR_1->scan_request, &VAR_2);
  VAR_1->scan_request = ((void*)0);
 }
}
