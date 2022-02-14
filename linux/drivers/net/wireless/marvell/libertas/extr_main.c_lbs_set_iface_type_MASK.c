
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {TYPE_1__* wdev; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int const iftype; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct lbs_private*,int) ;
 int FUNC_1 (struct lbs_private*,int ,int) ;

int FUNC_2(struct lbs_private *VAR_2, enum nl80211_iftype VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_0(VAR_2, 1);
  break;
 case 128:
  if (VAR_2->wdev->iftype == 129)
   VAR_4 = FUNC_0(VAR_2, 0);
  if (!VAR_4)
   VAR_4 = FUNC_1(VAR_2, VAR_1, 1);
  break;
 case 130:
  if (VAR_2->wdev->iftype == 129)
   VAR_4 = FUNC_0(VAR_2, 0);
  if (!VAR_4)
   VAR_4 = FUNC_1(VAR_2, VAR_1, 2);
  break;
 default:
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
