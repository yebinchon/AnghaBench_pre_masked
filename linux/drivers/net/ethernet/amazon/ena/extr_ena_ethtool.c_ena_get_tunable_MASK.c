
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_tunable {int id; } ;
struct ena_adapter {int rx_copybreak; } ;


 int VAR_0 ;

 struct ena_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
      const struct ethtool_tunable *VAR_2, void *VAR_3)
{
 struct ena_adapter *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->id) {
 case 128:
  *(u32 *)VAR_3 = VAR_4->rx_copybreak;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
