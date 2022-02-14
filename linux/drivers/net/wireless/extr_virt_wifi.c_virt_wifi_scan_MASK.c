
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct virt_wifi_wiphy_priv {int scan_result; struct cfg80211_scan_request* scan_request; scalar_t__ being_deleted; } ;
struct cfg80211_scan_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct wiphy*,char*) ;
 struct virt_wifi_wiphy_priv* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2,
     struct cfg80211_scan_request *VAR_3)
{
 struct virt_wifi_wiphy_priv *VAR_4 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, "scan\n");

 if (VAR_4->scan_request || VAR_4->being_deleted)
  return -VAR_0;

 VAR_4->scan_request = VAR_3;
 FUNC_0(&VAR_4->scan_result, VAR_1 * 2);

 return 0;
}
