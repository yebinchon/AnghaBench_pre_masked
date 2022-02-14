
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hal_com_data {scalar_t__*** TxPwrByRateBase2_4G; scalar_t__*** TxPwrByRateBase5G; } ;
struct adapter {int dummy; } ;
typedef enum RATE_SECTION { ____Placeholder_RATE_SECTION } RATE_SECTION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (char*,scalar_t__,...) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;




 scalar_t__ VAR_2 ;






u8 FUNC_2(struct adapter *VAR_3, u8 VAR_4, u8 VAR_5,
       u8 VAR_6, enum RATE_SECTION VAR_7)
{
 struct hal_com_data *VAR_8 = FUNC_1(VAR_3);
 u8 VAR_9 = 0;

 if (VAR_5 > VAR_2) {
  FUNC_0("Invalid Rf Path %d in PHY_GetTxPowerByRateBase()\n", VAR_5);
  return 0;
 }

 if (VAR_4 == VAR_0) {
  switch (VAR_7) {
  case 137:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][0];
   break;
  case 132:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][1];
   break;
  case 136:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][2];
   break;
  case 133:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][3];
   break;
  case 135:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][4];
   break;
  case 134:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][5];
   break;
  case 131:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][6];
   break;
  case 130:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][7];
   break;
  case 129:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][8];
   break;
  case 128:
   VAR_9 = VAR_8->TxPwrByRateBase2_4G[VAR_5][VAR_6][9];
   break;
  default:
   FUNC_0("Invalid RateSection %d in Band 2.4G, Rf Path %d, %dTx in PHY_GetTxPowerByRateBase()\n",
      VAR_7, VAR_5, VAR_6);
   break;
  }
 } else if (VAR_4 == VAR_1) {
  switch (VAR_7) {
  case 132:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][0];
   break;
  case 136:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][1];
   break;
  case 133:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][2];
   break;
  case 135:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][3];
   break;
  case 134:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][4];
   break;
  case 131:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][5];
   break;
  case 130:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][6];
   break;
  case 129:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][7];
   break;
  case 128:
   VAR_9 = VAR_8->TxPwrByRateBase5G[VAR_5][VAR_6][8];
   break;
  default:
   FUNC_0("Invalid RateSection %d in Band 5G, Rf Path %d, %dTx in PHY_GetTxPowerByRateBase()\n",
      VAR_7, VAR_5, VAR_6);
   break;
  }
 } else
  FUNC_0("Invalid Band %d in PHY_GetTxPowerByRateBase()\n", VAR_4);

 return VAR_9;
}
