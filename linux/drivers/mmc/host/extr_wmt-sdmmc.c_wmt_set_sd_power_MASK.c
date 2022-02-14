
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmt_mci_priv {int power_inverted; scalar_t__ sdmmc_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct wmt_mci_priv *VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2->sdmmc_base + VAR_1);

 if (VAR_3 ^ VAR_2->power_inverted)
  VAR_4 &= ~VAR_0;
 else
  VAR_4 |= VAR_0;

 FUNC_1(VAR_4, VAR_2->sdmmc_base + VAR_1);
}
