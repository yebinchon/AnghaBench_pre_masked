
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc35815_local {int restart_work; int napi; } ;
struct net_device {int irq; scalar_t__ phydev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 struct tc35815_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_0)
{
 struct tc35815_local *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0);
 FUNC_2(&VAR_1->napi);
 if (VAR_0->phydev)
  FUNC_5(VAR_0->phydev);
 FUNC_0(&VAR_1->restart_work);


 FUNC_6(VAR_0);
 FUNC_1(VAR_0->irq, VAR_0);

 FUNC_7(VAR_0);

 return 0;

}
