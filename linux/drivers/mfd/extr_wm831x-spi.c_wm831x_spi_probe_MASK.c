
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct wm831x_pdata {int dummy; } ;
struct wm831x {int type; int pdata; TYPE_1__* dev; int regmap; } ;
struct spi_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct spi_device {int irq; TYPE_1__ dev; int mode; } ;
struct of_device_id {scalar_t__ data; } ;
typedef enum wm831x_parent { ____Placeholder_wm831x_parent } wm831x_parent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct wm831x_pdata* FUNC_3 (TYPE_1__*) ;
 struct wm831x* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct spi_device*,int *) ;
 int FUNC_6 (int *,struct wm831x_pdata*,int) ;
 struct of_device_id* FUNC_7 (int ,TYPE_1__*) ;
 struct spi_device_id* FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,struct wm831x*) ;
 int FUNC_10 (struct wm831x*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_6)
{
 struct wm831x_pdata *VAR_7 = FUNC_3(&VAR_6->dev);
 const struct spi_device_id *VAR_8 = FUNC_8(VAR_6);
 const struct of_device_id *VAR_9;
 struct wm831x *VAR_10;
 enum wm831x_parent VAR_11;
 int VAR_12;

 if (VAR_6->dev.of_node) {
  VAR_9 = FUNC_7(VAR_4, &VAR_6->dev);
  if (!VAR_9) {
   FUNC_2(&VAR_6->dev, "Failed to match device\n");
   return -VAR_0;
  }
  VAR_11 = (enum wm831x_parent)VAR_9->data;
 } else {
  VAR_11 = (enum wm831x_parent)VAR_8->driver_data;
 }

 VAR_10 = FUNC_4(&VAR_6->dev, sizeof(struct wm831x), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_6->mode = VAR_3;

 FUNC_9(VAR_6, VAR_10);
 VAR_10->dev = &VAR_6->dev;
 VAR_10->type = VAR_11;

 VAR_10->regmap = FUNC_5(VAR_6, &VAR_5);
 if (FUNC_0(VAR_10->regmap)) {
  VAR_12 = FUNC_1(VAR_10->regmap);
  FUNC_2(VAR_10->dev, "Failed to allocate register map: %d\n",
   VAR_12);
  return VAR_12;
 }

 if (VAR_7)
  FUNC_6(&VAR_10->pdata, VAR_7, sizeof(*VAR_7));

 return FUNC_10(VAR_10, VAR_6->irq);
}
