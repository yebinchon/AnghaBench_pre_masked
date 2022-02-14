
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wlcore_platdev_data {TYPE_1__* family; int * if_ops; } ;
struct wl12xx_spi_glue {TYPE_3__* core; int * dev; int reg; } ;
struct spi_device {int bits_per_word; int irq; int dev; } ;
struct resource {int flags; char* name; int start; } ;
typedef int res ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_10__ {TYPE_2__ dev; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (struct resource*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct resource*,int,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,struct wlcore_platdev_data*,int) ;
 int FUNC_10 (TYPE_3__*,struct resource*,int ) ;
 TYPE_3__* FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_13 (struct spi_device*,struct wl12xx_spi_glue*) ;
 int FUNC_14 (struct spi_device*) ;
 int FUNC_15 (struct spi_device*,struct wl12xx_spi_glue*,struct wlcore_platdev_data*) ;

__attribute__((used)) static int FUNC_16(struct spi_device *VAR_6)
{
 struct wl12xx_spi_glue *VAR_7;
 struct wlcore_platdev_data *VAR_8;
 struct resource VAR_9[1];
 int VAR_10;

 VAR_8 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->if_ops = &VAR_5;

 VAR_7 = FUNC_4(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_3(&VAR_6->dev, "can't allocate glue\n");
  return -VAR_0;
 }

 VAR_7->dev = &VAR_6->dev;

 FUNC_13(VAR_6, VAR_7);



 VAR_6->bits_per_word = 32;

 VAR_7->reg = FUNC_5(&VAR_6->dev, "vwlan");
 if (FUNC_2(VAR_7->reg) == -VAR_1)
  return -VAR_1;
 if (FUNC_1(VAR_7->reg)) {
  FUNC_3(VAR_7->dev, "can't get regulator\n");
  return FUNC_2(VAR_7->reg);
 }

 VAR_10 = FUNC_15(VAR_6, VAR_7, VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_7->dev,
   "can't get device tree parameters (%d)\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_14(VAR_6);
 if (VAR_10 < 0) {
  FUNC_3(VAR_7->dev, "spi_setup failed\n");
  return VAR_10;
 }

 VAR_7->core = FUNC_11(VAR_8->family->name,
        VAR_4);
 if (!VAR_7->core) {
  FUNC_3(VAR_7->dev, "can't allocate platform_device\n");
  return -VAR_0;
 }

 VAR_7->core->dev.parent = &VAR_6->dev;

 FUNC_7(VAR_9, 0x00, sizeof(VAR_9));

 VAR_9[0].start = VAR_6->irq;
 VAR_9[0].flags = VAR_3 | FUNC_6(VAR_6->irq);
 VAR_9[0].name = "irq";

 VAR_10 = FUNC_10(VAR_7->core, VAR_9, FUNC_0(VAR_9));
 if (VAR_10) {
  FUNC_3(VAR_7->dev, "can't add resources\n");
  goto out_dev_put;
 }

 VAR_10 = FUNC_9(VAR_7->core, VAR_8,
           sizeof(*VAR_8));
 if (VAR_10) {
  FUNC_3(VAR_7->dev, "can't add platform data\n");
  goto out_dev_put;
 }

 VAR_10 = FUNC_8(VAR_7->core);
 if (VAR_10) {
  FUNC_3(VAR_7->dev, "can't register platform device\n");
  goto out_dev_put;
 }

 return 0;

out_dev_put:
 FUNC_12(VAR_7->core);
 return VAR_10;
}
