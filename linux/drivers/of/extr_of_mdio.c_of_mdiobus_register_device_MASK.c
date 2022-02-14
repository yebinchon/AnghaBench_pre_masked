
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mii_bus {int dev; } ;
struct TYPE_2__ {int fwnode; struct device_node* of_node; } ;
struct mdio_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct mdio_device*) ;
 int FUNC_1 (struct mdio_device*) ;
 int FUNC_2 (int *,char*,struct device_node*,int ) ;
 struct mdio_device* FUNC_3 (struct mii_bus*,int ) ;
 int FUNC_4 (struct mdio_device*) ;
 int FUNC_5 (struct mdio_device*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;

__attribute__((used)) static int FUNC_9(struct mii_bus *VAR_0,
          struct device_node *VAR_1, u32 VAR_2)
{
 struct mdio_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);




 FUNC_7(VAR_1);
 VAR_3->dev.of_node = VAR_1;
 VAR_3->dev.fwnode = FUNC_6(VAR_1);


 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_4(VAR_3);
  FUNC_8(VAR_1);
  return VAR_4;
 }

 FUNC_2(&VAR_0->dev, "registered mdio device %pOFn at address %i\n",
  VAR_1, VAR_2);
 return 0;
}
