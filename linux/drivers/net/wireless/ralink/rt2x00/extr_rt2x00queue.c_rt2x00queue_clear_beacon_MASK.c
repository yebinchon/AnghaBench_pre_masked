
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00_intf {int beacon; } ;
struct rt2x00_dev {TYPE_2__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* clear_beacon ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct rt2x00_intf* FUNC_3 (struct ieee80211_vif*) ;

int FUNC_4(struct rt2x00_dev *VAR_1,
        struct ieee80211_vif *VAR_2)
{
 struct rt2x00_intf *VAR_3 = FUNC_3(VAR_2);

 if (FUNC_2(!VAR_3->beacon))
  return -VAR_0;




 FUNC_0(VAR_3->beacon);





 if (VAR_1->ops->lib->clear_beacon)
  VAR_1->ops->lib->clear_beacon(VAR_3->beacon);

 return 0;
}
