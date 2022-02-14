
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_eth_private {TYPE_1__* mii_bus; scalar_t__* reg_offset; scalar_t__ addr; struct platform_device* pdev; } ;
struct sh_eth_plat_data {scalar_t__ phy_irq; size_t phy; int set_mdio_gate; } ;
struct device {int of_node; } ;
struct platform_device {char* name; int id; struct device dev; } ;
struct TYPE_6__ {int * ops; } ;
struct bb_info {TYPE_4__ ctrl; int set_gate; scalar_t__ addr; } ;
struct TYPE_5__ {char* name; scalar_t__* irq; int id; struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_4__*) ;
 int VAR_4 ;
 struct bb_info* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct sh_eth_private *VAR_5,
   struct sh_eth_plat_data *VAR_6)
{
 int VAR_7;
 struct bb_info *VAR_8;
 struct platform_device *VAR_9 = VAR_5->pdev;
 struct device *VAR_10 = &VAR_5->pdev->dev;


 VAR_8 = FUNC_1(VAR_10, sizeof(struct bb_info), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 VAR_8->addr = VAR_5->addr + VAR_5->reg_offset[VAR_3];
 VAR_8->set_gate = VAR_6->set_mdio_gate;
 VAR_8->ctrl.ops = &VAR_4;


 VAR_5->mii_bus = FUNC_0(&VAR_8->ctrl);
 if (!VAR_5->mii_bus)
  return -VAR_0;


 VAR_5->mii_bus->name = "sh_mii";
 VAR_5->mii_bus->parent = VAR_10;
 FUNC_4(VAR_5->mii_bus->id, VAR_2, "%s-%x",
   VAR_9->name, VAR_9->id);


 if (VAR_6->phy_irq > 0)
  VAR_5->mii_bus->irq[VAR_6->phy] = VAR_6->phy_irq;

 VAR_7 = FUNC_3(VAR_5->mii_bus, VAR_10->of_node);
 if (VAR_7)
  goto out_free_bus;

 return 0;

out_free_bus:
 FUNC_2(VAR_5->mii_bus);
 return VAR_7;
}
