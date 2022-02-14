
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tiny_spi {scalar_t__ irq; int len; scalar_t__ base; int done; scalar_t__ txc; int * txp; scalar_t__ rxc; int * rxp; } ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 struct tiny_spi* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct tiny_spi*) ;
 int FUNC_3 (struct tiny_spi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct tiny_spi *VAR_7 = FUNC_1(VAR_5);
 const u8 *VAR_8 = VAR_6->tx_buf;
 u8 *VAR_9 = VAR_6->rx_buf;
 unsigned int VAR_10;

 if (VAR_7->irq >= 0) {

  VAR_7->len = VAR_6->len;
  VAR_7->txp = VAR_6->tx_buf;
  VAR_7->rxp = VAR_6->rx_buf;
  VAR_7->txc = 0;
  VAR_7->rxc = 0;


  if (VAR_6->len > 1) {
   FUNC_5(VAR_7->txp ? *VAR_7->txp++ : 0,
          VAR_7->base + VAR_4);
   VAR_7->txc++;
   FUNC_5(VAR_7->txp ? *VAR_7->txp++ : 0,
          VAR_7->base + VAR_4);
   VAR_7->txc++;
   FUNC_5(VAR_3, VAR_7->base + VAR_1);
  } else {
   FUNC_5(VAR_7->txp ? *VAR_7->txp++ : 0,
          VAR_7->base + VAR_4);
   VAR_7->txc++;
   FUNC_5(VAR_2, VAR_7->base + VAR_1);
  }

  FUNC_4(&VAR_7->done);
 } else {

  FUNC_5(VAR_8 ? *VAR_8++ : 0, VAR_7->base + VAR_4);
  for (VAR_10 = 1; VAR_10 < VAR_6->len; VAR_10++) {
   FUNC_5(VAR_8 ? *VAR_8++ : 0, VAR_7->base + VAR_4);

   if (VAR_9 || (VAR_10 != VAR_6->len - 1))
    FUNC_3(VAR_7);
   if (VAR_9)
    *VAR_9++ = FUNC_0(VAR_7->base + VAR_4);
  }
  FUNC_2(VAR_7);
  if (VAR_9)
   *VAR_9++ = FUNC_0(VAR_7->base + VAR_0);
 }

 return VAR_6->len;
}
