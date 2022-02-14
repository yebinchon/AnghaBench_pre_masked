
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct spi_device {struct device dev; } ;
struct lcd_device {int dummy; } ;
struct ili9320_platdata {scalar_t__ hsize; scalar_t__ vsize; int * reset; } ;
struct ili9320_client {int name; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ spi; } ;
struct ili9320 {struct lcd_device* lcd; struct ili9320_platdata* platdata; int power; struct ili9320_client* client; struct device* dev; TYPE_2__ access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct lcd_device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct ili9320_platdata* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 struct ili9320* FUNC_6 (struct device*,int,int ) ;
 struct lcd_device* FUNC_7 (struct device*,char*,struct device*,struct ili9320*,int *) ;
 int VAR_6 ;
 int FUNC_8 (struct ili9320*,int ) ;
 int FUNC_9 (struct ili9320*,struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct ili9320*) ;

int FUNC_11(struct spi_device *VAR_7,
    struct ili9320_client *VAR_8)
{
 struct ili9320_platdata *VAR_9 = FUNC_4(&VAR_7->dev);
 struct device *VAR_10 = &VAR_7->dev;
 struct ili9320 *VAR_11;
 struct lcd_device *VAR_12;
 int VAR_13 = 0;



 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_10, "no platform data supplied\n");
  return -VAR_0;
 }

 if (VAR_9->hsize <= 0 || VAR_9->vsize <= 0 || VAR_9->reset == ((void*)0)) {
  FUNC_3(VAR_10, "invalid platform data supplied\n");
  return -VAR_0;
 }



 VAR_11 = FUNC_6(&VAR_7->dev, sizeof(struct ili9320), VAR_4);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 VAR_11->access.spi.id = VAR_5 | FUNC_0(1);

 VAR_11->dev = VAR_10;
 VAR_11->client = VAR_8;
 VAR_11->power = VAR_2;
 VAR_11->platdata = VAR_9;

 FUNC_10(VAR_7, VAR_11);

 FUNC_9(VAR_11, VAR_7);

 VAR_12 = FUNC_7(&VAR_7->dev, "ili9320", VAR_10, VAR_11,
     &VAR_6);
 if (FUNC_1(VAR_12)) {
  FUNC_3(VAR_10, "failed to register lcd device\n");
  return FUNC_2(VAR_12);
 }

 VAR_11->lcd = VAR_12;

 FUNC_5(VAR_10, "initialising %s\n", VAR_8->name);

 VAR_13 = FUNC_8(VAR_11, VAR_3);
 if (VAR_13 != 0) {
  FUNC_3(VAR_10, "failed to set lcd power state\n");
  return VAR_13;
 }

 return 0;
}
