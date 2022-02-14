
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hal_com_data {scalar_t__***** TxPwrLimit_2_4G; scalar_t__***** TxPwrLimit_5G; } ;
struct adapter {int dummy; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int FUNC_2 (scalar_t__*,...) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_3 (size_t*,size_t*,int) ;
 scalar_t__ FUNC_4 (int ,size_t) ;

void FUNC_5(
 struct adapter *VAR_4,
 u8 *VAR_5,
 u8 *VAR_6,
 u8 *VAR_7,
 u8 *VAR_8,
 u8 *VAR_9,
 u8 *VAR_10,
 u8 *VAR_11
)
{
 struct hal_com_data *VAR_12 = FUNC_1(VAR_4);
 u8 VAR_13 = 0, VAR_14 = 0, VAR_15 = 0, VAR_16;
 s8 VAR_17 = 0, VAR_18, VAR_19;




 if (!FUNC_2((s8 *)VAR_10, &VAR_16) ||
   !FUNC_2((s8 *)VAR_11, &VAR_17))
  FUNC_0("Illegal index of power limit table [chnl %s][val %s]\n", VAR_10, VAR_11);

 VAR_17 = VAR_17 > VAR_2 ? VAR_2 : VAR_17;

 if (FUNC_3(VAR_5, (u8 *)("FCC"), 3))
  VAR_13 = 0;
 else if (FUNC_3(VAR_5, (u8 *)("MKK"), 3))
  VAR_13 = 1;
 else if (FUNC_3(VAR_5, (u8 *)("ETSI"), 4))
  VAR_13 = 2;
 else if (FUNC_3(VAR_5, (u8 *)("WW13"), 4))
  VAR_13 = 3;

 if (FUNC_3(VAR_8, (u8 *)("CCK"), 3) && FUNC_3(VAR_9, (u8 *)("1T"), 2))
  VAR_15 = 0;
 else if (FUNC_3(VAR_8, (u8 *)("OFDM"), 4) && FUNC_3(VAR_9, (u8 *)("1T"), 2))
  VAR_15 = 1;
 else if (FUNC_3(VAR_8, (u8 *)("HT"), 2) && FUNC_3(VAR_9, (u8 *)("1T"), 2))
  VAR_15 = 2;
 else if (FUNC_3(VAR_8, (u8 *)("HT"), 2) && FUNC_3(VAR_9, (u8 *)("2T"), 2))
  VAR_15 = 3;
 else if (FUNC_3(VAR_8, (u8 *)("HT"), 2) && FUNC_3(VAR_9, (u8 *)("3T"), 2))
  VAR_15 = 4;
 else if (FUNC_3(VAR_8, (u8 *)("HT"), 2) && FUNC_3(VAR_9, (u8 *)("4T"), 2))
  VAR_15 = 5;
 else if (FUNC_3(VAR_8, (u8 *)("VHT"), 3) && FUNC_3(VAR_9, (u8 *)("1T"), 2))
  VAR_15 = 6;
 else if (FUNC_3(VAR_8, (u8 *)("VHT"), 3) && FUNC_3(VAR_9, (u8 *)("2T"), 2))
  VAR_15 = 7;
 else if (FUNC_3(VAR_8, (u8 *)("VHT"), 3) && FUNC_3(VAR_9, (u8 *)("3T"), 2))
  VAR_15 = 8;
 else if (FUNC_3(VAR_8, (u8 *)("VHT"), 3) && FUNC_3(VAR_9, (u8 *)("4T"), 2))
  VAR_15 = 9;
 else {
  FUNC_0("Wrong rate section!\n");
  return;
 }


 if (FUNC_3(VAR_7, (u8 *)("20M"), 3))
  VAR_14 = 0;
 else if (FUNC_3(VAR_7, (u8 *)("40M"), 3))
  VAR_14 = 1;
 else if (FUNC_3(VAR_7, (u8 *)("80M"), 3))
  VAR_14 = 2;
 else if (FUNC_3(VAR_7, (u8 *)("160M"), 4))
  VAR_14 = 3;

 if (FUNC_3(VAR_6, (u8 *)("2.4G"), 4)) {
  VAR_19 = FUNC_4(VAR_0, VAR_16);

  if (VAR_19 == -1)
   return;

  VAR_18 = VAR_12->TxPwrLimit_2_4G[VAR_13][VAR_14][VAR_15][VAR_19][VAR_3];

  if (VAR_17 < VAR_18)
   VAR_12->TxPwrLimit_2_4G[VAR_13][VAR_14][VAR_15][VAR_19][VAR_3] = VAR_17;



 } else if (FUNC_3(VAR_6, (u8 *)("5G"), 2)) {
  VAR_19 = FUNC_4(VAR_1, VAR_16);

  if (VAR_19 == -1)
   return;

  VAR_18 = VAR_12->TxPwrLimit_5G[VAR_13][VAR_14][VAR_15][VAR_19][VAR_3];

  if (VAR_17 < VAR_18)
   VAR_12->TxPwrLimit_5G[VAR_13][VAR_14][VAR_15][VAR_19][VAR_3] = VAR_17;



 } else {
  FUNC_0("Cannot recognize the band info in %s\n", VAR_6);
  return;
 }
}
