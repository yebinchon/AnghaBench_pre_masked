
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct atl1c_adapter {TYPE_1__* pdev; scalar_t__ have_msi; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct atl1c_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_0(VAR_0->pdev->irq, VAR_1);

 if (VAR_0->have_msi)
  FUNC_1(VAR_0->pdev);
}
