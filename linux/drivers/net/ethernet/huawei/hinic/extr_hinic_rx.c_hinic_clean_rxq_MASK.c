
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct hinic_rxq {int irq_name; struct net_device* netdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hinic_rxq*) ;
 int FUNC_2 (struct hinic_rxq*) ;

void FUNC_3(struct hinic_rxq *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_2(VAR_0);

 FUNC_1(VAR_0);
 FUNC_0(&VAR_1->dev, VAR_0->irq_name);
}
