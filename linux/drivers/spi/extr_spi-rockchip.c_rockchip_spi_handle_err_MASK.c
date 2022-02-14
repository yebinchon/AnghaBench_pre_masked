
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dma_rx; int dma_tx; } ;
struct rockchip_spi {int state; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rockchip_spi*,int) ;
 struct rockchip_spi* FUNC_3 (struct spi_master*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct spi_master *VAR_3,
        struct spi_message *VAR_4)
{
 struct rockchip_spi *VAR_5 = FUNC_3(VAR_3);




 FUNC_2(VAR_5, 0);


 FUNC_4(0, VAR_5->regs + VAR_0);

 if (FUNC_0(&VAR_5->state) & VAR_2)
  FUNC_1(VAR_3->dma_tx);

 if (FUNC_0(&VAR_5->state) & VAR_1)
  FUNC_1(VAR_3->dma_rx);
}
