
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_qspi_flash {size_t cs; scalar_t__ presc; struct stm32_qspi* qspi; } ;
struct stm32_qspi {int cr_reg; int dcr_reg; int lock; scalar_t__ io_base; struct stm32_qspi_flash* flash; int clk_rate; } ;
struct spi_device {size_t chip_select; int max_speed_hz; struct spi_controller* master; } ;
struct spi_controller {scalar_t__ busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stm32_qspi* FUNC_3 (struct spi_controller*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_8)
{
 struct spi_controller *VAR_9 = VAR_8->master;
 struct stm32_qspi *VAR_10 = FUNC_3(VAR_9);
 struct stm32_qspi_flash *VAR_11;
 u32 VAR_12;

 if (VAR_9->busy)
  return -VAR_4;

 if (!VAR_8->max_speed_hz)
  return -VAR_5;

 VAR_12 = FUNC_0(VAR_10->clk_rate, VAR_8->max_speed_hz) - 1;

 VAR_11 = &VAR_10->flash[VAR_8->chip_select];
 VAR_11->qspi = VAR_10;
 VAR_11->cs = VAR_8->chip_select;
 VAR_11->presc = VAR_12;

 FUNC_1(&VAR_10->lock);
 VAR_10->cr_reg = 3 << VAR_1 | VAR_2 | VAR_0;
 FUNC_4(VAR_10->cr_reg, VAR_10->io_base + VAR_6);


 VAR_10->dcr_reg = VAR_3;
 FUNC_4(VAR_10->dcr_reg, VAR_10->io_base + VAR_7);
 FUNC_2(&VAR_10->lock);

 return 0;
}
