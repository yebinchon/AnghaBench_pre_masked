
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct panel_drv_data {int in; int reset_gpio; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct panel_drv_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_3(&VAR_0->dev);
 struct device_node *VAR_2 = VAR_0->dev.of_node;

 VAR_1->reset_gpio = FUNC_4(VAR_2, "reset-gpios", 0);

 VAR_1->in = FUNC_5(VAR_2);
 if (FUNC_0(VAR_1->in)) {
  FUNC_2(&VAR_0->dev, "failed to find video source\n");
  return FUNC_1(VAR_1->in);
 }

 return 0;
}
