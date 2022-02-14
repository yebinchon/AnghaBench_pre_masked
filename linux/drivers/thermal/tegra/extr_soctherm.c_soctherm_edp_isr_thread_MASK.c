
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_soctherm {scalar_t__ regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq_enable; int domain; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__ VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tegra_soctherm*,int ,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct tegra_soctherm *VAR_13 = VAR_12;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14 = FUNC_4(VAR_13->regs + VAR_5);


 VAR_16 = VAR_14 & VAR_1;
 VAR_17 = VAR_14 & VAR_2;
 VAR_18 = VAR_14 & VAR_3;
 VAR_19 = VAR_14 & VAR_4;
 VAR_15 = VAR_16 | VAR_17 | VAR_18 | VAR_19;

 FUNC_3("soctherm: OC ALARM 0x%08x\n", VAR_15);
 if (VAR_15) {
  FUNC_7(VAR_14, VAR_13->regs + VAR_5);
  VAR_14 &= ~VAR_15;

  if (VAR_16 && !FUNC_5(VAR_6))
   FUNC_6(VAR_13, VAR_6, 1);

  if (VAR_17 && !FUNC_5(VAR_7))
   FUNC_6(VAR_13, VAR_7, 1);

  if (VAR_18 && !FUNC_5(VAR_8))
   FUNC_6(VAR_13, VAR_8, 1);

  if (VAR_19 && !FUNC_5(VAR_9))
   FUNC_6(VAR_13, VAR_9, 1);

  if (VAR_16 && VAR_10.irq_enable & FUNC_0(0))
   FUNC_1(
    FUNC_2(VAR_10.domain, 0));

  if (VAR_17 && VAR_10.irq_enable & FUNC_0(1))
   FUNC_1(
    FUNC_2(VAR_10.domain, 1));

  if (VAR_18 && VAR_10.irq_enable & FUNC_0(2))
   FUNC_1(
    FUNC_2(VAR_10.domain, 2));

  if (VAR_19 && VAR_10.irq_enable & FUNC_0(3))
   FUNC_1(
    FUNC_2(VAR_10.domain, 3));
 }

 if (VAR_14) {
  FUNC_3("soctherm: Ignored unexpected OC ALARM 0x%08x\n", VAR_14);
  FUNC_7(VAR_14, VAR_13->regs + VAR_5);
 }

 return VAR_0;
}
