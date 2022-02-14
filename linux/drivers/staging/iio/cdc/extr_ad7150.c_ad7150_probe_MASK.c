
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* parent; } ;
struct iio_dev {TYPE_1__ dev; int modes; int * info; int num_channels; int channels; int name; } ;
struct i2c_device_id {int name; } ;
struct TYPE_7__ {scalar_t__ platform_data; } ;
struct i2c_client {unsigned int irq; TYPE_2__ dev; } ;
struct ad7150_chip_info {struct i2c_client* client; int state_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,char*,int ,unsigned int) ;
 struct iio_dev* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_4 (TYPE_2__*,unsigned int,int *,int *,int,char*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 struct ad7150_chip_info* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 struct ad7150_chip_info *VAR_11;
 struct iio_dev *VAR_12;

 VAR_12 = FUNC_2(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;
 VAR_11 = FUNC_6(VAR_12);
 FUNC_7(&VAR_11->state_lock);

 FUNC_5(VAR_8, VAR_12);

 VAR_11->client = VAR_8;

 VAR_12->name = VAR_9->name;
 VAR_12->channels = VAR_5;
 VAR_12->num_channels = FUNC_0(VAR_5);

 VAR_12->dev.parent = &VAR_8->dev;

 VAR_12->info = &VAR_7;

 VAR_12->modes = VAR_1;

 if (VAR_8->irq) {
  VAR_10 = FUNC_4(&VAR_8->dev, VAR_8->irq,
      ((void*)0),
      &VAR_6,
      VAR_4 |
      VAR_3 |
      VAR_2,
      "ad7150_irq1",
      VAR_12);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_8->dev.platform_data) {
  VAR_10 = FUNC_4(&VAR_8->dev, *(unsigned int *)
      VAR_8->dev.platform_data,
      ((void*)0),
      &VAR_6,
      VAR_4 |
      VAR_3 |
      VAR_2,
      "ad7150_irq2",
      VAR_12);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_12->dev.parent, VAR_12);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_8->dev, "%s capacitive sensor registered,irq: %d\n",
   VAR_9->name, VAR_8->irq);

 return 0;
}
