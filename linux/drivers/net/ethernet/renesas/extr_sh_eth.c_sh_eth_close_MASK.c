
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {int irq_enabled; scalar_t__ is_opened; TYPE_1__* pdev; int napi; } ;
struct net_device {int irq; scalar_t__ phydev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct sh_eth_private *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);





 VAR_2->irq_enabled = 0;
 FUNC_10(VAR_1->irq);
 FUNC_1(&VAR_2->napi);
 FUNC_9(VAR_1, 0x0000, VAR_0);

 FUNC_7(VAR_1);


 if (VAR_1->phydev) {
  FUNC_5(VAR_1->phydev);
  FUNC_4(VAR_1->phydev);
 }

 FUNC_0(VAR_1->irq, VAR_1);


 FUNC_8(VAR_1);

 FUNC_6(&VAR_2->pdev->dev);

 VAR_2->is_opened = 0;

 return 0;
}
