
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct bmac_data {int opened; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct bmac_data* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct bmac_data *VAR_1 = FUNC_2(VAR_0);


 VAR_1->opened = 1;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->irq);
 return 0;
}
