
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {char* name; int id; } ;
struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ei_device {scalar_t__ mem; } ;
struct TYPE_8__ {int * ops; } ;
struct ax_device {TYPE_2__* mii_bus; TYPE_5__ bb_ctrl; scalar_t__ addr_memr; } ;
struct TYPE_7__ {char* name; int id; int parent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct ei_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,char*,char*,int) ;
 struct ax_device* FUNC_5 (struct net_device*) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_6(VAR_4->dev.parent);
 struct ei_device *VAR_6 = FUNC_3(VAR_4);
 struct ax_device *VAR_7 = FUNC_5(VAR_4);
 int VAR_8;

 VAR_7->bb_ctrl.ops = &VAR_3;
 VAR_7->addr_memr = VAR_6->mem + VAR_0;
 VAR_7->mii_bus = FUNC_0(&VAR_7->bb_ctrl);
 if (!VAR_7->mii_bus) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7->mii_bus->name = "ax88796_mii_bus";
 VAR_7->mii_bus->parent = VAR_4->dev.parent;
 FUNC_4(VAR_7->mii_bus->id, VAR_2, "%s-%x",
   VAR_5->name, VAR_5->id);

 VAR_8 = FUNC_2(VAR_7->mii_bus);
 if (VAR_8)
  goto out_free_mdio_bitbang;

 return 0;

 out_free_mdio_bitbang:
 FUNC_1(VAR_7->mii_bus);
 out:
 return VAR_8;
}
