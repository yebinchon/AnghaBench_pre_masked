
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbevf_adapter {scalar_t__ link_speed; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;


 if (FUNC_1(VAR_4))
  return;

 FUNC_0(&VAR_3->pdev->dev, "NIC Link is Up %s\n",
   (VAR_3->link_speed == VAR_1) ?
   "10 Gbps" :
   (VAR_3->link_speed == VAR_2) ?
   "1 Gbps" :
   (VAR_3->link_speed == VAR_0) ?
   "100 Mbps" :
   "unknown speed");

 FUNC_2(VAR_4);
}
