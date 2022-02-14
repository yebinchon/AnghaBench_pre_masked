
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int * phy_dev; } ;
struct net_device {int irq; } ;


 int FUNC_0 (int ,struct net_device*) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_local*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct net_local *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_4(VAR_1);
 FUNC_0(VAR_0->irq, VAR_0);

 if (VAR_1->phy_dev)
  FUNC_3(VAR_1->phy_dev);
 VAR_1->phy_dev = ((void*)0);

 return 0;
}
