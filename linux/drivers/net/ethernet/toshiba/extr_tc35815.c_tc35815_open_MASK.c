
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc35815_local {int lock; int napi; } ;
struct net_device {int phydev; int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct tc35815_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_3)
{
 struct tc35815_local *VAR_4 = FUNC_2(VAR_3);





 if (FUNC_6(VAR_3->irq, VAR_2, VAR_1,
   VAR_3->name, VAR_3))
  return -VAR_0;

 FUNC_10(VAR_3);

 if (FUNC_11(VAR_3) != 0) {
  FUNC_0(VAR_3->irq, VAR_3);
  return -VAR_0;
 }

 FUNC_1(&VAR_4->napi);


 FUNC_7(&VAR_4->lock);
 FUNC_9(VAR_3);
 FUNC_8(&VAR_4->lock);

 FUNC_3(VAR_3);

 FUNC_5(VAR_3->phydev);




 FUNC_4(VAR_3);

 return 0;
}
