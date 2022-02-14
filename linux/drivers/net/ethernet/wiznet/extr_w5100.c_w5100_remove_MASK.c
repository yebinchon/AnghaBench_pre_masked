
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w5100_priv {int xfer_wq; int restart_work; int setrx_work; int link_irq; int link_gpio; int irq; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct w5100_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct w5100_priv*) ;

int FUNC_9(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_1(VAR_0);
 struct w5100_priv *VAR_2 = FUNC_6(VAR_1);

 FUNC_8(VAR_2);
 FUNC_3(VAR_2->irq, VAR_1);
 if (FUNC_5(VAR_2->link_gpio))
  FUNC_3(VAR_2->link_irq, VAR_1);

 FUNC_2(&VAR_2->setrx_work);
 FUNC_2(&VAR_2->restart_work);
 FUNC_0(VAR_2->xfer_wq);

 FUNC_7(VAR_1);
 FUNC_4(VAR_1);
 return 0;
}
