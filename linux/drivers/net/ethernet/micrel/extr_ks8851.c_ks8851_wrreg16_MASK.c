
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct ks8851_net {int netdev; int spidev; struct spi_message spi_msg1; struct spi_transfer spi_xfer1; } ;
typedef int __le16 ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static void FUNC_4(struct ks8851_net *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 struct spi_transfer *VAR_4 = &VAR_1->spi_xfer1;
 struct spi_message *VAR_5 = &VAR_1->spi_msg1;
 __le16 VAR_6[2];
 int VAR_7;

 VAR_6[0] = FUNC_1(FUNC_0(VAR_2 & 2 ? 0xC : 0x03, VAR_2) | VAR_0);
 VAR_6[1] = FUNC_1(VAR_3);

 VAR_4->tx_buf = VAR_6;
 VAR_4->rx_buf = ((void*)0);
 VAR_4->len = 4;

 VAR_7 = FUNC_3(VAR_1->spidev, VAR_5);
 if (VAR_7 < 0)
  FUNC_2(VAR_1->netdev, "spi_sync() failed\n");
}
