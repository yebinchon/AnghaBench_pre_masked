
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sflash_data {int status_reg; int cur_direction; scalar_t__ cur_pos; scalar_t__ cur_tx_pos; scalar_t__ cur_rx_pos; int lock; int cur_spi; int xfer_completion; int rst; int dma_control_reg; int command_reg; int dev; scalar_t__ rx_status; scalar_t__ tx_status; struct spi_transfer* curr_xfer; } ;
struct spi_transfer {scalar_t__ len; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct tegra_sflash_data*,struct spi_transfer*) ;
 int FUNC_7 (struct tegra_sflash_data*,struct spi_transfer*) ;
 int FUNC_8 (struct tegra_sflash_data*,struct spi_transfer*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(struct tegra_sflash_data *VAR_4)
{
 struct spi_transfer *VAR_5 = VAR_4->curr_xfer;
 unsigned long VAR_6;

 FUNC_4(&VAR_4->lock, VAR_6);
 if (VAR_4->tx_status || VAR_4->rx_status || (VAR_4->status_reg & VAR_3)) {
  FUNC_1(VAR_4->dev,
   "CpuXfer ERROR bit set 0x%x\n", VAR_4->status_reg);
  FUNC_1(VAR_4->dev,
   "CpuXfer 0x%08x:0x%08x\n", VAR_4->command_reg,
    VAR_4->dma_control_reg);
  FUNC_2(VAR_4->rst);
  FUNC_9(2);
  FUNC_3(VAR_4->rst);
  FUNC_0(&VAR_4->xfer_completion);
  goto exit;
 }

 if (VAR_4->cur_direction & VAR_0)
  FUNC_7(VAR_4, VAR_5);

 if (VAR_4->cur_direction & VAR_1)
  VAR_4->cur_pos = VAR_4->cur_tx_pos;
 else
  VAR_4->cur_pos = VAR_4->cur_rx_pos;

 if (VAR_4->cur_pos == VAR_5->len) {
  FUNC_0(&VAR_4->xfer_completion);
  goto exit;
 }

 FUNC_6(VAR_4->cur_spi, VAR_4, VAR_5);
 FUNC_8(VAR_4, VAR_5);
exit:
 FUNC_5(&VAR_4->lock, VAR_6);
 return VAR_2;
}
