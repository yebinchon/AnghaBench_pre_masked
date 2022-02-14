
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spidev_data {int spi_lock; struct spi_device* spi; } ;
struct spi_message {int actual_length; } ;
struct spi_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device*,struct spi_message*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct spidev_data *VAR_1, struct spi_message *VAR_2)
{
 int VAR_3;
 struct spi_device *VAR_4;

 FUNC_1(&VAR_1->spi_lock);
 VAR_4 = VAR_1->spi;
 FUNC_2(&VAR_1->spi_lock);

 if (VAR_4 == ((void*)0))
  VAR_3 = -VAR_0;
 else
  VAR_3 = FUNC_0(VAR_4, VAR_2);

 if (VAR_3 == 0)
  VAR_3 = VAR_2->actual_length;

 return VAR_3;
}
