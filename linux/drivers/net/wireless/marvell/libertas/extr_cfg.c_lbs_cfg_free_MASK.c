
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ wiphy; } ;
struct lbs_private {scalar_t__ wiphy_registered; struct wireless_dev* wdev; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct lbs_private *VAR_0)
{
 struct wireless_dev *VAR_1 = VAR_0->wdev;

 if (!VAR_1)
  return;

 if (VAR_0->wiphy_registered)
  FUNC_2(VAR_1->wiphy);

 if (VAR_1->wiphy)
  FUNC_1(VAR_1->wiphy);

 FUNC_0(VAR_1);
}
