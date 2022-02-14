
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spidev_data {int spi_lock; TYPE_1__* spi; int speed_hz; struct spidev_data* rx_buffer; struct spidev_data* tx_buffer; int users; } ;
struct inode {int dummy; } ;
struct file {struct spidev_data* private_data; } ;
struct TYPE_2__ {int max_speed_hz; } ;


 int VAR_0 ;
 int FUNC_0 (struct spidev_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct spidev_data *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = VAR_2->private_data;
 VAR_2->private_data = ((void*)0);


 VAR_3->users--;
 if (!VAR_3->users) {
  int VAR_4;

  FUNC_0(VAR_3->tx_buffer);
  VAR_3->tx_buffer = ((void*)0);

  FUNC_0(VAR_3->rx_buffer);
  VAR_3->rx_buffer = ((void*)0);

  FUNC_3(&VAR_3->spi_lock);
  if (VAR_3->spi)
   VAR_3->speed_hz = VAR_3->spi->max_speed_hz;


  VAR_4 = (VAR_3->spi == ((void*)0));
  FUNC_4(&VAR_3->spi_lock);

  if (VAR_4)
   FUNC_0(VAR_3);
 }
 FUNC_2(&VAR_0);

 return 0;
}
