
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbevf_adapter {TYPE_1__* pdev; scalar_t__ link_speed; struct net_device* netdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct ixgbevf_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 VAR_0->link_speed = 0;


 if (!FUNC_2(VAR_1))
  return;

 FUNC_0(&VAR_0->pdev->dev, "NIC Link is Down\n");

 FUNC_1(VAR_1);
}
