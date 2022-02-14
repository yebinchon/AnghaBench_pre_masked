
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct e1000_adapter {int itr_setting; int itr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_adapter*,int) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
         struct ethtool_coalesce *VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_1(VAR_3);

 if ((VAR_4->rx_coalesce_usecs > VAR_0) ||
     ((VAR_4->rx_coalesce_usecs > 4) &&
      (VAR_4->rx_coalesce_usecs < VAR_1)) ||
     (VAR_4->rx_coalesce_usecs == 2))
  return -VAR_2;

 if (VAR_4->rx_coalesce_usecs == 4) {
  VAR_5->itr_setting = 4;
  VAR_5->itr = VAR_5->itr_setting;
 } else if (VAR_4->rx_coalesce_usecs <= 3) {
  VAR_5->itr = 20000;
  VAR_5->itr_setting = VAR_4->rx_coalesce_usecs;
 } else {
  VAR_5->itr = (1000000 / VAR_4->rx_coalesce_usecs);
  VAR_5->itr_setting = VAR_5->itr & ~3;
 }

 FUNC_2(VAR_3->dev.parent);

 if (VAR_5->itr_setting != 0)
  FUNC_0(VAR_5, VAR_5->itr);
 else
  FUNC_0(VAR_5, 0);

 FUNC_3(VAR_3->dev.parent);

 return 0;
}
