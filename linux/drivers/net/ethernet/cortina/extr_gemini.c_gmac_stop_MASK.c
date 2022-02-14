
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int phydev; } ;
struct gemini_ethernet_port {int napi; int rx_coalesce_timer; } ;


 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct gemini_ethernet_port*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct gemini_ethernet_port* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_0)
{
 struct gemini_ethernet_port *VAR_1 = FUNC_9(VAR_0);

 FUNC_7(&VAR_1->rx_coalesce_timer);
 FUNC_10(VAR_0);
 FUNC_3(VAR_0);
 FUNC_5(VAR_1);
 FUNC_8(&VAR_1->napi);

 FUNC_4(VAR_0, 0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);

 FUNC_11(VAR_0->phydev);
 FUNC_0(VAR_0->irq, VAR_0);

 FUNC_6(VAR_0);
 return 0;
}
