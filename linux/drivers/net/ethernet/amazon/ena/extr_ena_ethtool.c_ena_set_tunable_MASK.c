
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_tunable {int id; } ;
struct ena_adapter {int rx_copybreak; TYPE_1__* netdev; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;

 struct ena_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
      const struct ethtool_tunable *VAR_2,
      const void *VAR_3)
{
 struct ena_adapter *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;
 u32 VAR_6;

 switch (VAR_2->id) {
 case 128:
  VAR_6 = *(u32 *)VAR_3;
  if (VAR_6 > VAR_4->netdev->mtu) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_4->rx_copybreak = VAR_6;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
