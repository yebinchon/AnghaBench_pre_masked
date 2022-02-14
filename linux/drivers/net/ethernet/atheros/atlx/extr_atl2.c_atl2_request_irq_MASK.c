
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct atl2_adapter {int have_msi; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct atl2_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 int VAR_4, VAR_5 = 0;

 VAR_4 = VAR_0;
 VAR_2->have_msi = 1;
 VAR_5 = FUNC_0(VAR_2->pdev);
 if (VAR_5)
  VAR_2->have_msi = 0;

 if (VAR_2->have_msi)
  VAR_4 &= ~VAR_0;

 return FUNC_1(VAR_2->pdev->irq, VAR_1, VAR_4, VAR_3->name,
  VAR_3);
}
