
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct macvlan_dev {struct net_device* lowerdev; TYPE_1__* port; int mc_filter; } ;
struct TYPE_2__ {int mc_filter; } ;


 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (int ,struct net_device*,struct macvlan_dev*) ;
 struct macvlan_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct macvlan_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->mc_filter, VAR_0, VAR_1);

 FUNC_1(VAR_1->lowerdev, VAR_0);
 FUNC_0(VAR_1->lowerdev, VAR_0);
 FUNC_2(VAR_1->port->mc_filter, VAR_1->lowerdev, ((void*)0));
}
