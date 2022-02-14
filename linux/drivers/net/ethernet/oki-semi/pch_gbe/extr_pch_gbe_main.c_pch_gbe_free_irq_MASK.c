
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int pdev; int irq; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pch_gbe_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_1(VAR_0->pdev);
}
