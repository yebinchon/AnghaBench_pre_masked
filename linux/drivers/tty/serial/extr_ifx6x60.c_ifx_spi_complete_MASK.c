
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int srdy; } ;
struct TYPE_5__ {int status; int actual_length; } ;
struct ifx_spi_device {unsigned char spi_slave_cts; int tty_port; scalar_t__ spi_more; int io_work_tasklet; int flags; TYPE_3__ gpio; int tx_fifo; scalar_t__ write_pending; TYPE_2__ spi_msg; TYPE_1__* spi_dev; int * rx_buffer; int (* swap_buf ) (int *,int,int *) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,unsigned char*,unsigned char*) ;
 int FUNC_4 (struct ifx_spi_device*,int *,size_t) ;
 int FUNC_5 (struct ifx_spi_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (struct ifx_spi_device*) ;
 int FUNC_9 (struct ifx_spi_device*) ;
 int FUNC_10 (int *,size_t,int *) ;
 int FUNC_11 (int *,int,int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(void *VAR_8)
{
 struct ifx_spi_device *VAR_9 = VAR_8;
 int VAR_10;
 int VAR_11;
 unsigned char VAR_12 = 0;
 unsigned char VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_9(VAR_9);

 if (!VAR_9->spi_msg.status) {

  VAR_9->swap_buf(VAR_9->rx_buffer, VAR_2,
   &VAR_9->rx_buffer[VAR_2]);
  VAR_17 = FUNC_3(VAR_9->rx_buffer,
    &VAR_10, &VAR_12, &VAR_13);
  if (VAR_17 == VAR_0) {
   FUNC_1(&VAR_9->spi_dev->dev,
    "ignore input: invalid header 0");
   VAR_9->spi_slave_cts = 0;
   goto complete_exit;
  } else if (VAR_17 == VAR_1) {
   FUNC_1(&VAR_9->spi_dev->dev,
    "ignore input: invalid header F");
   goto complete_exit;
  }

  VAR_9->spi_slave_cts = VAR_13;

  VAR_11 = FUNC_7((unsigned int)VAR_10,
     VAR_9->spi_msg.actual_length);
  VAR_9->swap_buf(
   (VAR_9->rx_buffer + VAR_2),
    VAR_11,
    &VAR_9->rx_buffer[VAR_7]);
  FUNC_4(
   VAR_9,
   VAR_9->rx_buffer + VAR_2,
   (size_t)VAR_11);
 } else {
  VAR_12 = 0;
  FUNC_1(&VAR_9->spi_dev->dev, "SPI transfer error %d",
         VAR_9->spi_msg.status);
 }

complete_exit:
 if (VAR_9->write_pending) {
  VAR_9->write_pending = 0;
  VAR_14 = 1;
 }

 FUNC_0(VAR_5, &(VAR_9->flags));

 VAR_15 = FUNC_6(&VAR_9->tx_fifo);
 VAR_16 = FUNC_2(VAR_9->gpio.srdy);
 if (!VAR_16)
  FUNC_5(VAR_9, VAR_4);


 if (FUNC_13(VAR_6, &VAR_9->flags))
  FUNC_12(&VAR_9->io_work_tasklet);
 else {
  if (VAR_12 || VAR_9->spi_more || VAR_15 > 0 ||
   VAR_14) {
   if (VAR_9->spi_slave_cts) {
    if (VAR_12)
     FUNC_8(VAR_9);
   } else
    FUNC_8(VAR_9);
  } else {





   FUNC_5(VAR_9,
        VAR_3);
   FUNC_14(&VAR_9->tty_port);
  }
 }
}
