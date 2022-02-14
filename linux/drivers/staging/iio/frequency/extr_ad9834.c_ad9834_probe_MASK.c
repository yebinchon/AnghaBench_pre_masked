
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct regulator {int dummy; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int modes; int * info; int name; TYPE_1__ dev; } ;
struct TYPE_5__ {int len; int cs_change; int * tx_buf; } ;
struct ad9834_state {int devid; int control; int mclk; int msg; struct spi_device* spi; int data; int freq_msg; TYPE_2__* freq_xfer; int * freq_data; TYPE_2__ xfer; struct regulator* reg; int lock; } ;
struct TYPE_6__ {int driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int VAR_11 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ad9834_state*,int ,int) ;
 int FUNC_3 (struct ad9834_state*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int *) ;
 struct iio_dev* FUNC_9 (int *,int) ;
 struct regulator* FUNC_10 (int *,char*) ;
 int FUNC_11 (struct iio_dev*) ;
 struct ad9834_state* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct regulator*) ;
 int FUNC_15 (struct regulator*) ;
 TYPE_3__* FUNC_16 (struct spi_device*) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct spi_device*,struct iio_dev*) ;
 int FUNC_20 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_14)
{
 struct ad9834_state *VAR_15;
 struct iio_dev *VAR_16;
 struct regulator *VAR_17;
 int VAR_18;


 VAR_17 = FUNC_10(&VAR_14->dev, "avdd");
 if (FUNC_0(VAR_17))
  return FUNC_1(VAR_17);

 VAR_18 = FUNC_15(VAR_17);
 if (VAR_18) {
  FUNC_7(&VAR_14->dev, "Failed to enable specified AVDD supply\n");
  return VAR_18;
 }

 VAR_16 = FUNC_9(&VAR_14->dev, sizeof(*VAR_15));
 if (!VAR_16) {
  VAR_18 = -VAR_9;
  goto error_disable_reg;
 }
 FUNC_19(VAR_14, VAR_16);
 VAR_15 = FUNC_12(VAR_16);
 FUNC_13(&VAR_15->lock);
 VAR_15->mclk = FUNC_8(&VAR_14->dev, ((void*)0));

 VAR_18 = FUNC_5(VAR_15->mclk);
 if (VAR_18) {
  FUNC_7(&VAR_14->dev, "Failed to enable master clock\n");
  goto error_disable_reg;
 }

 VAR_15->spi = VAR_14;
 VAR_15->devid = FUNC_16(VAR_14)->driver_data;
 VAR_15->reg = VAR_17;
 VAR_16->dev.parent = &VAR_14->dev;
 VAR_16->name = FUNC_16(VAR_14)->name;
 switch (VAR_15->devid) {
 case 129:
 case 128:
  VAR_16->info = &VAR_12;
  break;
 default:
  VAR_16->info = &VAR_13;
  break;
 }
 VAR_16->modes = VAR_11;



 VAR_15->xfer.tx_buf = &VAR_15->data;
 VAR_15->xfer.len = 2;

 FUNC_18(&VAR_15->msg);
 FUNC_17(&VAR_15->xfer, &VAR_15->msg);

 VAR_15->freq_xfer[0].tx_buf = &VAR_15->freq_data[0];
 VAR_15->freq_xfer[0].len = 2;
 VAR_15->freq_xfer[0].cs_change = 1;
 VAR_15->freq_xfer[1].tx_buf = &VAR_15->freq_data[1];
 VAR_15->freq_xfer[1].len = 2;

 FUNC_18(&VAR_15->freq_msg);
 FUNC_17(&VAR_15->freq_xfer[0], &VAR_15->freq_msg);
 FUNC_17(&VAR_15->freq_xfer[1], &VAR_15->freq_msg);

 VAR_15->control = VAR_0 | VAR_7;
 VAR_15->control |= VAR_1;

 if (VAR_15->devid == VAR_10)
  VAR_15->control |= VAR_8;

 VAR_15->data = FUNC_6(VAR_2 | VAR_15->control);
 VAR_18 = FUNC_20(VAR_15->spi, &VAR_15->msg);
 if (VAR_18) {
  FUNC_7(&VAR_14->dev, "device init failed\n");
  goto error_clock_unprepare;
 }

 VAR_18 = FUNC_2(VAR_15, VAR_3, 1000000);
 if (VAR_18)
  goto error_clock_unprepare;

 VAR_18 = FUNC_2(VAR_15, VAR_4, 5000000);
 if (VAR_18)
  goto error_clock_unprepare;

 VAR_18 = FUNC_3(VAR_15, VAR_5, 512);
 if (VAR_18)
  goto error_clock_unprepare;

 VAR_18 = FUNC_3(VAR_15, VAR_6, 1024);
 if (VAR_18)
  goto error_clock_unprepare;

 VAR_18 = FUNC_11(VAR_16);
 if (VAR_18)
  goto error_clock_unprepare;

 return 0;
error_clock_unprepare:
 FUNC_4(VAR_15->mclk);
error_disable_reg:
 FUNC_14(VAR_17);

 return VAR_18;
}
