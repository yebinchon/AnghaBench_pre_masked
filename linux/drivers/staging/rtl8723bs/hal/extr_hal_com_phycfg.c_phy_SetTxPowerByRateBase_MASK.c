
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hal_com_data {scalar_t__*** TxPwrByRateBase5G; scalar_t__*** TxPwrByRateBase2_4G; } ;
struct adapter {int dummy; } ;
typedef enum RATE_SECTION { ____Placeholder_RATE_SECTION } RATE_SECTION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (char*,scalar_t__,...) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;




 scalar_t__ VAR_2 ;






__attribute__((used)) static void
FUNC_2(
 struct adapter *VAR_3,
 u8 VAR_4,
 u8 VAR_5,
 enum RATE_SECTION VAR_6,
 u8 VAR_7,
 u8 VAR_8
)
{
 struct hal_com_data *VAR_9 = FUNC_1(VAR_3);

 if (VAR_5 > VAR_2) {
  FUNC_0("Invalid Rf Path %d in phy_SetTxPowerByRatBase()\n", VAR_5);
  return;
 }

 if (VAR_4 == VAR_0) {
  switch (VAR_6) {
  case 137:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][0] = VAR_8;
   break;
  case 132:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][1] = VAR_8;
   break;
  case 136:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][2] = VAR_8;
   break;
  case 133:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][3] = VAR_8;
   break;
  case 135:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][4] = VAR_8;
   break;
  case 134:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][5] = VAR_8;
   break;
  case 131:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][6] = VAR_8;
   break;
  case 130:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][7] = VAR_8;
   break;
  case 129:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][8] = VAR_8;
   break;
  case 128:
   VAR_9->TxPwrByRateBase2_4G[VAR_5][VAR_7][9] = VAR_8;
   break;
  default:
   FUNC_0("Invalid RateSection %d in Band 2.4G, Rf Path %d, %dTx in phy_SetTxPowerByRateBase()\n",
      VAR_6, VAR_5, VAR_7);
   break;
  }
 } else if (VAR_4 == VAR_1) {
  switch (VAR_6) {
  case 132:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][0] = VAR_8;
   break;
  case 136:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][1] = VAR_8;
   break;
  case 133:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][2] = VAR_8;
   break;
  case 135:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][3] = VAR_8;
   break;
  case 134:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][4] = VAR_8;
   break;
  case 131:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][5] = VAR_8;
   break;
  case 130:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][6] = VAR_8;
   break;
  case 129:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][7] = VAR_8;
   break;
  case 128:
   VAR_9->TxPwrByRateBase5G[VAR_5][VAR_7][8] = VAR_8;
   break;
  default:
   FUNC_0("Invalid RateSection %d in Band 5G, Rf Path %d, %dTx in phy_SetTxPowerByRateBase()\n",
      VAR_6, VAR_5, VAR_7);
   break;
  }
 } else
  FUNC_0("Invalid Band %d in phy_SetTxPowerByRateBase()\n", VAR_4);
}
