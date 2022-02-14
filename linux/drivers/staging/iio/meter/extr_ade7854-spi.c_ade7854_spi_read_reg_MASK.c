
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct spi_transfer {int* tx_buf; int bits_per_word; int len; int* rx_buf; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int* tx; int* rx; int buf_lock; TYPE_1__* spi; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_transfer*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,char*,int) ;
 struct iio_dev* FUNC_4 (struct device*) ;
 struct ade7854_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1,
    u16 VAR_2,
    u32 *VAR_3,
    int VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_4(VAR_1);
 struct ade7854_state *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;
 struct spi_transfer VAR_8[] = {
  {
   .tx_buf = VAR_6->tx,
   .bits_per_word = 8,
   .len = 3,
  }, {
   .rx_buf = VAR_6->rx,
   .bits_per_word = 8,
   .len = VAR_4,
  }
 };

 FUNC_6(&VAR_6->buf_lock);

 VAR_6->tx[0] = VAR_0;
 VAR_6->tx[1] = (VAR_2 >> 8) & 0xFF;
 VAR_6->tx[2] = VAR_2 & 0xFF;

 VAR_7 = FUNC_8(VAR_6->spi, VAR_8, FUNC_0(VAR_8));
 if (VAR_7 < 0) {
  FUNC_3(&VAR_6->spi->dev, "problem when reading register 0x%02X",
   VAR_2);
  goto unlock;
 }

 switch (VAR_4) {
 case 8:
  *VAR_3 = VAR_6->rx[0];
  break;
 case 16:
  *VAR_3 = FUNC_1((const __be16 *)VAR_6->rx);
  break;
 case 24:
  *VAR_3 = (VAR_6->rx[0] << 16) | (VAR_6->rx[1] << 8) | VAR_6->rx[2];
  break;
 case 32:
  *VAR_3 = FUNC_2((const __be32 *)VAR_6->rx);
  break;
 }

unlock:
 FUNC_7(&VAR_6->buf_lock);
 return VAR_7;
}
