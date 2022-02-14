
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; scalar_t__ tx_buf; } ;
struct rockchip_spi {int tx_left; int n_bytes; int rx_left; scalar_t__ regs; scalar_t__ tx; int rx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rockchip_spi*) ;
 int FUNC_1 (struct rockchip_spi*,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct rockchip_spi *VAR_2,
  struct spi_transfer *VAR_3)
{
 VAR_2->tx = VAR_3->tx_buf;
 VAR_2->rx = VAR_3->rx_buf;
 VAR_2->tx_left = VAR_2->tx ? VAR_3->len / VAR_2->n_bytes : 0;
 VAR_2->rx_left = VAR_3->len / VAR_2->n_bytes;

 FUNC_2(VAR_0, VAR_2->regs + VAR_1);
 FUNC_1(VAR_2, 1);

 if (VAR_2->tx_left)
  FUNC_0(VAR_2);


 return 1;
}
