
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct orinoco_private {struct cfg80211_scan_request* scan_request; } ;
struct cfg80211_scan_request {int ssids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct orinoco_private*,int ) ;
 struct orinoco_private* FUNC_1 (struct wiphy*) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_2,
   struct cfg80211_scan_request *VAR_3)
{
 struct orinoco_private *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (!VAR_3)
  return -VAR_1;

 if (VAR_4->scan_request && VAR_4->scan_request != VAR_3)
  return -VAR_0;

 VAR_4->scan_request = VAR_3;

 VAR_5 = FUNC_0(VAR_4, VAR_3->ssids);

 if (VAR_5)
  VAR_4->scan_request = ((void*)0);

 return VAR_5;
}
