
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct ioc3_private {int ioc3_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct ioc3_private*) ;
 int FUNC_3 (struct ioc3_private*) ;
 int FUNC_4 (struct ioc3_private*) ;
 struct ioc3_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct ioc3_private *VAR_1 = FUNC_5(VAR_0);

 FUNC_0(&VAR_1->ioc3_timer);

 FUNC_6(VAR_0);

 FUNC_4(VAR_1);
 FUNC_1(VAR_0->irq, VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
