
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct hal_com_data {int EEPROMRegulatory; int Regulation2_4G; int Regulation5G; int ***** TxPwrLimit_5G; int ***** TxPwrLimit_2_4G; } ;
struct TYPE_2__ {int RegEnableTxPowerLimit; int RegPwrTblSel; } ;
struct adapter {TYPE_1__ registrypriv; } ;
typedef int s8 ;
typedef int s16 ;
typedef enum CHANNEL_WIDTH { ____Placeholder_CHANNEL_WIDTH } CHANNEL_WIDTH ;
typedef enum BAND_TYPE { ____Placeholder_BAND_TYPE } BAND_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t) ;
 size_t FUNC_4 (int,size_t) ;
 int FUNC_5 (int *) ;

s8 FUNC_6(struct adapter *VAR_9, u32 VAR_10,
        enum BAND_TYPE VAR_11, enum CHANNEL_WIDTH VAR_12,
        u8 VAR_13, u8 VAR_14, u8 VAR_15)
{
 s16 VAR_16 = -1;
 s16 VAR_17 = -1;
 s16 VAR_18 = -1;
 s16 VAR_19 = -1;
 s16 VAR_20 = -1;
 s8 VAR_21 = VAR_3;
 struct hal_com_data *VAR_22 = FUNC_1(VAR_9);

 if (((VAR_9->registrypriv.RegEnableTxPowerLimit == 2) &&
      (VAR_22->EEPROMRegulatory != 1)) ||
     (VAR_9->registrypriv.RegEnableTxPowerLimit == 0))
  return VAR_3;

 switch (VAR_9->registrypriv.RegPwrTblSel) {
 case 1:
  VAR_17 = VAR_5;
  break;
 case 2:
  VAR_17 = VAR_7;
  break;
 case 3:
  VAR_17 = VAR_6;
  break;
 case 4:
  VAR_17 = VAR_8;
  break;
 default:
  VAR_17 = (VAR_11 == VAR_0) ?
   VAR_22->Regulation2_4G :
   VAR_22->Regulation5G;
  break;
 }




 if (VAR_11 == VAR_0)
  VAR_16 = 0;
 else if (VAR_11 == VAR_1)
  VAR_16 = 1;

 VAR_18 = FUNC_2(VAR_12);
 VAR_19 = FUNC_3(VAR_14);

 if (VAR_11 == VAR_1 && VAR_19 == 0)
  FUNC_0("Wrong rate 0x%x: No CCK in 5G Band\n", VAR_2);





 if (VAR_19 == 0 || VAR_19 == 1)
  VAR_18 = 0;
 else if ((VAR_19 == 2 || VAR_19 == 3) &&
   (VAR_11 == VAR_1) && (VAR_18 == 2))
  VAR_18 = 1;

 if (VAR_11 == VAR_0 || VAR_11 == VAR_1)
  VAR_15 = FUNC_4(VAR_11, VAR_15);

 if (VAR_16 == -1 || VAR_17 == -1 || VAR_18 == -1 ||
     VAR_19 == -1 || VAR_20 == -1) {




  return VAR_3;
 }

 if (VAR_11 == VAR_0) {
  s8 VAR_23[10] = {0}; u8 VAR_24 = 0;

  for (VAR_24 = 0; VAR_24 < VAR_4; VAR_24++)
   VAR_23[VAR_24] = VAR_22->TxPwrLimit_2_4G[VAR_24]
            [VAR_18]
            [VAR_19]
            [VAR_20]
            [VAR_13];

  VAR_21 = (VAR_17 == VAR_8) ?
   FUNC_5(VAR_23) :
   VAR_22->TxPwrLimit_2_4G[VAR_17]
       [VAR_18]
       [VAR_19]
       [VAR_20]
       [VAR_13];

 } else if (VAR_11 == VAR_1) {
  s8 VAR_25[10] = {0}; u8 VAR_26 = 0;

  for (VAR_26 = 0; VAR_26 < VAR_4; ++VAR_26)
   VAR_25[VAR_26] = VAR_22->TxPwrLimit_5G[VAR_26]
          [VAR_18]
          [VAR_19]
          [VAR_20]
          [VAR_13];

  VAR_21 = (VAR_17 == VAR_8) ?
   FUNC_5(VAR_25) :
   VAR_22->TxPwrLimit_5G[VAR_17]
            [VAR_18]
            [VAR_19]
            [VAR_20]
            [VAR_13];
 } else {
  FUNC_0("No power limit table of the specified band\n");
 }
 return VAR_21;
}
