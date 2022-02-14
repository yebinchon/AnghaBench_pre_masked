
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_qspi {int dev; } ;
struct spi_transfer {scalar_t__ rx_buf; scalar_t__ tx_buf; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ti_qspi*,struct spi_transfer*,int) ;
 int FUNC_2 (struct ti_qspi*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_3(struct ti_qspi *VAR_0, struct spi_transfer *VAR_1,
        int VAR_2)
{
 int VAR_3;

 if (VAR_1->tx_buf) {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_0->dev, "Error while writing\n");
   return VAR_3;
  }
 }

 if (VAR_1->rx_buf) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_0->dev, "Error while reading\n");
   return VAR_3;
  }
 }

 return 0;
}
