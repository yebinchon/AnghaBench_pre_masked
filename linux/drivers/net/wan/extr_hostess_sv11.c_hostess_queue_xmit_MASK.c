
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int chanA; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_2(struct sk_buff *VAR_0,
         struct net_device *VAR_1)
{
 return FUNC_1(&FUNC_0(VAR_1)->chanA, VAR_0);
}
