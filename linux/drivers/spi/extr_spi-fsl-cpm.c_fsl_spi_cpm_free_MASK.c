
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc8xxx_spi {int flags; int pram; int tx_bd; int dma_dummy_tx; int dma_dummy_rx; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 () ;

void FUNC_4(struct mpc8xxx_spi *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;

 if (!(VAR_5->flags & VAR_3))
  return;

 FUNC_2(VAR_6, VAR_5->dma_dummy_rx, VAR_4, VAR_0);
 FUNC_2(VAR_6, VAR_5->dma_dummy_tx, VAR_2, VAR_1);
 FUNC_0(FUNC_1(VAR_5->tx_bd));
 FUNC_0(FUNC_1(VAR_5->pram));
 FUNC_3();
}
