
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct brcms_phy {int* tx_srom_max_rate_2g; int* tx_srom_max_rate_5g_mid; int* tx_srom_max_rate_5g_low; int* tx_srom_max_rate_5g_hi; } ;






 int FUNC_0 (struct brcms_phy*,int ) ;

void
FUNC_1(struct brcms_phy *VAR_0, uint VAR_1, u8 *VAR_2,
       u8 VAR_3)
{
 u8 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 switch (VAR_4) {
 case 131:
  *VAR_2 = VAR_0->tx_srom_max_rate_2g[VAR_3];
  break;
 case 128:
  *VAR_2 = VAR_0->tx_srom_max_rate_5g_mid[VAR_3];
  break;
 case 129:
  *VAR_2 = VAR_0->tx_srom_max_rate_5g_low[VAR_3];
  break;
 case 130:
  *VAR_2 = VAR_0->tx_srom_max_rate_5g_hi[VAR_3];
  break;
 default:
  *VAR_2 = VAR_0->tx_srom_max_rate_2g[VAR_3];
  break;
 }

 return;
}
