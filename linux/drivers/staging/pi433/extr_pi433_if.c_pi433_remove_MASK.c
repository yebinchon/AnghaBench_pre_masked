
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct pi433_device {struct pi433_device* rx_buffer; int cdev; int devt; int tx_task_struct; int * spi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pi433_device*) ;
 int FUNC_3 (struct pi433_device*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct pi433_device*) ;
 struct pi433_device* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_1)
{
 struct pi433_device *VAR_2 = FUNC_6(VAR_1);


 FUNC_2(VAR_2);


 VAR_2->spi = ((void*)0);

 FUNC_4(VAR_2->tx_task_struct);

 FUNC_1(VAR_0, VAR_2->devt);

 FUNC_0(VAR_2->cdev);

 FUNC_5(VAR_2);

 FUNC_3(VAR_2->rx_buffer);
 FUNC_3(VAR_2);

 return 0;
}
