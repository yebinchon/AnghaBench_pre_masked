
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct synquacer_spi {scalar_t__ clk_src_type; scalar_t__ regs; } ;
struct spi_master {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 struct synquacer_spi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct synquacer_spi*,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_master *VAR_14)
{
 u32 VAR_15;
 int VAR_16;
 struct synquacer_spi *VAR_17 = FUNC_1(VAR_14);


 FUNC_3(0, VAR_17->regs + VAR_9);
 VAR_16 = FUNC_2(VAR_17, 0);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_3(0, VAR_17->regs + VAR_13);
 FUNC_3(0, VAR_17->regs + VAR_11);
 FUNC_3(~0, VAR_17->regs + VAR_12);
 FUNC_3(~0, VAR_17->regs + VAR_10);
 FUNC_3(~0, VAR_17->regs + VAR_8);

 VAR_15 = FUNC_0(VAR_17->regs + VAR_7);
 VAR_15 &= ~VAR_2;
 VAR_15 &= ~VAR_1;
 FUNC_3(VAR_15, VAR_17->regs + VAR_7);

 VAR_15 = FUNC_0(VAR_17->regs + VAR_9);
 if (VAR_17->clk_src_type == VAR_0)
  VAR_15 |= VAR_3;
 else
  VAR_15 &= ~VAR_3;

 VAR_15 &= ~VAR_4;
 VAR_15 |= VAR_5;
 VAR_15 |= VAR_6;


 FUNC_3(VAR_15, VAR_17->regs + VAR_9);
 VAR_16 = FUNC_2(VAR_17, 1);
 if (VAR_16 < 0)
  return VAR_16;

 return 0;
}
