
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mii_bus {char* name; TYPE_1__* parent; int phy_mask; } ;
struct TYPE_4__ {int * ops; } ;
struct bb_info {int dir; TYPE_2__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mii_bus* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct mii_bus*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bb_info*) ;
 struct bb_info* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mii_bus*,int ) ;
 int FUNC_7 (struct platform_device*,struct mii_bus*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct mii_bus *VAR_4;
 struct bb_info *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_5(sizeof(struct bb_info), VAR_1);
 if (!VAR_5)
  goto out;

 VAR_5->ctrl.ops = &VAR_2;

 VAR_4 = FUNC_0(&VAR_5->ctrl);
 if (!VAR_4)
  goto out_free_priv;

 VAR_4->name = "CPM2 Bitbanged MII",

 VAR_6 = FUNC_2(VAR_4, VAR_3->dev.of_node);
 if (VAR_6)
  goto out_free_bus;

 VAR_4->phy_mask = ~0;

 VAR_4->parent = &VAR_3->dev;
 FUNC_7(VAR_3, VAR_4);

 VAR_6 = FUNC_6(VAR_4, VAR_3->dev.of_node);
 if (VAR_6)
  goto out_unmap_regs;

 return 0;

out_unmap_regs:
 FUNC_3(VAR_5->dir);
out_free_bus:
 FUNC_1(VAR_4);
out_free_priv:
 FUNC_4(VAR_5);
out:
 return VAR_6;
}
