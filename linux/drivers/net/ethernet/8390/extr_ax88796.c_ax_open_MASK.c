
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; int phydev; int name; } ;
struct ax_device {int running; int mii_bus; int irqflags; TYPE_1__* plat; } ;
struct TYPE_2__ {scalar_t__ check_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (int ,struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,struct net_device*) ;
 struct ax_device* FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct ax_device *VAR_3 = FUNC_11(VAR_2);
 int VAR_4;

 FUNC_7(VAR_2, "open\n");

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto failed_mii;

 if (VAR_3->plat->check_irq)
  VAR_4 = FUNC_10(VAR_2->irq, VAR_1,
      VAR_3->irqflags, VAR_2->name, VAR_2);
 else
  VAR_4 = FUNC_10(VAR_2->irq, VAR_0, VAR_3->irqflags,
      VAR_2->name, VAR_2);
 if (VAR_4)
  goto failed_request_irq;


 FUNC_3(VAR_2, 1);

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto failed_mii_probe;
 FUNC_9(VAR_2->phydev);

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto failed_ax_ei_open;

 VAR_3->running = 1;

 return 0;

 failed_ax_ei_open:
 FUNC_8(VAR_2->phydev);
 failed_mii_probe:
 FUNC_3(VAR_2, 0);
 FUNC_4(VAR_2->irq, VAR_2);
 failed_request_irq:

 FUNC_6(VAR_3->mii_bus);
 FUNC_5(VAR_3->mii_bus);
 failed_mii:
 return VAR_4;
}
