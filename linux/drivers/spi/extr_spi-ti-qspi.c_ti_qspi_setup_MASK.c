
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_qspi_regs {int clkctrl; } ;
struct ti_qspi {int spi_max_frequency; int dev; int fclk; struct ti_qspi_regs ctx_reg; } ;
struct spi_device {TYPE_1__* master; } ;
struct TYPE_2__ {scalar_t__ busy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct ti_qspi* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct ti_qspi*,int ) ;
 int FUNC_9 (struct ti_qspi*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 struct ti_qspi *VAR_6 = FUNC_7(VAR_5->master);
 struct ti_qspi_regs *VAR_7 = &VAR_6->ctx_reg;
 int VAR_8 = 0, VAR_9;
 u32 VAR_10, VAR_11, VAR_12;

 if (VAR_5->master->busy) {
  FUNC_2(VAR_6->dev, "master busy doing other transfers\n");
  return -VAR_0;
 }

 if (!VAR_6->spi_max_frequency) {
  FUNC_3(VAR_6->dev, "spi max frequency not defined\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_1(VAR_6->fclk);

 VAR_8 = FUNC_0(VAR_11, VAR_6->spi_max_frequency) - 1;

 if (VAR_8 < 0) {
  FUNC_2(VAR_6->dev, "clock divider < 0, using /1 divider\n");
  return -VAR_1;
 }

 if (VAR_8 > VAR_2) {
  FUNC_2(VAR_6->dev, "clock divider >%d , using /%d divider\n",
    VAR_2, VAR_2 + 1);
  return -VAR_1;
 }

 FUNC_2(VAR_6->dev, "hz: %d, clock divider %d\n",
   VAR_6->spi_max_frequency, VAR_8);

 VAR_9 = FUNC_4(VAR_6->dev);
 if (VAR_9 < 0) {
  FUNC_3(VAR_6->dev, "pm_runtime_get_sync() failed\n");
  return VAR_9;
 }

 VAR_10 = FUNC_8(VAR_6, VAR_4);

 VAR_10 &= ~VAR_3;


 FUNC_9(VAR_6, VAR_10, VAR_4);


 VAR_12 = VAR_3 | VAR_8;
 FUNC_9(VAR_6, VAR_12, VAR_4);
 VAR_7->clkctrl = VAR_12;

 FUNC_5(VAR_6->dev);
 VAR_9 = FUNC_6(VAR_6->dev);
 if (VAR_9 < 0) {
  FUNC_3(VAR_6->dev, "pm_runtime_put_autosuspend() failed\n");
  return VAR_9;
 }

 return 0;
}
