
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int phydev; } ;
struct ax_device {int mii_bus; scalar_t__ running; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (int ) ;
 struct ax_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct ax_device *VAR_1 = FUNC_7(VAR_0);

 FUNC_5(VAR_0, "close\n");

 VAR_1->running = 0;
 FUNC_8();

 FUNC_0(VAR_0);


 FUNC_1(VAR_0, 0);
 FUNC_6(VAR_0->phydev);

 FUNC_2(VAR_0->irq, VAR_0);

 FUNC_4(VAR_1->mii_bus);
 FUNC_3(VAR_1->mii_bus);
 return 0;
}
