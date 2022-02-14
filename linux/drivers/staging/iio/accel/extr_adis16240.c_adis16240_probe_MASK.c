
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* driver; } ;
struct spi_device {TYPE_3__ dev; } ;
struct TYPE_5__ {TYPE_3__* parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int * info; TYPE_2__ dev; int name; } ;
struct adis {int dummy; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct adis*,struct iio_dev*) ;
 int FUNC_2 (struct adis*,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_3 (struct adis*) ;
 int FUNC_4 (struct adis*,struct iio_dev*,int *) ;
 struct iio_dev* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (struct iio_dev*) ;
 struct adis* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct spi_device *VAR_5)
{
 int VAR_6;
 struct adis *VAR_7;
 struct iio_dev *VAR_8;


 VAR_8 = FUNC_5(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = FUNC_7(VAR_8);

 FUNC_8(VAR_5, VAR_8);

 VAR_8->name = VAR_5->dev.driver->name;
 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->info = &VAR_4;
 VAR_8->channels = VAR_2;
 VAR_8->num_channels = FUNC_0(VAR_2);
 VAR_8->modes = VAR_1;

 VAR_6 = FUNC_2(VAR_7, VAR_8, VAR_5, &VAR_3);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_4(VAR_7, VAR_8, ((void*)0));
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6)
  goto error_cleanup_buffer_trigger;
 VAR_6 = FUNC_6(VAR_8);
 if (VAR_6)
  goto error_cleanup_buffer_trigger;
 return 0;

error_cleanup_buffer_trigger:
 FUNC_1(VAR_7, VAR_8);
 return VAR_6;
}
