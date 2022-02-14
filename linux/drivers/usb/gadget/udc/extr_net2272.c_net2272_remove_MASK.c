
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net2272 {int dev; int base_addr; int irq; int gadget; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct net2272*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct net2272 *VAR_1)
{
 FUNC_4(&VAR_1->gadget);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_3(VAR_1->base_addr);
 FUNC_1(VAR_1->dev, &VAR_0);

 FUNC_0(VAR_1->dev, "unbind\n");
}
