
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct mtk_spi {int tx_sgl_len; int rx_sgl_len; int xfer_len; } ;


 int FUNC_0 (int) ;
 struct mtk_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static void FUNC_2(struct spi_master *VAR_0)
{
 int VAR_1;
 struct mtk_spi *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->tx_sgl_len && VAR_2->rx_sgl_len) {
  if (VAR_2->tx_sgl_len > VAR_2->rx_sgl_len) {
   VAR_1 = FUNC_0(VAR_2->rx_sgl_len);
   VAR_2->xfer_len = VAR_2->rx_sgl_len - VAR_1;
   VAR_2->rx_sgl_len = VAR_1;
   VAR_2->tx_sgl_len -= VAR_2->xfer_len;
  } else {
   VAR_1 = FUNC_0(VAR_2->tx_sgl_len);
   VAR_2->xfer_len = VAR_2->tx_sgl_len - VAR_1;
   VAR_2->tx_sgl_len = VAR_1;
   VAR_2->rx_sgl_len -= VAR_2->xfer_len;
  }
 } else if (VAR_2->tx_sgl_len) {
  VAR_1 = FUNC_0(VAR_2->tx_sgl_len);
  VAR_2->xfer_len = VAR_2->tx_sgl_len - VAR_1;
  VAR_2->tx_sgl_len = VAR_1;
 } else if (VAR_2->rx_sgl_len) {
  VAR_1 = FUNC_0(VAR_2->rx_sgl_len);
  VAR_2->xfer_len = VAR_2->rx_sgl_len - VAR_1;
  VAR_2->rx_sgl_len = VAR_1;
 }
}
