
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct phy {int dummy; } ;
struct exynos_sata_phy {TYPE_1__* phy; scalar_t__ regs; int client; int pmureg; } ;
typedef int buf ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int*,int) ;
 struct exynos_sata_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (scalar_t__,int ,int ,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_21)
{
 u32 VAR_22 = 0;
 int VAR_23 = 0;
 u8 VAR_24[] = { 0x3a, 0x0b };
 struct exynos_sata_phy *VAR_25 = FUNC_2(VAR_21);

 VAR_23 = FUNC_4(VAR_25->pmureg, VAR_19,
   VAR_2, 1);
 if (VAR_23 != 0)
  FUNC_0(&VAR_25->phy->dev, "phy init failed\n");

 FUNC_6(VAR_22, VAR_25->regs + VAR_7);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_7);
 VAR_22 |= VAR_15 | VAR_14 | VAR_12
  | VAR_13 | VAR_18
  | VAR_16 | VAR_17;
 FUNC_6(VAR_22, VAR_25->regs + VAR_7);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_7);
 VAR_22 |= VAR_8;
 FUNC_6(VAR_22, VAR_25->regs + VAR_7);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_7);
 VAR_22 |= VAR_14;
 FUNC_6(VAR_22, VAR_25->regs + VAR_7);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_5);
 VAR_22 &= ~VAR_10;
 FUNC_6(VAR_22, VAR_25->regs + VAR_5);


 VAR_22 = FUNC_3(VAR_25->regs + VAR_5);
 VAR_22 |= VAR_9;
 FUNC_6(VAR_22, VAR_25->regs + VAR_5);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_3);
 VAR_22 |= VAR_1 | VAR_0;
 FUNC_6(VAR_22, VAR_25->regs + VAR_3);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_4);
 VAR_22 |= VAR_20;
 FUNC_6(VAR_22, VAR_25->regs + VAR_4);

 VAR_23 = FUNC_1(VAR_25->client, VAR_24, sizeof(VAR_24));
 if (VAR_23 < 0)
  return VAR_23;


 VAR_22 = FUNC_3(VAR_25->regs + VAR_7);
 VAR_22 &= ~VAR_14;
 FUNC_6(VAR_22, VAR_25->regs + VAR_7);

 VAR_22 = FUNC_3(VAR_25->regs + VAR_7);
 VAR_22 |= VAR_14;
 FUNC_6(VAR_22, VAR_25->regs + VAR_7);

 VAR_23 = FUNC_5(VAR_25->regs,
    VAR_6,
    VAR_11, 1);
 if (VAR_23 < 0)
  FUNC_0(&VAR_25->phy->dev,
   "PHY PLL locking failed\n");
 return VAR_23;
}
