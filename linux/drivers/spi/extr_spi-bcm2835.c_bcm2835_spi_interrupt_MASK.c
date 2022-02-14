
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_controller {int xfer_completion; } ;
struct bcm2835_spi {int rx_len; scalar_t__ tx_len; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcm2835_spi*,int ) ;
 int FUNC_1 (struct bcm2835_spi*) ;
 int FUNC_2 (struct bcm2835_spi*,int ) ;
 int FUNC_3 (struct spi_controller*) ;
 int FUNC_4 (struct bcm2835_spi*) ;
 int FUNC_5 (struct bcm2835_spi*,int ) ;
 int FUNC_6 (int *) ;
 struct bcm2835_spi* FUNC_7 (struct spi_controller*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_7, void *VAR_8)
{
 struct spi_controller *VAR_9 = VAR_8;
 struct bcm2835_spi *VAR_10 = FUNC_7(VAR_9);
 u32 VAR_11 = FUNC_0(VAR_10, VAR_0);





 if (VAR_11 & VAR_2)
  FUNC_2(VAR_10, VAR_4);
 else if (VAR_11 & VAR_3)
  FUNC_2(VAR_10, VAR_5);

 if (VAR_10->tx_len && VAR_11 & VAR_1)
  FUNC_5(VAR_10, VAR_4);


 FUNC_1(VAR_10);

 FUNC_4(VAR_10);

 if (!VAR_10->rx_len) {

  FUNC_3(VAR_9);

  FUNC_6(&VAR_9->xfer_completion);
 }

 return VAR_6;
}
