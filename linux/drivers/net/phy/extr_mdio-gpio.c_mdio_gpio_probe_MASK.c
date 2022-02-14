
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct mii_bus {int dummy; } ;
struct mdio_gpio_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct mdio_gpio_info* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 struct mii_bus* FUNC_3 (TYPE_1__*,struct mdio_gpio_info*,int) ;
 int FUNC_4 (TYPE_1__*,struct mdio_gpio_info*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct mii_bus*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct mdio_gpio_info *VAR_4;
 struct mii_bus *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_4(&VAR_3->dev, VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_3->dev.of_node) {
  VAR_7 = FUNC_5(VAR_3->dev.of_node, "mdio-gpio");
  if (VAR_7 < 0) {
   FUNC_0(&VAR_3->dev, "failed to get alias id\n");
   VAR_7 = 0;
  }
 } else {
  VAR_7 = VAR_3->id;
 }

 VAR_5 = FUNC_3(&VAR_3->dev, VAR_4, VAR_7);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_5, VAR_3->dev.of_node);
 if (VAR_6)
  FUNC_2(&VAR_3->dev);

 return VAR_6;
}
