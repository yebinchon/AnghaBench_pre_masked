
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_2__* dev; } ;
struct net_device_ops {int (* ndo_neigh_setup ) (TYPE_2__*,struct neigh_parms*) ;} ;
struct neighbour {TYPE_1__* parms; int dev; } ;
struct neigh_parms {int (* neigh_setup ) (struct neighbour*) ;int * neigh_cleanup; } ;
struct bonding {int dummy; } ;
struct TYPE_4__ {struct net_device_ops* netdev_ops; } ;
struct TYPE_3__ {int * neigh_cleanup; } ;


 struct slave* FUNC_0 (struct bonding*) ;
 struct bonding* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,struct neigh_parms*) ;
 int FUNC_3 (struct neighbour*) ;

__attribute__((used)) static int FUNC_4(struct neighbour *VAR_0)
{
 struct bonding *VAR_1 = FUNC_1(VAR_0->dev);
 const struct net_device_ops *VAR_2;
 struct neigh_parms VAR_3;
 struct slave *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return 0;
 VAR_2 = VAR_4->dev->netdev_ops;
 if (!VAR_2->ndo_neigh_setup)
  return 0;

 VAR_3.neigh_setup = ((void*)0);
 VAR_3.neigh_cleanup = ((void*)0);
 VAR_5 = VAR_2->ndo_neigh_setup(VAR_4->dev, &VAR_3);
 if (VAR_5)
  return VAR_5;






 VAR_0->parms->neigh_cleanup = VAR_3.neigh_cleanup;

 if (!VAR_3.neigh_setup)
  return 0;

 return VAR_3.neigh_setup(VAR_0);
}
