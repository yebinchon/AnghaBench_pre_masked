
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_5__ {int (* xmit ) (struct sk_buff*,struct net_device*) ;TYPE_1__* proto; } ;
typedef TYPE_2__ hdlc_device ;
struct TYPE_4__ {int (* xmit ) (struct sk_buff*,struct net_device*) ;} ;


 TYPE_2__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;

netdev_tx_t FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 hdlc_device *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->proto->xmit)
  return VAR_2->proto->xmit(VAR_0, VAR_1);

 return VAR_2->xmit(VAR_0, VAR_1);
}
