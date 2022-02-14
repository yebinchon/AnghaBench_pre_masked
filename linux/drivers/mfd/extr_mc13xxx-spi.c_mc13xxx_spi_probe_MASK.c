
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct spi_device_id {scalar_t__ driver_data; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;
struct spi_device {int mode; int max_speed_hz; TYPE_1__ dev; int irq; } ;
struct of_device_id {void* data; } ;
struct mc13xxx {void* variant; int regmap; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,struct mc13xxx*) ;
 struct mc13xxx* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int *,TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct of_device_id* FUNC_7 (int ,TYPE_1__*) ;
 int VAR_6 ;
 struct spi_device_id* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_7)
{
 struct mc13xxx *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(&VAR_7->dev, VAR_8);

 VAR_7->mode = VAR_3 | VAR_2;

 VAR_8->irq = VAR_7->irq;

 VAR_7->max_speed_hz = VAR_7->max_speed_hz ? : 26000000;
 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8->regmap = FUNC_5(&VAR_7->dev, &VAR_6,
        &VAR_7->dev,
        &VAR_5);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_9 = FUNC_1(VAR_8->regmap);
  FUNC_2(&VAR_7->dev, "Failed to initialize regmap: %d\n", VAR_9);
  return VAR_9;
 }

 if (VAR_7->dev.of_node) {
  const struct of_device_id *VAR_10 =
   FUNC_7(VAR_4, &VAR_7->dev);

  VAR_8->variant = VAR_10->data;
 } else {
  const struct spi_device_id *VAR_11 = FUNC_8(VAR_7);

  VAR_8->variant = (void *)VAR_11->driver_data;
 }

 return FUNC_6(&VAR_7->dev);
}
