
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int bits_per_word; int rx_buf; int tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct altera_spi {int count; int bytes_per_word; int len; scalar_t__ irq; scalar_t__ base; int imr; int rx; int tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct altera_spi*) ;
 int FUNC_2 (struct altera_spi*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct spi_master*) ;
 struct altera_spi* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct spi_master *VAR_4,
 struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct altera_spi *VAR_7 = FUNC_6(VAR_4);

 VAR_7->tx = VAR_6->tx_buf;
 VAR_7->rx = VAR_6->rx_buf;
 VAR_7->count = 0;
 VAR_7->bytes_per_word = FUNC_0(VAR_6->bits_per_word, 8);
 VAR_7->len = VAR_6->len / VAR_7->bytes_per_word;

 if (VAR_7->irq >= 0) {

  VAR_7->imr |= VAR_1;
  FUNC_7(VAR_7->imr, VAR_7->base + VAR_0);


  FUNC_2(VAR_7);
 } else {
  while (VAR_7->count < VAR_7->len) {
   FUNC_2(VAR_7);

   while (!(FUNC_4(VAR_7->base + VAR_2) &
     VAR_3))
    FUNC_3();

   FUNC_1(VAR_7);
  }
  FUNC_5(VAR_4);
 }

 return VAR_6->len;
}
