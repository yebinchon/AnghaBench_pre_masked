
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ epromtype; int* TxPowerLevelCCK; int* TxPowerLevelOFDM24G; scalar_t__ rf_type; int* TxPowerLevelCCK_C; int* TxPowerLevelOFDM24G_C; int* TxPowerLevelCCK_A; int* TxPowerLevelOFDM24G_A; int RF_C_TxPwDiff; int* AntennaTxPwDiff; int rf_chip; } ;
struct net_device {int dummy; } ;
typedef int s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int ,int,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_8, u8 VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_4(VAR_8);
 u8 VAR_11 = 0, VAR_12 = 0;
 s8 VAR_13;
 u32 VAR_14;

 if (VAR_10->epromtype == VAR_0) {
  VAR_11 = VAR_10->TxPowerLevelCCK[VAR_9-1];
  VAR_12 = VAR_10->TxPowerLevelOFDM24G[VAR_9-1];
 } else if (VAR_10->epromtype == VAR_1) {
  if (VAR_10->rf_type == VAR_2) {
   VAR_11 = VAR_10->TxPowerLevelCCK_C[VAR_9-1];
   VAR_12 = VAR_10->TxPowerLevelOFDM24G_C[VAR_9-1];
  } else if (VAR_10->rf_type == VAR_3) {
   VAR_11 = VAR_10->TxPowerLevelCCK_A[VAR_9-1];
   VAR_12 = VAR_10->TxPowerLevelOFDM24G_A[VAR_9-1];

   VAR_13 = VAR_10->TxPowerLevelOFDM24G_C[VAR_9-1]
           - VAR_10->TxPowerLevelOFDM24G_A[VAR_9-1];

   VAR_10->RF_C_TxPwDiff = VAR_13;

   VAR_13 &= 0xf;

   VAR_10->AntennaTxPwDiff[2] = 0;
   VAR_10->AntennaTxPwDiff[1] = (u8)(VAR_13);
   VAR_10->AntennaTxPwDiff[0] = 0;

   VAR_14 = VAR_10->AntennaTxPwDiff[2]<<8 |
          VAR_10->AntennaTxPwDiff[1]<<4 |
          VAR_10->AntennaTxPwDiff[0];

   FUNC_1(VAR_8, VAR_7,
       (VAR_4|VAR_5|VAR_6),
       VAR_14);
  }
 }
 switch (VAR_10->rf_chip) {
 case 130:
  break;
 case 129:
  FUNC_2(VAR_8, VAR_11);
  FUNC_3(VAR_8, VAR_12);
  break;
 case 128:
  break;
 default:
  FUNC_0(VAR_8, "Invalid RF Chip ID.\n");
  break;
 }
}
