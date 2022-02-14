
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct fixed_phy_status {int dummy; } ;
struct fixed_phy {int addr; int node; struct gpio_desc* link_gpiod; struct fixed_phy_status status; int seqcount; } ;
struct fixed_mdio_bus {int phys; TYPE_1__* mii_bus; } ;
struct TYPE_2__ {unsigned int* irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct fixed_phy*) ;
 struct fixed_phy* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct fixed_mdio_bus VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fixed_phy_status*) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_4, int VAR_5,
          struct fixed_phy_status *VAR_6,
          struct gpio_desc *VAR_7)
{
 int VAR_8;
 struct fixed_mdio_bus *VAR_9 = &VAR_3;
 struct fixed_phy *VAR_10;

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_3(&VAR_10->seqcount);

 if (VAR_4 != VAR_2)
  VAR_9->mii_bus->irq[VAR_5] = VAR_4;

 VAR_10->addr = VAR_5;
 VAR_10->status = *VAR_6;
 VAR_10->link_gpiod = VAR_7;

 FUNC_0(VAR_10);

 FUNC_2(&VAR_10->node, &VAR_9->phys);

 return 0;
}
