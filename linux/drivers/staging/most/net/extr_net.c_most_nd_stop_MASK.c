
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_6__ {int ch_id; } ;
struct TYPE_5__ {int ch_id; } ;
struct net_dev_context {TYPE_2__ tx; TYPE_3__* iface; TYPE_1__ rx; } ;
struct TYPE_7__ {int (* request_netinfo ) (TYPE_3__*,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int *) ;
 struct net_dev_context* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct net_dev_context *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1);
 if (VAR_2->iface->request_netinfo)
  VAR_2->iface->request_netinfo(VAR_2->iface, VAR_2->tx.ch_id, ((void*)0));
 FUNC_0(VAR_2->iface, VAR_2->rx.ch_id, &VAR_0);
 FUNC_0(VAR_2->iface, VAR_2->tx.ch_id, &VAR_0);

 return 0;
}
