
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spidev_data {scalar_t__ users; int devt; int device_entry; int spi_lock; int * spi; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct spidev_data*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct spidev_data* FUNC_7 (struct spi_device*) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_3)
{
 struct spidev_data *VAR_4 = FUNC_7(VAR_3);


 FUNC_8(&VAR_4->spi_lock);
 VAR_4->spi = ((void*)0);
 FUNC_9(&VAR_4->spi_lock);


 FUNC_5(&VAR_0);
 FUNC_4(&VAR_4->device_entry);
 FUNC_2(VAR_2, VAR_4->devt);
 FUNC_1(FUNC_0(VAR_4->devt), VAR_1);
 if (VAR_4->users == 0)
  FUNC_3(VAR_4);
 FUNC_6(&VAR_0);

 return 0;
}
