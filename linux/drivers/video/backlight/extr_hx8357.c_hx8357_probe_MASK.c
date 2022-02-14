
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int of_node; } ;
struct spi_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct lcd_device {int dummy; } ;
struct hx8357_data {int reset; int use_im_pins; int* im_pins; struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int,int ,char*) ;
 struct hx8357_data* FUNC_5 (TYPE_1__*,int,int ) ;
 struct lcd_device* FUNC_6 (TYPE_1__*,char*,TYPE_1__*,struct hx8357_data*,int *) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (struct lcd_device*) ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ,char*,int *) ;
 void* FUNC_10 (int ,char*,int) ;
 struct of_device_id* FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (struct spi_device*,struct lcd_device*) ;
 int FUNC_13 (struct spi_device*) ;
 int FUNC_14 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_9)
{
 struct lcd_device *VAR_10;
 struct hx8357_data *VAR_11;
 const struct of_device_id *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_14 = FUNC_13(VAR_9);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_9->dev, "SPI setup failed.\n");
  return VAR_14;
 }

 VAR_11->spi = VAR_9;

 VAR_12 = FUNC_11(VAR_7, &VAR_9->dev);
 if (!VAR_12 || !VAR_12->data)
  return -VAR_0;

 VAR_11->reset = FUNC_10(VAR_9->dev.of_node, "gpios-reset", 0);
 if (!FUNC_7(VAR_11->reset)) {
  FUNC_2(&VAR_9->dev, "Missing dt property: gpios-reset\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_4(&VAR_9->dev, VAR_11->reset,
        VAR_4,
        "hx8357-reset");
 if (VAR_14) {
  FUNC_2(&VAR_9->dev,
   "failed to request gpio %d: %d\n",
   VAR_11->reset, VAR_14);
  return -VAR_0;
 }

 if (FUNC_9(VAR_9->dev.of_node, "im-gpios", ((void*)0))) {
  VAR_11->use_im_pins = 1;

  for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
   VAR_11->im_pins[VAR_13] = FUNC_10(VAR_9->dev.of_node,
           "im-gpios", VAR_13);
   if (VAR_11->im_pins[VAR_13] == -VAR_2) {
    FUNC_3(&VAR_9->dev, "GPIO requested is not here yet, deferring the probe\n");
    return -VAR_2;
   }
   if (!FUNC_7(VAR_11->im_pins[VAR_13])) {
    FUNC_2(&VAR_9->dev, "Missing dt property: im-gpios\n");
    return -VAR_0;
   }

   VAR_14 = FUNC_4(&VAR_9->dev, VAR_11->im_pins[VAR_13],
          VAR_5,
          "im_pins");
   if (VAR_14) {
    FUNC_2(&VAR_9->dev, "failed to request gpio %d: %d\n",
     VAR_11->im_pins[VAR_13], VAR_14);
    return -VAR_0;
   }
  }
 } else {
  VAR_11->use_im_pins = 0;
 }

 VAR_10 = FUNC_6(&VAR_9->dev, "mxsfb", &VAR_9->dev, VAR_11,
     &VAR_8);
 if (FUNC_0(VAR_10)) {
  VAR_14 = FUNC_1(VAR_10);
  return VAR_14;
 }
 FUNC_12(VAR_9, VAR_10);

 FUNC_8(VAR_10);

 VAR_14 = ((int (*)(struct lcd_device *))VAR_12->data)(VAR_10);
 if (VAR_14) {
  FUNC_2(&VAR_9->dev, "Couldn't initialize panel\n");
  return VAR_14;
 }

 FUNC_3(&VAR_9->dev, "Panel probed\n");

 return 0;
}
