
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device_id {unsigned long driver_data; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct spi_device {int irq; TYPE_1__ dev; } ;
struct regmap_config {int dummy; } ;
struct arizona {unsigned long type; int irq; TYPE_1__* dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (struct arizona*) ;
 unsigned long FUNC_4 (TYPE_1__*) ;
 struct regmap_config VAR_6 ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 struct arizona* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct spi_device*,struct regmap_config const*) ;
 struct spi_device_id* FUNC_8 (struct spi_device*) ;
 struct regmap_config VAR_7 ;
 struct regmap_config VAR_8 ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_9)
{
 const struct spi_device_id *VAR_10 = FUNC_8(VAR_9);
 struct arizona *VAR_11;
 const struct regmap_config *VAR_12 = ((void*)0);
 unsigned long VAR_13;
 int VAR_14;

 if (VAR_9->dev.of_node)
  VAR_13 = FUNC_4(&VAR_9->dev);
 else
  VAR_13 = VAR_10->driver_data;

 switch (VAR_13) {
 case 130:
  if (FUNC_0(VAR_1))
   VAR_12 = &VAR_7;
  break;
 case 129:
 case 128:
  if (FUNC_0(VAR_2))
   VAR_12 = &VAR_8;
  break;
 case 131:
 case 132:
  if (FUNC_0(VAR_0))
   VAR_12 = &VAR_6;
  break;
 default:
  FUNC_5(&VAR_9->dev, "Unknown device type %ld\n", VAR_13);
  return -VAR_3;
 }

 if (!VAR_12) {
  FUNC_5(&VAR_9->dev,
   "No kernel support for device type %ld\n", VAR_13);
  return -VAR_3;
 }

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_11), VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 VAR_11->regmap = FUNC_7(VAR_9, VAR_12);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_14 = FUNC_2(VAR_11->regmap);
  FUNC_5(&VAR_9->dev, "Failed to allocate register map: %d\n",
   VAR_14);
  return VAR_14;
 }

 VAR_11->type = VAR_13;
 VAR_11->dev = &VAR_9->dev;
 VAR_11->irq = VAR_9->irq;

 return FUNC_3(VAR_11);
}
