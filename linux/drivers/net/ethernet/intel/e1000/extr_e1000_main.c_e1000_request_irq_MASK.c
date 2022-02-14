
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct e1000_adapter {TYPE_1__* pdev; struct net_device* netdev; } ;
typedef int irq_handler_t ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct e1000_adapter *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 irq_handler_t VAR_5 = VAR_1;
 int VAR_6 = VAR_0;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->pdev->irq, VAR_5, VAR_6, VAR_4->name,
     VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_2, "Unable to allocate interrupt Error: %d\n", VAR_7);
 }

 return VAR_7;
}
