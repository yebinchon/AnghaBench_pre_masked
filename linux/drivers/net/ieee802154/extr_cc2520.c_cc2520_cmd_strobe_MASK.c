
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int* tx_buf; int* rx_buf; int len; } ;
struct spi_message {int dummy; } ;
struct cc2520_private {int* buf; int buffer_mutex; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int
FUNC_6(struct cc2520_private *VAR_0, u8 VAR_1)
{
 int VAR_2;
 u8 VAR_3 = 0xff;
 struct spi_message VAR_4;
 struct spi_transfer VAR_5 = {
  .len = 0,
  .tx_buf = VAR_0->buf,
  .rx_buf = VAR_0->buf,
 };

 FUNC_4(&VAR_4);
 FUNC_3(&VAR_5, &VAR_4);

 FUNC_1(&VAR_0->buffer_mutex);
 VAR_0->buf[VAR_5.len++] = VAR_1;
 FUNC_0(&VAR_0->spi->dev,
   "command strobe buf[0] = %02x\n",
   VAR_0->buf[0]);

 VAR_2 = FUNC_5(VAR_0->spi, &VAR_4);
 if (!VAR_2)
  VAR_3 = VAR_0->buf[0];
 FUNC_0(&VAR_0->spi->dev,
   "buf[0] = %02x\n", VAR_0->buf[0]);
 FUNC_2(&VAR_0->buffer_mutex);

 return VAR_2;
}
