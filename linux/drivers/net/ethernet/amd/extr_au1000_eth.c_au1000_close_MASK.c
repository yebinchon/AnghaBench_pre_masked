
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; scalar_t__ phydev; } ;
struct au1000_private {int lock; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct net_device*) ;
 struct au1000_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct au1000_private* const,int ,struct net_device*,char*,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 unsigned long VAR_2;
 struct au1000_private *const VAR_3 = FUNC_2(VAR_1);

 FUNC_3(VAR_3, VAR_0, VAR_1, "close: dev=%p\n", VAR_1);

 if (VAR_1->phydev)
  FUNC_5(VAR_1->phydev);

 FUNC_6(&VAR_3->lock, VAR_2);

 FUNC_0(VAR_1);


 FUNC_4(VAR_1);


 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_7(&VAR_3->lock, VAR_2);

 return 0;
}
