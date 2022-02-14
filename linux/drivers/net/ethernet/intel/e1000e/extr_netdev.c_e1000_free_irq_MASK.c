
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct e1000_adapter {TYPE_1__* pdev; TYPE_2__* msix_entries; struct net_device* netdev; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int ,struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct e1000_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 if (VAR_0->msix_entries) {
  int VAR_2 = 0;

  FUNC_0(VAR_0->msix_entries[VAR_2].vector, VAR_1);
  VAR_2++;

  FUNC_0(VAR_0->msix_entries[VAR_2].vector, VAR_1);
  VAR_2++;


  FUNC_0(VAR_0->msix_entries[VAR_2].vector, VAR_1);
  return;
 }

 FUNC_0(VAR_0->pdev->irq, VAR_1);
}
