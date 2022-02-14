
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int * tx_buf; int len; } ;
struct spi_engine {int * tx_buf; int tx_length; struct spi_transfer* tx_xfer; } ;


 int FUNC_0 (struct spi_engine*,struct spi_transfer**) ;

__attribute__((used)) static void FUNC_1(struct spi_engine *VAR_0)
{
 struct spi_transfer *VAR_1 = VAR_0->tx_xfer;

 do {
  FUNC_0(VAR_0, &VAR_1);
 } while (VAR_1 && !VAR_1->tx_buf);

 VAR_0->tx_xfer = VAR_1;
 if (VAR_1) {
  VAR_0->tx_length = VAR_1->len;
  VAR_0->tx_buf = VAR_1->tx_buf;
 } else {
  VAR_0->tx_buf = ((void*)0);
 }
}
