
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int xfer_completion; } ;
struct bcm2835aux_spi {int* cntl; int rx_len; int tx_len; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm2835aux_spi*,int ) ;
 int FUNC_1 (struct bcm2835aux_spi*) ;
 int FUNC_2 (struct bcm2835aux_spi*,int ,int) ;
 int FUNC_3 (int *) ;
 struct bcm2835aux_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct spi_master *VAR_7 = VAR_6;
 struct bcm2835aux_spi *VAR_8 = FUNC_4(VAR_7);


 if (!(FUNC_0(VAR_8, VAR_0) &
       (VAR_2 | VAR_1)))
  return VAR_4;


 FUNC_1(VAR_8);

 if (!VAR_8->tx_len) {

  FUNC_2(VAR_8, VAR_0, VAR_8->cntl[1] |
   VAR_1);
 }


 if (!VAR_8->rx_len) {
  FUNC_2(VAR_8, VAR_0, VAR_8->cntl[1]);
  FUNC_3(&VAR_7->xfer_completion);
 }

 return VAR_3;
}
