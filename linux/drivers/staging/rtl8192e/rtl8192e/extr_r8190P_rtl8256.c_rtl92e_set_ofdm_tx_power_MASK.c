
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {int LegacyHTTxPowerDiff; int* MCSTxPowerLevelOriginalOffset; int Pwr_Track; scalar_t__ bDynamicTxHighPower; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int,int,int) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0, u8 VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3, VAR_4, VAR_5, VAR_6;
 u8 VAR_7 = 0;
 u16 VAR_8[6] = {0xe00, 0xe04, 0xe10, 0xe14, 0xe18, 0xe1c};
 u8 VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_4 = VAR_1 + VAR_2->LegacyHTTxPowerDiff;
 VAR_4 = (VAR_4 << 24) | (VAR_4 << 16) |
       (VAR_4 << 8) | VAR_4;
 VAR_5 = VAR_1;
 VAR_5 = (VAR_5 << 24) | (VAR_5 << 16) |
       (VAR_5 << 8) | VAR_5;

 for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
  VAR_3 = (u32)(VAR_2->MCSTxPowerLevelOriginalOffset[VAR_7] +
      ((VAR_7 < 2) ? VAR_4 : VAR_5));
  VAR_9 = (u8)(VAR_3 & 0x7f);
  VAR_10 = (u8)((VAR_3 & 0x7f00)>>8);
  VAR_11 = (u8)((VAR_3 & 0x7f0000)>>16);
  VAR_12 = (u8)((VAR_3 & 0x7f000000)>>24);
  if (VAR_9 > 0x24)
   VAR_9 = 0x24;
  if (VAR_10 > 0x24)
   VAR_10 = 0x24;
  if (VAR_11 > 0x24)
   VAR_11 = 0x24;
  if (VAR_12 > 0x24)
   VAR_12 = 0x24;

  if (VAR_7 == 3) {
   VAR_6 = (VAR_12 << 24) | (VAR_11 << 16) |
           (VAR_10 << 8) | VAR_9;
   VAR_2->Pwr_Track = VAR_6;
  }

  if (VAR_2->bDynamicTxHighPower)
   VAR_3 = 0x03030303;
  else
   VAR_3 = (VAR_12 << 24) | (VAR_11 << 16) |
       (VAR_10 << 8) | VAR_9;
  FUNC_0(VAR_0, VAR_8[VAR_7], 0x7f7f7f7f, VAR_3);
 }

}
