
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int mode; int max_speed_hz; int dev; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad2s1210_state {int hysteresis; int resolution; int fclkin; int fexcit; int mode; struct spi_device* sdev; int lock; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ad2s1210_state*) ;
 int FUNC_2 (struct ad2s1210_state*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 struct ad2s1210_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct spi_device*) ;
 int FUNC_8 (struct spi_device*,struct iio_dev*) ;
 int FUNC_9 (struct spi_device*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_7)
{
 struct iio_dev *VAR_8;
 struct ad2s1210_state *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_5(VAR_8);
 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_8(VAR_7, VAR_8);

 FUNC_6(&VAR_9->lock);
 VAR_9->sdev = VAR_7;
 VAR_9->hysteresis = 1;
 VAR_9->mode = VAR_3;
 VAR_9->resolution = 12;
 VAR_9->fexcit = VAR_0;

 VAR_8->dev.parent = &VAR_7->dev;
 VAR_8->info = &VAR_6;
 VAR_8->modes = VAR_2;
 VAR_8->channels = VAR_5;
 VAR_8->num_channels = FUNC_0(VAR_5);
 VAR_8->name = FUNC_7(VAR_7)->name;

 VAR_10 = FUNC_4(&VAR_7->dev, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9->fclkin = VAR_7->max_speed_hz;
 VAR_7->mode = VAR_4;
 FUNC_9(VAR_7);
 FUNC_1(VAR_9);

 return 0;
}
