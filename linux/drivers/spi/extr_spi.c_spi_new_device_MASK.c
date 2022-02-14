
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* platform_data; } ;
struct spi_device {TYPE_1__ dev; int * controller_state; int controller_data; int modalias; int irq; int mode; int max_speed_hz; int chip_select; } ;
struct spi_controller {int dev; } ;
struct spi_board_info {int properties; int modalias; int controller_data; scalar_t__ platform_data; int irq; int mode; int max_speed_hz; int chip_select; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct spi_device*) ;
 struct spi_device* FUNC_5 (struct spi_controller*) ;
 int FUNC_6 (struct spi_device*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ) ;

struct spi_device *FUNC_9(struct spi_controller *VAR_0,
      struct spi_board_info *VAR_1)
{
 struct spi_device *VAR_2;
 int VAR_3;
 VAR_2 = FUNC_5(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(FUNC_8(VAR_1->modalias) >= sizeof(VAR_2->modalias));

 VAR_2->chip_select = VAR_1->chip_select;
 VAR_2->max_speed_hz = VAR_1->max_speed_hz;
 VAR_2->mode = VAR_1->mode;
 VAR_2->irq = VAR_1->irq;
 FUNC_7(VAR_2->modalias, VAR_1->modalias, sizeof(VAR_2->modalias));
 VAR_2->dev.platform_data = (void *) VAR_1->platform_data;
 VAR_2->controller_data = VAR_1->controller_data;
 VAR_2->controller_state = ((void*)0);

 if (VAR_1->properties) {
  VAR_3 = FUNC_2(&VAR_2->dev, VAR_1->properties);
  if (VAR_3) {
   FUNC_1(&VAR_0->dev,
    "failed to add properties to '%s': %d\n",
    VAR_1->modalias, VAR_3);
   goto err_dev_put;
  }
 }

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 < 0)
  goto err_remove_props;

 return VAR_2;

err_remove_props:
 if (VAR_1->properties)
  FUNC_3(&VAR_2->dev);
err_dev_put:
 FUNC_6(VAR_2);
 return ((void*)0);
}
