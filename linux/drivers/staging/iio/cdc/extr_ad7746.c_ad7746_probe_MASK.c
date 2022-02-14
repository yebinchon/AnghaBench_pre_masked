
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* parent; } ;
struct iio_dev {TYPE_1__ dev; int modes; void* num_channels; int channels; int * info; int name; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_6__ {struct ad7746_platform_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct ad7746_platform_data {int exclvl; scalar_t__ excb_inv_en; scalar_t__ excb_en; scalar_t__ exca_inv_en; scalar_t__ exca_en; } ;
struct ad7746_chip_info {int capdac_set; struct i2c_client* client; int lock; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char FUNC_0 (int) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ,unsigned char) ;
 struct ad7746_chip_info* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 struct ad7746_platform_data *VAR_11 = VAR_9->dev.platform_data;
 struct ad7746_chip_info *VAR_12;
 struct iio_dev *VAR_13;
 unsigned char VAR_14 = 0;
 int VAR_15 = 0;

 VAR_13 = FUNC_3(&VAR_9->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_5;
 VAR_12 = FUNC_7(VAR_13);
 FUNC_8(&VAR_12->lock);

 FUNC_5(VAR_9, VAR_13);

 VAR_12->client = VAR_9;
 VAR_12->capdac_set = -1;


 VAR_13->name = VAR_10->name;
 VAR_13->dev.parent = &VAR_9->dev;
 VAR_13->info = &VAR_8;
 VAR_13->channels = VAR_7;
 if (VAR_10->driver_data == 7746)
  VAR_13->num_channels = FUNC_1(VAR_7);
 else
  VAR_13->num_channels = FUNC_1(VAR_7) - 2;
 VAR_13->num_channels = FUNC_1(VAR_7);
 VAR_13->modes = VAR_6;

 if (VAR_11) {
  if (VAR_11->exca_en) {
   if (VAR_11->exca_inv_en)
    VAR_14 |= VAR_2;
   else
    VAR_14 |= VAR_0;
  }

  if (VAR_11->excb_en) {
   if (VAR_11->excb_inv_en)
    VAR_14 |= VAR_3;
   else
    VAR_14 |= VAR_1;
  }

  VAR_14 |= FUNC_0(VAR_11->exclvl);
 } else {
  FUNC_2(&VAR_9->dev, "No platform data? using default\n");
  VAR_14 = VAR_0 | VAR_1 |
   FUNC_0(3);
 }

 VAR_15 = FUNC_6(VAR_12->client,
     VAR_4, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_4(VAR_13->dev.parent, VAR_13);
 if (VAR_15)
  return VAR_15;

 return 0;
}
