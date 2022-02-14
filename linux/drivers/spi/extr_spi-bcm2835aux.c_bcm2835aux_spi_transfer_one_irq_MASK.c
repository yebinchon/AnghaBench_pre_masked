
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct bcm2835aux_spi {int pending; scalar_t__ tx_len; int * cntl; int count_transfer_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_1 (struct bcm2835aux_spi*,int ) ;
 int FUNC_2 (struct bcm2835aux_spi*,int ,int ) ;
 int FUNC_3 (struct bcm2835aux_spi*) ;
 struct bcm2835aux_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_4,
        struct spi_device *VAR_5,
        struct spi_transfer *VAR_6)
{
 struct bcm2835aux_spi *VAR_7 = FUNC_4(VAR_4);


 VAR_7->count_transfer_irq++;


 FUNC_2(VAR_7, VAR_1, VAR_7->cntl[1]);
 FUNC_2(VAR_7, VAR_0, VAR_7->cntl[0]);


 while ((VAR_7->tx_len) &&
        (VAR_7->pending < 12) &&
        (!(FUNC_1(VAR_7, VAR_2) &
    VAR_3))) {
  FUNC_3(VAR_7);
 }


 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
