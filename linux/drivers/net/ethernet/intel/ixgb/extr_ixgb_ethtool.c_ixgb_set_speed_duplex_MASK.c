
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgb_adapter {int link_speed; int link_duplex; } ;


 int VAR_0 ;
 struct ixgb_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct ixgb_adapter *VAR_2 = FUNC_0(VAR_1);

 VAR_2->link_speed = 10000;
 VAR_2->link_duplex = VAR_0;
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
}
