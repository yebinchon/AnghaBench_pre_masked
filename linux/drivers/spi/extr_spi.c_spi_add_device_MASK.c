
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int chip_select; int dev; int cs_gpio; int cs_gpiod; struct spi_controller* controller; } ;
struct TYPE_2__ {struct device* parent; } ;
struct spi_controller {int num_chipselect; int * cs_gpios; int * cs_gpiods; TYPE_1__ dev; } ;
struct device {int dummy; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct spi_device*,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*) ;

int FUNC_9(struct spi_device *VAR_3)
{
 static DEFINE_MUTEX(VAR_4);
 struct spi_controller *VAR_5 = VAR_3->controller;
 struct device *VAR_6 = VAR_5->dev.parent;
 int VAR_7;


 if (VAR_3->chip_select >= VAR_5->num_chipselect) {
  FUNC_2(VAR_6, "cs%d >= max %d\n", VAR_3->chip_select,
   VAR_5->num_chipselect);
  return -VAR_0;
 }


 FUNC_7(VAR_3);





 FUNC_5(&VAR_4);

 VAR_7 = FUNC_0(&VAR_1, ((void*)0), VAR_3, VAR_2);
 if (VAR_7) {
  FUNC_2(VAR_6, "chipselect %d already in use\n",
    VAR_3->chip_select);
  goto done;
 }


 if (VAR_5->cs_gpiods)
  VAR_3->cs_gpiod = VAR_5->cs_gpiods[VAR_3->chip_select];
 else if (VAR_5->cs_gpios)
  VAR_3->cs_gpio = VAR_5->cs_gpios[VAR_3->chip_select];





 VAR_7 = FUNC_8(VAR_3);
 if (VAR_7 < 0) {
  FUNC_2(VAR_6, "can't setup %s, status %d\n",
    FUNC_3(&VAR_3->dev), VAR_7);
  goto done;
 }


 VAR_7 = FUNC_4(&VAR_3->dev);
 if (VAR_7 < 0)
  FUNC_2(VAR_6, "can't add %s, status %d\n",
    FUNC_3(&VAR_3->dev), VAR_7);
 else
  FUNC_1(VAR_6, "registered child %s\n", FUNC_3(&VAR_3->dev));

done:
 FUNC_6(&VAR_4);
 return VAR_7;
}
