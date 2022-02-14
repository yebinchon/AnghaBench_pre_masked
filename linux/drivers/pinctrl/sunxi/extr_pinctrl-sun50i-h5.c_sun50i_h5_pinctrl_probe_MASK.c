
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 switch (FUNC_1(VAR_3->dev.of_node)) {
 case 2:
  FUNC_0(&VAR_3->dev,
    "Your device tree's pinctrl node is broken, which has no IRQ of PG bank routed.\n");
  FUNC_0(&VAR_3->dev,
    "Please update the device tree, otherwise PG bank IRQ won't work.\n");
  return FUNC_2(VAR_3,
       &VAR_2);
 case 3:
  return FUNC_2(VAR_3,
       &VAR_1);
 default:
  return -VAR_0;
 }
}
