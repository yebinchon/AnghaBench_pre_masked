
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct lbs_private {scalar_t__ surpriseremoved; int scan_work; scalar_t__ scan_req; } ;
struct cfg80211_scan_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lbs_private*,int,struct cfg80211_scan_request*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct lbs_private* FUNC_2 (struct wiphy*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_2,
 struct cfg80211_scan_request *VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;

 if (VAR_4->scan_req || FUNC_1(&VAR_4->scan_work)) {

  VAR_5 = -VAR_0;
  goto out;
 }

 FUNC_0(VAR_4, 0, VAR_3);

 if (VAR_4->surpriseremoved)
  VAR_5 = -VAR_1;

 out:
 return VAR_5;
}
