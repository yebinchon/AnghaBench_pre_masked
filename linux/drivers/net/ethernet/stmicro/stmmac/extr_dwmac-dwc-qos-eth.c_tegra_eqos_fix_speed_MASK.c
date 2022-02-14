
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_eqos {int dev; int clk_tx; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void *VAR_7, unsigned int VAR_8)
{
 struct tegra_eqos *VAR_9 = VAR_7;
 unsigned long VAR_10 = 125000000;
 bool VAR_11 = 0;
 u32 VAR_12;
 int VAR_13;

 switch (VAR_8) {
 case 128:
  VAR_11 = 1;
  VAR_10 = 125000000;
  break;

 case 129:
  VAR_11 = 1;
  VAR_10 = 25000000;
  break;

 case 130:
  VAR_10 = 2500000;
  break;

 default:
  FUNC_1(VAR_9->dev, "invalid speed %u\n", VAR_8);
  break;
 }

 if (VAR_11) {

  VAR_12 = FUNC_2(VAR_9->regs + VAR_5);
  VAR_12 |= VAR_6;
  FUNC_5(VAR_12, VAR_9->regs + VAR_5);

  FUNC_4(1);

  VAR_12 = FUNC_2(VAR_9->regs + VAR_0);
  VAR_12 |= VAR_2 | VAR_1;
  FUNC_5(VAR_12, VAR_9->regs + VAR_0);

  VAR_13 = FUNC_3(VAR_9->regs + VAR_3,
      VAR_12,
      VAR_12 & VAR_4,
      1, 10);
  if (VAR_13 < 0) {
   FUNC_1(VAR_9->dev, "calibration did not start\n");
   goto failed;
  }

  VAR_13 = FUNC_3(VAR_9->regs + VAR_3,
      VAR_12,
      (VAR_12 & VAR_4) == 0,
      20, 200);
  if (VAR_13 < 0) {
   FUNC_1(VAR_9->dev, "calibration didn't finish\n");
   goto failed;
  }

 failed:
  VAR_12 = FUNC_2(VAR_9->regs + VAR_5);
  VAR_12 &= ~VAR_6;
  FUNC_5(VAR_12, VAR_9->regs + VAR_5);
 } else {
  VAR_12 = FUNC_2(VAR_9->regs + VAR_0);
  VAR_12 &= ~VAR_1;
  FUNC_5(VAR_12, VAR_9->regs + VAR_0);
 }

 VAR_13 = FUNC_0(VAR_9->clk_tx, VAR_10);
 if (VAR_13 < 0)
  FUNC_1(VAR_9->dev, "failed to set TX rate: %d\n", VAR_13);
}
