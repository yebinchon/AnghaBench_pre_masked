
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int kobj; TYPE_1__* platform_data; scalar_t__ of_node; } ;
struct spi_device {int bits_per_word; TYPE_6__ dev; int mode; } ;
struct TYPE_11__ {int attr; int size; } ;
struct ks8995_switch {int revision_id; TYPE_5__* chip; TYPE_2__ regs_attr; TYPE_1__* pdata; struct spi_device* spi; int lock; } ;
struct TYPE_13__ {int chip_id; int name; int regs_size; } ;
struct TYPE_12__ {int driver_data; } ;
struct TYPE_10__ {int reset_gpio; scalar_t__ reset_gpio_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*,char*,int) ;
 int FUNC_1 (TYPE_6__*,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_6__*,int,unsigned long,char*) ;
 void* FUNC_3 (TYPE_6__*,int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 TYPE_5__* VAR_7 ;
 int FUNC_7 (struct ks8995_switch*) ;
 int FUNC_8 (struct ks8995_switch*) ;
 int VAR_8 ;
 int FUNC_9 (struct ks8995_switch*) ;
 int VAR_9 ;
 int FUNC_10 (TYPE_2__*,int *,int) ;
 int FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (struct spi_device*) ;
 int FUNC_13 (struct spi_device*,struct ks8995_switch*) ;
 int FUNC_14 (struct spi_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_10)
{
 struct ks8995_switch *VAR_11;
 int VAR_12;
 int VAR_13 = FUNC_12(VAR_10)->driver_data;

 if (VAR_13 >= VAR_9) {
  FUNC_0(&VAR_10->dev, "bad chip variant %d\n", VAR_13);
  return -VAR_1;
 }

 VAR_11 = FUNC_3(&VAR_10->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_11(&VAR_11->lock);
 VAR_11->spi = VAR_10;
 VAR_11->chip = &VAR_7[VAR_13];

 if (VAR_11->spi->dev.of_node) {
  VAR_11->pdata = FUNC_3(&VAR_10->dev, sizeof(*VAR_11->pdata),
      VAR_3);
  if (!VAR_11->pdata)
   return -VAR_2;

  VAR_11->pdata->reset_gpio = -1;

  FUNC_8(VAR_11);
 }

 if (!VAR_11->pdata)
  VAR_11->pdata = VAR_10->dev.platform_data;


 if (VAR_11->pdata && FUNC_4(VAR_11->pdata->reset_gpio)) {
  unsigned long VAR_14;

  VAR_14 = (VAR_11->pdata->reset_gpio_flags == VAR_5 ?
    VAR_4 : 0);

  VAR_12 = FUNC_2(&VAR_10->dev,
         VAR_11->pdata->reset_gpio,
         VAR_14, "switch-reset");
  if (VAR_12) {
   FUNC_0(&VAR_10->dev,
    "failed to get reset-gpios: %d\n", VAR_12);
   return -VAR_0;
  }

  FUNC_6(FUNC_5(VAR_11->pdata->reset_gpio), 0);
 }

 FUNC_13(VAR_10, VAR_11);

 VAR_10->mode = VAR_6;
 VAR_10->bits_per_word = 8;
 VAR_12 = FUNC_14(VAR_10);
 if (VAR_12) {
  FUNC_0(&VAR_10->dev, "spi_setup failed, err=%d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_10(&VAR_11->regs_attr, &VAR_8, sizeof(VAR_11->regs_attr));
 VAR_11->regs_attr.size = VAR_11->chip->regs_size;

 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_15(&VAR_11->regs_attr.attr);
 VAR_12 = FUNC_16(&VAR_10->dev.kobj, &VAR_11->regs_attr);
 if (VAR_12) {
  FUNC_0(&VAR_10->dev, "unable to create sysfs file, err=%d\n",
        VAR_12);
  return VAR_12;
 }

 FUNC_1(&VAR_10->dev, "%s device found, Chip ID:%x, Revision:%x\n",
   VAR_11->chip->name, VAR_11->chip->chip_id, VAR_11->revision_id);

 return 0;
}
