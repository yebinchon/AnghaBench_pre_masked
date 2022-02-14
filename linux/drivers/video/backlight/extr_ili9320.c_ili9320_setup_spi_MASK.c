
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct ili9320_spi {int message; TYPE_2__* xfer; int buffer_data; int buffer_addr; struct spi_device* dev; } ;
struct TYPE_3__ {struct ili9320_spi spi; } ;
struct ili9320 {int write; TYPE_1__ access; } ;
struct TYPE_4__ {int len; int bits_per_word; int cs_change; int tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ili9320 *VAR_1,
     struct spi_device *VAR_2)
{
 struct ili9320_spi *VAR_3 = &VAR_1->access.spi;

 VAR_1->write = VAR_0;
 VAR_3->dev = VAR_2;






 VAR_3->xfer[0].tx_buf = VAR_3->buffer_addr;
 VAR_3->xfer[1].tx_buf = VAR_3->buffer_data;
 VAR_3->xfer[0].len = 3;
 VAR_3->xfer[1].len = 3;
 VAR_3->xfer[0].bits_per_word = 8;
 VAR_3->xfer[1].bits_per_word = 8;
 VAR_3->xfer[0].cs_change = 1;

 FUNC_1(&VAR_3->message);
 FUNC_0(&VAR_3->xfer[0], &VAR_3->message);
 FUNC_0(&VAR_3->xfer[1], &VAR_3->message);
}
