
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;
struct cdns_spi {int tx_bytes; int rx_bytes; int rxbuf; int txbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdns_spi*) ;
 int FUNC_1 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_2 (struct cdns_spi*,int ,int ) ;
 struct cdns_spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_2,
        struct spi_device *VAR_3,
        struct spi_transfer *VAR_4)
{
 struct cdns_spi *VAR_5 = FUNC_3(VAR_2);

 VAR_5->txbuf = VAR_4->tx_buf;
 VAR_5->rxbuf = VAR_4->rx_buf;
 VAR_5->tx_bytes = VAR_4->len;
 VAR_5->rx_bytes = VAR_4->len;

 FUNC_1(VAR_3, VAR_4);

 FUNC_0(VAR_5);

 FUNC_2(VAR_5, VAR_0, VAR_1);
 return VAR_4->len;
}
