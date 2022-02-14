
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_ios {scalar_t__ timing; } ;
struct hi3798cv200_priv {int drive_clk; } ;
struct dw_mci {struct hi3798cv200_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (struct dw_mci*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_12, struct mmc_ios *VAR_13)
{
 struct hi3798cv200_priv *VAR_14 = VAR_12->priv;
 u32 VAR_15;

 VAR_15 = FUNC_1(VAR_12, VAR_11);
 if (VAR_13->timing == VAR_3 ||
     VAR_13->timing == VAR_7)
  VAR_15 |= VAR_10;
 else
  VAR_15 &= ~VAR_10;
 FUNC_2(VAR_12, VAR_11, VAR_15);

 VAR_15 = FUNC_1(VAR_12, VAR_1);
 if (VAR_13->timing == VAR_3)
  VAR_15 |= VAR_9;
 else
  VAR_15 &= ~VAR_9;
 FUNC_2(VAR_12, VAR_1, VAR_15);

 VAR_15 = FUNC_1(VAR_12, VAR_0);
 if (VAR_13->timing == VAR_6)
  VAR_15 |= VAR_8;
 else
  VAR_15 &= ~VAR_8;
 FUNC_2(VAR_12, VAR_0, VAR_15);

 if (VAR_13->timing == VAR_4 ||
     VAR_13->timing == VAR_2)
  FUNC_0(VAR_14->drive_clk, 180);
 else if (VAR_13->timing == VAR_5)
  FUNC_0(VAR_14->drive_clk, 135);
}
