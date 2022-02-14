
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; scalar_t__ irq; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int name; int modes; int * info; TYPE_1__ dev; } ;
struct ad7816_chip_info {int* oti_data; scalar_t__ id; void* busy_pin; void* convert_pin; void* rdwr_pin; struct spi_device* spi_dev; } ;
struct TYPE_4__ {scalar_t__ driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 void* FUNC_5 (int *,char*,int ) ;
 struct iio_dev* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,struct iio_dev*) ;
 int FUNC_8 (int *,scalar_t__,int *,int *,int,int ,struct iio_dev*) ;
 struct ad7816_chip_info* FUNC_9 (struct iio_dev*) ;
 TYPE_2__* FUNC_10 (struct spi_device*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_11)
{
 struct ad7816_chip_info *VAR_12;
 struct iio_dev *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_1;
 VAR_12 = FUNC_9(VAR_13);

 FUNC_4(&VAR_11->dev, VAR_13);

 VAR_12->spi_dev = VAR_11;
 for (VAR_14 = 0; VAR_14 <= VAR_0; VAR_14++)
  VAR_12->oti_data[VAR_14] = 203;

 VAR_12->id = FUNC_10(VAR_11)->driver_data;
 VAR_12->rdwr_pin = FUNC_5(&VAR_11->dev, "rdwr", VAR_3);
 if (FUNC_0(VAR_12->rdwr_pin)) {
  VAR_15 = FUNC_1(VAR_12->rdwr_pin);
  FUNC_2(&VAR_11->dev, "Failed to request rdwr GPIO: %d\n",
   VAR_15);
  return VAR_15;
 }
 VAR_12->convert_pin = FUNC_5(&VAR_11->dev, "convert",
        VAR_3);
 if (FUNC_0(VAR_12->convert_pin)) {
  VAR_15 = FUNC_1(VAR_12->convert_pin);
  FUNC_2(&VAR_11->dev, "Failed to request convert GPIO: %d\n",
   VAR_15);
  return VAR_15;
 }
 if (VAR_12->id == VAR_4 || VAR_12->id == VAR_5) {
  VAR_12->busy_pin = FUNC_5(&VAR_11->dev, "busy",
      VAR_2);
  if (FUNC_0(VAR_12->busy_pin)) {
   VAR_15 = FUNC_1(VAR_12->busy_pin);
   FUNC_2(&VAR_11->dev, "Failed to request busy GPIO: %d\n",
    VAR_15);
   return VAR_15;
  }
 }

 VAR_13->name = FUNC_10(VAR_11)->name;
 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->info = &VAR_10;
 VAR_13->modes = VAR_6;

 if (VAR_11->irq) {

  VAR_15 = FUNC_8(&VAR_11->dev, VAR_11->irq,
      ((void*)0),
      &VAR_9,
      VAR_8 | VAR_7,
      VAR_13->name,
      VAR_13);
  if (VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_7(&VAR_11->dev, VAR_13);
 if (VAR_15)
  return VAR_15;

 FUNC_3(&VAR_11->dev, "%s temperature sensor and ADC registered.\n",
   VAR_13->name);

 return 0;
}
