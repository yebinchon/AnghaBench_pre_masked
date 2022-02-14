
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int status; } ;
struct cc2520_private {int buffer_mutex; TYPE_1__* spi; int * buf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int
FUNC_6(struct cc2520_private *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 struct spi_message VAR_5;
 struct spi_transfer VAR_6 = {
  .len = 0,
  .tx_buf = VAR_1->buf,
  .rx_buf = VAR_1->buf,
 };

 struct spi_transfer VAR_7 = {
  .len = 1,
  .rx_buf = VAR_3,
 };

 FUNC_4(&VAR_5);
 FUNC_3(&VAR_6, &VAR_5);
 FUNC_3(&VAR_7, &VAR_5);

 FUNC_1(&VAR_1->buffer_mutex);
 VAR_1->buf[VAR_6++] = VAR_0;
 VAR_1->buf[VAR_6++] = VAR_2;

 VAR_4 = FUNC_5(VAR_1->spi, &VAR_5);
 FUNC_0(&VAR_1->spi->dev,
  "spi status = %d\n", VAR_4);
 if (VAR_5.status)
  VAR_4 = VAR_5.status;

 FUNC_2(&VAR_1->buffer_mutex);

 return VAR_4;
}
