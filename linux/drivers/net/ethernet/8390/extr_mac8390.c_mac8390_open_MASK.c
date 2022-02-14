
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_1->irq, VAR_0, 0, "8390 Ethernet", VAR_1);
 if (VAR_2)
  FUNC_1("%s: unable to get IRQ %d\n", VAR_1->name, VAR_1->irq);
 return VAR_2;
}
