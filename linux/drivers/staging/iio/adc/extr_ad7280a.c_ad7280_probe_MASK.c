
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {scalar_t__ irq; int dev; int mode; int max_speed_hz; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; int name; int * info; int channels; int modes; TYPE_1__ dev; } ;
struct ad7280_state {int ctrl_hb; int slave_num; int scan_cnt; int cell_threshhigh; int aux_threshhigh; unsigned short readback_delay_us; int channels; int ctrl_lb; struct spi_device* spi; int crc_tab; int lock; } ;
struct ad7280_platform_data {int acquisition_time; int conversion_averaging; int chain_last_alert_ignore; scalar_t__ thermistor_term_en; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short FUNC_2 (unsigned short,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ad7280_state*) ;
 int FUNC_4 (struct ad7280_state*) ;
 int FUNC_5 (struct ad7280_state*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct ad7280_state*,int ,int ,int,int) ;
 int FUNC_7 (int) ;
 struct ad7280_platform_data VAR_16 ;
 int FUNC_8 (int ,int ) ;
 struct ad7280_platform_data* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,struct ad7280_state*) ;
 struct iio_dev* FUNC_11 (int *,int) ;
 int FUNC_12 (int *,struct iio_dev*) ;
 int FUNC_13 (int *,scalar_t__,int *,int ,int,int ,struct iio_dev*) ;
 struct ad7280_state* FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (int *) ;
 TYPE_2__* FUNC_16 (struct spi_device*) ;
 int FUNC_17 (struct spi_device*,struct iio_dev*) ;
 int FUNC_18 (struct spi_device*) ;

__attribute__((used)) static int FUNC_19(struct spi_device *VAR_17)
{
 const struct ad7280_platform_data *VAR_18 = FUNC_9(&VAR_17->dev);
 struct ad7280_state *VAR_19;
 int VAR_20;
 const unsigned short VAR_21[4] = {465, 1010, 1460, 1890};
 const unsigned short VAR_22[4] = {1, 2, 4, 8};
 struct iio_dev *VAR_23;

 VAR_23 = FUNC_11(&VAR_17->dev, sizeof(*VAR_19));
 if (!VAR_23)
  return -VAR_7;

 VAR_19 = FUNC_14(VAR_23);
 FUNC_17(VAR_17, VAR_23);
 VAR_19->spi = VAR_17;
 FUNC_15(&VAR_19->lock);

 if (!VAR_18)
  VAR_18 = &VAR_16;

 FUNC_8(VAR_19->crc_tab, VAR_11);

 VAR_19->spi->max_speed_hz = VAR_5;
 VAR_19->spi->mode = VAR_12;
 FUNC_18(VAR_19->spi);

 VAR_19->ctrl_lb = FUNC_1(VAR_18->acquisition_time & 0x3);
 VAR_19->ctrl_hb = FUNC_0(VAR_18->conversion_averaging
   & 0x3) | (VAR_18->thermistor_term_en ?
   VAR_3 : 0);

 VAR_20 = FUNC_4(VAR_19);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_19->slave_num = VAR_20;
 VAR_19->scan_cnt = (VAR_19->slave_num + 1) * VAR_6;
 VAR_19->cell_threshhigh = 0xFF;
 VAR_19->aux_threshhigh = 0xFF;

 VAR_20 = FUNC_10(&VAR_17->dev, VAR_15, VAR_19);
 if (VAR_20)
  return VAR_20;
 VAR_19->readback_delay_us =
  ((VAR_21[VAR_18->acquisition_time & 0x3] + 695) *
   (VAR_6 * VAR_22[VAR_18->conversion_averaging & 0x3])) -
  VAR_21[VAR_18->acquisition_time & 0x3] + VAR_19->slave_num * 250;


 VAR_19->readback_delay_us = FUNC_2(VAR_19->readback_delay_us, 1000);
 VAR_19->readback_delay_us += 5;

 VAR_23->name = FUNC_16(VAR_17)->name;
 VAR_23->dev.parent = &VAR_17->dev;
 VAR_23->modes = VAR_8;

 VAR_20 = FUNC_5(VAR_19);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_23->num_channels = VAR_20;
 VAR_23->channels = VAR_19->channels;
 VAR_23->info = &VAR_14;

 VAR_20 = FUNC_3(VAR_19);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_12(&VAR_17->dev, VAR_23);
 if (VAR_20)
  return VAR_20;

 if (VAR_17->irq > 0) {
  VAR_20 = FUNC_6(VAR_19, VAR_4,
       VAR_0, 1,
       VAR_2);
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_6(VAR_19, FUNC_7(VAR_19->slave_num),
       VAR_0, 0,
       VAR_1 |
       (VAR_18->chain_last_alert_ignore & 0xF));
  if (VAR_20)
   return VAR_20;

  VAR_20 = FUNC_13(&VAR_17->dev, VAR_17->irq,
      ((void*)0),
      VAR_13,
      VAR_10 |
      VAR_9,
      VAR_23->name,
      VAR_23);
  if (VAR_20)
   return VAR_20;
 }

 return 0;
}
