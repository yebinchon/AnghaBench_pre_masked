
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device_id {int driver_data; } ;
struct spi_device {int max_speed_hz; int dev; int irq; } ;
struct TYPE_3__ {int * dev; struct spi_device* client; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 TYPE_1__ VAR_1 ;
 struct spi_device_id* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(struct spi_device *VAR_2)
{
 const struct spi_device_id *VAR_3 = FUNC_1(VAR_2);


 if (VAR_2->max_speed_hz > 1000000) {
  FUNC_0(&VAR_2->dev, "f(sample) %d KHz?\n",
    (VAR_2->max_speed_hz/1000));
  return -VAR_0;
 }

 VAR_1.irq = VAR_2->irq;
 VAR_1.client = VAR_2;
 VAR_1.dev = &VAR_2->dev;

 return FUNC_2(&VAR_1, VAR_3->driver_data);
}
