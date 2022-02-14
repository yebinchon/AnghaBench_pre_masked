
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_xcomm {int i2c; int * buf; } ;
struct spi_transfer {int len; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct spi_xcomm *VAR_2,
 struct spi_device *VAR_3, struct spi_transfer *VAR_4)
{
 int VAR_5;

 if (VAR_4->tx_buf) {
  VAR_2->buf[0] = VAR_1;
  FUNC_2(VAR_2->buf + 1, VAR_4->tx_buf, VAR_4->len);

  VAR_5 = FUNC_1(VAR_2->i2c, VAR_2->buf, VAR_4->len + 1);
  if (VAR_5 < 0)
   return VAR_5;
  else if (VAR_5 != VAR_4->len + 1)
   return -VAR_0;
 } else if (VAR_4->rx_buf) {
  VAR_5 = FUNC_0(VAR_2->i2c, VAR_4->rx_buf, VAR_4->len);
  if (VAR_5 < 0)
   return VAR_5;
  else if (VAR_5 != VAR_4->len)
   return -VAR_0;
 }

 return VAR_4->len;
}
