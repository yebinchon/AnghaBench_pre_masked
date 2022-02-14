
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ifx_spi_device* driver_data; } ;
struct ifx_spi_device {int tx_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1)
{
 struct ifx_spi_device *VAR_2 = VAR_1->driver_data;
 return VAR_0 - FUNC_0(&VAR_2->tx_fifo);
}
