
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct ks8851_net {TYPE_2__* spidev; int netdev; struct spi_transfer spi_xfer1; struct spi_message spi_msg1; struct spi_transfer* spi_xfer2; struct spi_message spi_msg2; int * rxd; scalar_t__ txd; } ;
typedef int __le16 ;
struct TYPE_4__ {TYPE_1__* master; } ;
struct TYPE_3__ {int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*,struct spi_message*) ;

__attribute__((used)) static void FUNC_4(struct ks8851_net *VAR_2, unsigned VAR_3,
    u8 *VAR_4, unsigned VAR_5)
{
 struct spi_transfer *VAR_6;
 struct spi_message *VAR_7;
 __le16 *VAR_8 = (__le16 *)VAR_2->txd;
 u8 *VAR_9 = VAR_2->rxd;
 int VAR_10;

 VAR_8[0] = FUNC_0(VAR_3 | VAR_0);

 if (VAR_2->spidev->master->flags & VAR_1) {
  VAR_7 = &VAR_2->spi_msg2;
  VAR_6 = VAR_2->spi_xfer2;

  VAR_6->tx_buf = VAR_8;
  VAR_6->rx_buf = ((void*)0);
  VAR_6->len = 2;

  VAR_6++;
  VAR_6->tx_buf = ((void*)0);
  VAR_6->rx_buf = VAR_9;
  VAR_6->len = VAR_5;
 } else {
  VAR_7 = &VAR_2->spi_msg1;
  VAR_6 = &VAR_2->spi_xfer1;

  VAR_6->tx_buf = VAR_8;
  VAR_6->rx_buf = VAR_9;
  VAR_6->len = VAR_5 + 2;
 }

 VAR_10 = FUNC_3(VAR_2->spidev, VAR_7);
 if (VAR_10 < 0)
  FUNC_2(VAR_2->netdev, "read: spi_sync() failed\n");
 else if (VAR_2->spidev->master->flags & VAR_1)
  FUNC_1(VAR_4, VAR_9, VAR_5);
 else
  FUNC_1(VAR_4, VAR_9 + 2, VAR_5);
}
