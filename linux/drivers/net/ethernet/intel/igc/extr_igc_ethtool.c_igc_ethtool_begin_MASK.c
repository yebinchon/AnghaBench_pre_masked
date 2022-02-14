
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct igc_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 struct igc_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct igc_adapter *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->pdev->dev);
 return 0;
}
