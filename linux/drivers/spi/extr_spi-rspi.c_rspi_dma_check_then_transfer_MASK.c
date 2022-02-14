
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_transfer {int rx_sg; scalar_t__ rx_buf; int tx_sg; } ;
struct rspi_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int can_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct rspi_data*,struct spi_transfer*) ;
 int FUNC_1 (struct rspi_data*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct rspi_data *VAR_1,
      struct spi_transfer *VAR_2)
{
 if (!VAR_1->ctlr->can_dma || !FUNC_0(VAR_1, VAR_2))
  return -VAR_0;


 return FUNC_1(VAR_1, &VAR_2->tx_sg,
    VAR_2->rx_buf ? &VAR_2->rx_sg : ((void*)0));
}
