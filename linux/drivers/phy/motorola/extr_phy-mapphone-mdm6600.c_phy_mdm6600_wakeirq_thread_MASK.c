
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_mdm6600 {int dev; TYPE_1__* mode_gpios; } ;
struct gpio_desc {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct gpio_desc** desc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct gpio_desc*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct phy_mdm6600 *VAR_4 = VAR_3;
 struct gpio_desc *VAR_5;

 VAR_5 = VAR_4->mode_gpios->desc[VAR_1];
 FUNC_0(VAR_4->dev, "OOB wake on mode_gpio1: %i\n",
  FUNC_1(VAR_5));

 return VAR_0;
}
