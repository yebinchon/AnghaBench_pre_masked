
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int modes; int * info; int name; TYPE_1__ dev; } ;
struct TYPE_5__ {int len; int cs_change; int * tx_buf; } ;
struct ad9832_state {int ctrl_src; void* avdd; void* dvdd; void* mclk; int msg; struct spi_device* spi; int data; int phase_msg; TYPE_2__* phase_xfer; int * phase_data; int freq_msg; TYPE_2__* freq_xfer; int * freq_data; TYPE_2__ xfer; int lock; } ;
struct ad9832_platform_data {int phase3; int phase2; int phase1; int phase0; int freq1; int freq0; } ;
struct TYPE_6__ {int name; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_14 ;
 int FUNC_2 (struct ad9832_state*,int ,int ) ;
 int FUNC_3 (struct ad9832_state*,int ,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 struct ad9832_platform_data* FUNC_9 (int *) ;
 void* FUNC_10 (int *,char*) ;
 struct iio_dev* FUNC_11 (int *,int) ;
 void* FUNC_12 (int *,char*) ;
 int FUNC_13 (struct iio_dev*) ;
 struct ad9832_state* FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 TYPE_3__* FUNC_18 (struct spi_device*) ;
 int FUNC_19 (TYPE_2__*,int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct spi_device*,struct iio_dev*) ;
 int FUNC_22 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_23(struct spi_device *VAR_15)
{
 struct ad9832_platform_data *VAR_16 = FUNC_9(&VAR_15->dev);
 struct iio_dev *VAR_17;
 struct ad9832_state *VAR_18;
 int VAR_19;

 if (!VAR_16) {
  FUNC_7(&VAR_15->dev, "no platform data?\n");
  return -VAR_11;
 }

 VAR_17 = FUNC_11(&VAR_15->dev, sizeof(*VAR_18));
 if (!VAR_17)
  return -VAR_12;

 FUNC_21(VAR_15, VAR_17);
 VAR_18 = FUNC_14(VAR_17);

 VAR_18->avdd = FUNC_12(&VAR_15->dev, "avdd");
 if (FUNC_0(VAR_18->avdd))
  return FUNC_1(VAR_18->avdd);

 VAR_19 = FUNC_17(VAR_18->avdd);
 if (VAR_19) {
  FUNC_8(&VAR_15->dev, "Failed to enable specified AVDD supply\n");
  return VAR_19;
 }

 VAR_18->dvdd = FUNC_12(&VAR_15->dev, "dvdd");
 if (FUNC_0(VAR_18->dvdd)) {
  VAR_19 = FUNC_1(VAR_18->dvdd);
  goto error_disable_avdd;
 }

 VAR_19 = FUNC_17(VAR_18->dvdd);
 if (VAR_19) {
  FUNC_8(&VAR_15->dev, "Failed to enable specified DVDD supply\n");
  goto error_disable_avdd;
 }

 VAR_18->mclk = FUNC_10(&VAR_15->dev, "mclk");
 if (FUNC_0(VAR_18->mclk)) {
  VAR_19 = FUNC_1(VAR_18->mclk);
  goto error_disable_dvdd;
 }

 VAR_19 = FUNC_5(VAR_18->mclk);
 if (VAR_19 < 0)
  goto error_disable_dvdd;

 VAR_18->spi = VAR_15;
 FUNC_15(&VAR_18->lock);

 VAR_17->dev.parent = &VAR_15->dev;
 VAR_17->name = FUNC_18(VAR_15)->name;
 VAR_17->info = &VAR_14;
 VAR_17->modes = VAR_13;



 VAR_18->xfer.tx_buf = &VAR_18->data;
 VAR_18->xfer.len = 2;

 FUNC_20(&VAR_18->msg);
 FUNC_19(&VAR_18->xfer, &VAR_18->msg);

 VAR_18->freq_xfer[0].tx_buf = &VAR_18->freq_data[0];
 VAR_18->freq_xfer[0].len = 2;
 VAR_18->freq_xfer[0].cs_change = 1;
 VAR_18->freq_xfer[1].tx_buf = &VAR_18->freq_data[1];
 VAR_18->freq_xfer[1].len = 2;
 VAR_18->freq_xfer[1].cs_change = 1;
 VAR_18->freq_xfer[2].tx_buf = &VAR_18->freq_data[2];
 VAR_18->freq_xfer[2].len = 2;
 VAR_18->freq_xfer[2].cs_change = 1;
 VAR_18->freq_xfer[3].tx_buf = &VAR_18->freq_data[3];
 VAR_18->freq_xfer[3].len = 2;

 FUNC_20(&VAR_18->freq_msg);
 FUNC_19(&VAR_18->freq_xfer[0], &VAR_18->freq_msg);
 FUNC_19(&VAR_18->freq_xfer[1], &VAR_18->freq_msg);
 FUNC_19(&VAR_18->freq_xfer[2], &VAR_18->freq_msg);
 FUNC_19(&VAR_18->freq_xfer[3], &VAR_18->freq_msg);

 VAR_18->phase_xfer[0].tx_buf = &VAR_18->phase_data[0];
 VAR_18->phase_xfer[0].len = 2;
 VAR_18->phase_xfer[0].cs_change = 1;
 VAR_18->phase_xfer[1].tx_buf = &VAR_18->phase_data[1];
 VAR_18->phase_xfer[1].len = 2;

 FUNC_20(&VAR_18->phase_msg);
 FUNC_19(&VAR_18->phase_xfer[0], &VAR_18->phase_msg);
 FUNC_19(&VAR_18->phase_xfer[1], &VAR_18->phase_msg);

 VAR_18->ctrl_src = VAR_9 | VAR_8 | VAR_0;
 VAR_18->data = FUNC_6((VAR_1 << VAR_10) |
     VAR_18->ctrl_src);
 VAR_19 = FUNC_22(VAR_18->spi, &VAR_18->msg);
 if (VAR_19) {
  FUNC_8(&VAR_15->dev, "device init failed\n");
  goto error_unprepare_mclk;
 }

 VAR_19 = FUNC_2(VAR_18, VAR_2, VAR_16->freq0);
 if (VAR_19)
  goto error_unprepare_mclk;

 VAR_19 = FUNC_2(VAR_18, VAR_3, VAR_16->freq1);
 if (VAR_19)
  goto error_unprepare_mclk;

 VAR_19 = FUNC_3(VAR_18, VAR_4, VAR_16->phase0);
 if (VAR_19)
  goto error_unprepare_mclk;

 VAR_19 = FUNC_3(VAR_18, VAR_5, VAR_16->phase1);
 if (VAR_19)
  goto error_unprepare_mclk;

 VAR_19 = FUNC_3(VAR_18, VAR_6, VAR_16->phase2);
 if (VAR_19)
  goto error_unprepare_mclk;

 VAR_19 = FUNC_3(VAR_18, VAR_7, VAR_16->phase3);
 if (VAR_19)
  goto error_unprepare_mclk;

 VAR_19 = FUNC_13(VAR_17);
 if (VAR_19)
  goto error_unprepare_mclk;

 return 0;

error_unprepare_mclk:
 FUNC_4(VAR_18->mclk);
error_disable_dvdd:
 FUNC_16(VAR_18->dvdd);
error_disable_avdd:
 FUNC_16(VAR_18->avdd);

 return VAR_19;
}
