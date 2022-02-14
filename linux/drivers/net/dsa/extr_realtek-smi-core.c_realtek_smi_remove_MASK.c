
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct realtek_smi {int reset; TYPE_2__* slave_mii_bus; int ds; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct realtek_smi* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct realtek_smi *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->ds);
 if (VAR_1->slave_mii_bus)
  FUNC_3(VAR_1->slave_mii_bus->dev.of_node);
 FUNC_2(VAR_1->reset, 1);

 return 0;
}
