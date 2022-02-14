
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; } ;
struct atmel_private {scalar_t__ bus_type; int firmware; int management_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct atmel_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (struct net_device*) ;

void FUNC_9(struct net_device *VAR_2)
{
 struct atmel_private *VAR_3 = FUNC_5(VAR_2);


 if (VAR_3->bus_type == VAR_0)
  FUNC_0(VAR_2, VAR_1, 0x0060);
 FUNC_0(VAR_2, VAR_1, 0x0040);

 FUNC_1(&VAR_3->management_timer);
 FUNC_8(VAR_2);
 FUNC_7("driver/atmel", ((void*)0));
 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_4(VAR_3->firmware);
 FUNC_6(VAR_2->base_addr, 32);
 FUNC_3(VAR_2);
}
