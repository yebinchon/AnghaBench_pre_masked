
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_spi_data {int cur_direction; scalar_t__ cur_pos; scalar_t__ cur_tx_pos; scalar_t__ cur_rx_pos; int lock; int cur_spi; int xfer_completion; int rst; int dma_control_reg; int command1_reg; int dev; int status_reg; scalar_t__ rx_status; scalar_t__ tx_status; struct spi_transfer* curr_xfer; } ;
struct spi_transfer {scalar_t__ len; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_7 (struct tegra_spi_data*) ;
 int FUNC_8 (struct tegra_spi_data*) ;
 int FUNC_9 (struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_10 (struct tegra_spi_data*,struct spi_transfer*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(struct tegra_spi_data *VAR_3)
{
 struct spi_transfer *VAR_4 = VAR_3->curr_xfer;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);
 if (VAR_3->tx_status || VAR_3->rx_status) {
  FUNC_1(VAR_3->dev, "CpuXfer ERROR bit set 0x%x\n",
   VAR_3->status_reg);
  FUNC_1(VAR_3->dev, "CpuXfer 0x%08x:0x%08x\n",
   VAR_3->command1_reg, VAR_3->dma_control_reg);
  FUNC_7(VAR_3);
  FUNC_8(VAR_3);
  FUNC_0(&VAR_3->xfer_completion);
  FUNC_5(&VAR_3->lock, VAR_5);
  FUNC_2(VAR_3->rst);
  FUNC_11(2);
  FUNC_3(VAR_3->rst);
  return VAR_2;
 }

 if (VAR_3->cur_direction & VAR_0)
  FUNC_9(VAR_3, VAR_4);

 if (VAR_3->cur_direction & VAR_1)
  VAR_3->cur_pos = VAR_3->cur_tx_pos;
 else
  VAR_3->cur_pos = VAR_3->cur_rx_pos;

 if (VAR_3->cur_pos == VAR_4->len) {
  FUNC_0(&VAR_3->xfer_completion);
  goto exit;
 }

 FUNC_6(VAR_3->cur_spi, VAR_3, VAR_4);
 FUNC_10(VAR_3, VAR_4);
exit:
 FUNC_5(&VAR_3->lock, VAR_5);
 return VAR_2;
}
