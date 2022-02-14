
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct dlci_local {int slave; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 struct dlci_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,int ,struct netdev_queue*,int) ;
 struct netdev_queue* FUNC_2 (struct net_device*,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct dlci_local *VAR_3 = FUNC_0(VAR_2);

 if (VAR_1) {
  struct netdev_queue *VAR_4 = FUNC_2(VAR_2, VAR_1);
  FUNC_1(VAR_1, VAR_3->slave, VAR_4, 0);
 }
 return VAR_0;
}
