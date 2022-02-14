
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {char* name; int phy_ignore_ta_mask; int phy_mask; int id; struct device* parent; } ;
struct mdio_gpio_platform_data {int phy_ignore_ta_mask; int phy_mask; } ;
struct TYPE_2__ {int * ops; } ;
struct mdio_gpio_info {TYPE_1__ ctrl; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mii_bus* FUNC_0 (TYPE_1__*) ;
 struct mdio_gpio_platform_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,struct mii_bus*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static struct mii_bus *FUNC_5(struct device *VAR_2,
       struct mdio_gpio_info *VAR_3,
       int VAR_4)
{
 struct mdio_gpio_platform_data *VAR_5 = FUNC_1(VAR_2);
 struct mii_bus *VAR_6;

 VAR_3->ctrl.ops = &VAR_1;

 VAR_6 = FUNC_0(&VAR_3->ctrl);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->name = "GPIO Bitbanged MDIO";
 VAR_6->parent = VAR_2;

 if (VAR_4 != -1)
  FUNC_3(VAR_6->id, VAR_0, "gpio-%x", VAR_4);
 else
  FUNC_4(VAR_6->id, "gpio", VAR_0);

 if (VAR_5) {
  VAR_6->phy_mask = VAR_5->phy_mask;
  VAR_6->phy_ignore_ta_mask = VAR_5->phy_ignore_ta_mask;
 }

 FUNC_2(VAR_2, VAR_6);

 return VAR_6;
}
