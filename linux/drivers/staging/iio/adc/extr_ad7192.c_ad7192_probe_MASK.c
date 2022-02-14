
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int of_node; } ;
struct spi_device {TYPE_4__ dev; int irq; } ;
struct TYPE_8__ {TYPE_4__* parent; } ;
struct iio_dev {int * info; int modes; int name; TYPE_1__ dev; } ;
struct TYPE_12__ {TYPE_2__* spi; } ;
struct ad7192_state {int int_vref_mv; scalar_t__ devid; scalar_t__ clock_sel; void* avdd; void* dvdd; void* mclk; int fclk; TYPE_7__ sd; int lock; } ;
struct TYPE_10__ {scalar_t__ driver_data; int name; } ;
struct TYPE_9__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct iio_dev*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct ad7192_state*) ;
 int FUNC_4 (struct ad7192_state*,int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (TYPE_7__*,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (TYPE_4__*,char*) ;
 void* FUNC_13 (int *,char*) ;
 struct iio_dev* FUNC_14 (TYPE_4__*,int) ;
 void* FUNC_15 (TYPE_4__*,char*) ;
 int FUNC_16 (struct iio_dev*) ;
 struct ad7192_state* FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (void*) ;
 TYPE_3__* FUNC_22 (struct spi_device*) ;
 int FUNC_23 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_24(struct spi_device *VAR_12)
{
 struct ad7192_state *VAR_13;
 struct iio_dev *VAR_14;
 int VAR_15, VAR_16 = 0;

 if (!VAR_12->irq) {
  FUNC_12(&VAR_12->dev, "no IRQ?\n");
  return -VAR_4;
 }

 VAR_14 = FUNC_14(&VAR_12->dev, sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_6;

 VAR_13 = FUNC_17(VAR_14);

 FUNC_18(&VAR_13->lock);

 VAR_13->avdd = FUNC_15(&VAR_12->dev, "avdd");
 if (FUNC_0(VAR_13->avdd))
  return FUNC_1(VAR_13->avdd);

 VAR_15 = FUNC_20(VAR_13->avdd);
 if (VAR_15) {
  FUNC_12(&VAR_12->dev, "Failed to enable specified AVdd supply\n");
  return VAR_15;
 }

 VAR_13->dvdd = FUNC_15(&VAR_12->dev, "dvdd");
 if (FUNC_0(VAR_13->dvdd)) {
  VAR_15 = FUNC_1(VAR_13->dvdd);
  goto error_disable_avdd;
 }

 VAR_15 = FUNC_20(VAR_13->dvdd);
 if (VAR_15) {
  FUNC_12(&VAR_12->dev, "Failed to enable specified DVdd supply\n");
  goto error_disable_avdd;
 }

 VAR_16 = FUNC_21(VAR_13->avdd);

 if (VAR_16)
  VAR_13->int_vref_mv = VAR_16 / 1000;
 else
  FUNC_12(&VAR_12->dev, "Device tree error, reference voltage undefined\n");

 FUNC_23(VAR_12, VAR_14);
 VAR_13->devid = FUNC_22(VAR_12)->driver_data;
 VAR_14->dev.parent = &VAR_12->dev;
 VAR_14->name = FUNC_22(VAR_12)->name;
 VAR_14->modes = VAR_8;

 VAR_15 = FUNC_2(VAR_14);
 if (VAR_15 < 0)
  goto error_disable_dvdd;

 if (VAR_13->devid == VAR_7)
  VAR_14->info = &VAR_11;
 else
  VAR_14->info = &VAR_9;

 FUNC_7(&VAR_13->sd, VAR_14, VAR_12, &VAR_10);

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15)
  goto error_disable_dvdd;

 VAR_13->fclk = VAR_2;

 VAR_13->mclk = FUNC_13(&VAR_13->sd.spi->dev, "mclk");
 if (FUNC_0(VAR_13->mclk) && FUNC_1(VAR_13->mclk) != -VAR_5) {
  VAR_15 = FUNC_1(VAR_13->mclk);
  goto error_remove_trigger;
 }

 VAR_13->clock_sel = FUNC_3(VAR_13);

 if (VAR_13->clock_sel == VAR_0 ||
     VAR_13->clock_sel == VAR_1) {
  VAR_15 = FUNC_11(VAR_13->mclk);
  if (VAR_15 < 0)
   goto error_remove_trigger;

  VAR_13->fclk = FUNC_10(VAR_13->mclk);
  if (!FUNC_5(VAR_13->fclk)) {
   VAR_15 = -VAR_3;
   FUNC_12(&VAR_12->dev,
    "External clock frequency out of bounds\n");
   goto error_disable_clk;
  }
 }

 VAR_15 = FUNC_4(VAR_13, VAR_12->dev.of_node);
 if (VAR_15)
  goto error_disable_clk;

 VAR_15 = FUNC_16(VAR_14);
 if (VAR_15 < 0)
  goto error_disable_clk;
 return 0;

error_disable_clk:
 FUNC_9(VAR_13->mclk);
error_remove_trigger:
 FUNC_6(VAR_14);
error_disable_dvdd:
 FUNC_19(VAR_13->dvdd);
error_disable_avdd:
 FUNC_19(VAR_13->avdd);

 return VAR_15;
}
