
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int tx_dropped; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 FUNC_0(&VAR_2->tx_dropped);
 FUNC_1(VAR_1);
 return VAR_0;
}
