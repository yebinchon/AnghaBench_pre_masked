
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct spi_transfer {int* tx_buf; int bits_per_word; int len; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct ade7854_state {int* tx; int buf_lock; int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct ade7854_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
     u16 VAR_3,
     u32 VAR_4,
     int VAR_5)
{
 int VAR_6;
 struct iio_dev *VAR_7 = FUNC_0(VAR_2);
 struct ade7854_state *VAR_8 = FUNC_1(VAR_7);
 struct spi_transfer VAR_9 = {
  .tx_buf = VAR_8->tx,
  .bits_per_word = 8,
  .len = 4,
 };

 FUNC_2(&VAR_8->buf_lock);
 VAR_8->tx[0] = VAR_0;
 VAR_8->tx[1] = (VAR_3 >> 8) & 0xFF;
 VAR_8->tx[2] = VAR_3 & 0xFF;
 switch (VAR_5) {
 case 8:
  VAR_8->tx[3] = VAR_4 & 0xFF;
  break;
 case 16:
  VAR_9.len = 5;
  VAR_8->tx[3] = (VAR_4 >> 8) & 0xFF;
  VAR_8->tx[4] = VAR_4 & 0xFF;
  break;
 case 24:
  VAR_9.len = 6;
  VAR_8->tx[3] = (VAR_4 >> 16) & 0xFF;
  VAR_8->tx[4] = (VAR_4 >> 8) & 0xFF;
  VAR_8->tx[5] = VAR_4 & 0xFF;
  break;
 case 32:
  VAR_9.len = 7;
  VAR_8->tx[3] = (VAR_4 >> 24) & 0xFF;
  VAR_8->tx[4] = (VAR_4 >> 16) & 0xFF;
  VAR_8->tx[5] = (VAR_4 >> 8) & 0xFF;
  VAR_8->tx[6] = VAR_4 & 0xFF;
  break;
 default:
  VAR_6 = -VAR_1;
  goto unlock;
 }

 VAR_6 = FUNC_4(VAR_8->spi, &VAR_9, 1);
unlock:
 FUNC_3(&VAR_8->buf_lock);

 return VAR_6;
}
