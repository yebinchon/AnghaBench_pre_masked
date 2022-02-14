
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {unsigned int speed_hz; unsigned int bits_per_word; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_device {int dummy; } ;
struct lantiq_ssc_spi {unsigned int bits_per_word; unsigned int speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lantiq_ssc_spi*) ;
 int FUNC_1 (struct lantiq_ssc_spi*) ;
 int FUNC_2 (struct lantiq_ssc_spi*,unsigned int) ;
 int FUNC_3 (struct lantiq_ssc_spi*,unsigned int) ;
 int FUNC_4 (struct lantiq_ssc_spi*,int ) ;
 int FUNC_5 (struct lantiq_ssc_spi*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct lantiq_ssc_spi *VAR_3,
         struct spi_device *VAR_4, struct spi_transfer *VAR_5)
{
 unsigned int VAR_6 = VAR_5->speed_hz;
 unsigned int VAR_7 = VAR_5->bits_per_word;
 u32 VAR_8;

 if (VAR_7 != VAR_3->bits_per_word ||
  VAR_6 != VAR_3->speed_hz) {
  FUNC_1(VAR_3);
  FUNC_3(VAR_3, VAR_6);
  FUNC_2(VAR_3, VAR_7);
  FUNC_0(VAR_3);

  VAR_3->speed_hz = VAR_6;
  VAR_3->bits_per_word = VAR_7;
 }


 VAR_8 = FUNC_4(VAR_3, VAR_0);
 if (VAR_5->tx_buf)
  VAR_8 &= ~VAR_2;
 else
  VAR_8 |= VAR_2;

 if (VAR_5->rx_buf)
  VAR_8 &= ~VAR_1;
 else
  VAR_8 |= VAR_1;

 FUNC_5(VAR_3, VAR_8, VAR_0);
}
