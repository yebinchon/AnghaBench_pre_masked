
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bmac_data {int queue; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct bmac_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t
FUNC_3(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct bmac_data *VAR_3 = FUNC_1(VAR_2);
 FUNC_2(VAR_3->queue, VAR_1);
 FUNC_0(VAR_2);
 return VAR_0;
}
