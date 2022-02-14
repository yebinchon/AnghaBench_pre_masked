
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct igb_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 struct igb_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct igb_adapter *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->pdev->dev);
}
