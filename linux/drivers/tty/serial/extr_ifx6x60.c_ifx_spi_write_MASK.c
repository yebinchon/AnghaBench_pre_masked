
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ifx_spi_device* driver_data; } ;
struct ifx_spi_device {int fifo_lock; int tx_fifo; } ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ifx_spi_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_0, const unsigned char *VAR_1,
    int VAR_2)
{
 struct ifx_spi_device *VAR_3 = VAR_0->driver_data;
 unsigned char *VAR_4 = (unsigned char *)VAR_1;
 unsigned long VAR_5;
 bool VAR_6;
 int VAR_7;

 FUNC_3(&VAR_3->fifo_lock, VAR_5);
 VAR_6 = FUNC_1(&VAR_3->tx_fifo);
 VAR_7 = FUNC_0(&VAR_3->tx_fifo, VAR_4, VAR_2);
 FUNC_4(&VAR_3->fifo_lock, VAR_5);
 if (VAR_6)
  FUNC_2(VAR_3);

 return VAR_7;
}
