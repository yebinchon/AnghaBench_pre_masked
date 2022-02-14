
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gbe_intf {int dev; struct gbe_intf* slave; int gbe_intf_list; TYPE_1__* ndev; } ;
struct TYPE_2__ {int * ethtool_ops; } ;


 int FUNC_0 (int ,struct gbe_intf*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct gbe_intf *VAR_1 = VAR_0;

 VAR_1->ndev->ethtool_ops = ((void*)0);
 FUNC_1(&VAR_1->gbe_intf_list);
 FUNC_0(VAR_1->dev, VAR_1->slave);
 FUNC_0(VAR_1->dev, VAR_1);
 return 0;
}
