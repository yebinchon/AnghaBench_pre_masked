
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int bAES; int bProtectMode; int bNonERPPresent; int bBarkerPreambleMd; scalar_t__ byLocalID; int byMinChannel; int bTxRxAntInv; int byAntennaCount; int dwTxAntennaSel; int dwRxAntennaSel; int byCurPwr; unsigned char* abyCCKDefaultPwr; unsigned char* abyOFDMDefaultPwr; int bRadioOff; int byRadioCtl; int bHWRadioOff; int byGPIO; scalar_t__ PortOffset; int abyCurrentNetAddr; scalar_t__ bRadioControlOff; void* wCurrentRate; void* byTxAntennaMode; void* byRxAntennaMode; int * abyBBVGA; int byBBVGACurrent; int byBBVGANew; scalar_t__ bUpdateBBVGA; int byLongRetryLimit; int byShortRetryLimit; void** abyOFDMPwrTbl; void** abyCCKPwrTbl; void* byOFDMPwrG; void* byCCKPwr; int byZoneType; int * abyEEPROM; int bZoneRegExist; int byOriginalZonetype; int byMaxChannel; int lock; void* byTopCCKBasicRate; int byTopOFDMBasicRate; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (struct vnt_private*,void*) ;
 int FUNC_2 (struct vnt_private*,void*) ;
 int FUNC_3 (struct vnt_private*,int ) ;
 int FUNC_4 (struct vnt_private*) ;
 int FUNC_5 (struct vnt_private*) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_8 (struct vnt_private*) ;
 int FUNC_9 (struct vnt_private*) ;
 int FUNC_10 (scalar_t__,int*) ;
 int FUNC_11 (struct vnt_private*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct vnt_private*,int ) ;
 int FUNC_18 (struct vnt_private*,int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__,int ,int) ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_21 (struct vnt_private*) ;
 void* FUNC_22 (scalar_t__,unsigned char) ;
 int FUNC_23 (scalar_t__,int *) ;
 int FUNC_24 (scalar_t__,int ) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_25 (scalar_t__,scalar_t__*) ;
 int FUNC_26 (scalar_t__,int) ;
 int FUNC_27 (char*,int ) ;
 int FUNC_28 (int *,unsigned long) ;
 int FUNC_29 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_30(struct vnt_private *VAR_37)
{
 unsigned long VAR_38;
 unsigned int VAR_39;
 unsigned char VAR_40;
 unsigned char VAR_41 = 0;
 unsigned char VAR_42 = 0;

 FUNC_8(VAR_37);
 FUNC_4(VAR_37);


 FUNC_9(VAR_37);

 VAR_37->bAES = 0;


 VAR_37->bProtectMode = 0;

 VAR_37->bNonERPPresent = 0;
 VAR_37->bBarkerPreambleMd = 0;
 VAR_37->wCurrentRate = VAR_29;
 VAR_37->byTopOFDMBasicRate = VAR_30;
 VAR_37->byTopCCKBasicRate = VAR_29;


 FUNC_11(VAR_37);


 FUNC_25(VAR_37->PortOffset + VAR_23, &VAR_37->byLocalID);

 FUNC_28(&VAR_37->lock, VAR_38);

 FUNC_23(VAR_37->PortOffset, VAR_37->abyEEPROM);

 FUNC_29(&VAR_37->lock, VAR_38);


 VAR_37->byMinChannel = 1;
 VAR_37->byMaxChannel = VAR_2;


 VAR_40 = FUNC_22(VAR_37->PortOffset, VAR_10);
 if (VAR_40 & VAR_9)
  VAR_37->bTxRxAntInv = 1;
 else
  VAR_37->bTxRxAntInv = 0;

 VAR_40 &= (VAR_7 | VAR_8);

 if (VAR_40 == 0)
  VAR_40 = (VAR_7 | VAR_8);

 if (VAR_40 == (VAR_7 | VAR_8)) {
  VAR_37->byAntennaCount = 2;
  VAR_37->byTxAntennaMode = VAR_1;
  VAR_37->dwTxAntennaSel = 1;
  VAR_37->dwRxAntennaSel = 1;

  if (VAR_37->bTxRxAntInv)
   VAR_37->byRxAntennaMode = VAR_0;
  else
   VAR_37->byRxAntennaMode = VAR_1;
 } else {
  VAR_37->byAntennaCount = 1;
  VAR_37->dwTxAntennaSel = 0;
  VAR_37->dwRxAntennaSel = 0;

  if (VAR_40 & VAR_7) {
   VAR_37->byTxAntennaMode = VAR_0;

   if (VAR_37->bTxRxAntInv)
    VAR_37->byRxAntennaMode = VAR_1;
   else
    VAR_37->byRxAntennaMode = VAR_0;
  } else {
   VAR_37->byTxAntennaMode = VAR_1;

   if (VAR_37->bTxRxAntInv)
    VAR_37->byRxAntennaMode = VAR_0;
   else
    VAR_37->byRxAntennaMode = VAR_1;
  }
 }


 FUNC_2(VAR_37, VAR_37->byTxAntennaMode);
 FUNC_1(VAR_37, VAR_37->byRxAntennaMode);


 VAR_37->byOriginalZonetype = VAR_37->abyEEPROM[VAR_18];

 if (!VAR_37->bZoneRegExist)
  VAR_37->byZoneType = VAR_37->abyEEPROM[VAR_18];

 FUNC_27("priv->byZoneType = %x\n", VAR_37->byZoneType);


 FUNC_21(VAR_37);


 VAR_37->byCurPwr = 0xFF;
 VAR_37->byCCKPwr = FUNC_22(VAR_37->PortOffset, VAR_15);
 VAR_37->byOFDMPwrG = FUNC_22(VAR_37->PortOffset, VAR_16);


 for (VAR_39 = 0; VAR_39 < VAR_3; VAR_39++) {
  VAR_37->abyCCKPwrTbl[VAR_39 + 1] =
   FUNC_22(VAR_37->PortOffset,
        (unsigned char)(VAR_39 + VAR_11));
  if (VAR_37->abyCCKPwrTbl[VAR_39 + 1] == 0)
   VAR_37->abyCCKPwrTbl[VAR_39 + 1] = VAR_37->byCCKPwr;

  VAR_37->abyOFDMPwrTbl[VAR_39 + 1] =
   FUNC_22(VAR_37->PortOffset,
        (unsigned char)(VAR_39 + VAR_14));
  if (VAR_37->abyOFDMPwrTbl[VAR_39 + 1] == 0)
   VAR_37->abyOFDMPwrTbl[VAR_39 + 1] = VAR_37->byOFDMPwrG;

  VAR_37->abyCCKDefaultPwr[VAR_39 + 1] = VAR_41;
  VAR_37->abyOFDMDefaultPwr[VAR_39 + 1] = VAR_42;
 }


 for (VAR_39 = 11; VAR_39 < 14; VAR_39++) {
  VAR_37->abyCCKPwrTbl[VAR_39] = VAR_37->abyCCKPwrTbl[10];
  VAR_37->abyOFDMPwrTbl[VAR_39] = VAR_37->abyOFDMPwrTbl[10];
 }


 for (VAR_39 = 0; VAR_39 < VAR_4; VAR_39++) {
  VAR_37->abyOFDMPwrTbl[VAR_39 + VAR_3 + 1] =
   FUNC_22(VAR_37->PortOffset,
        (unsigned char)(VAR_39 + VAR_12));

  VAR_37->abyOFDMDefaultPwr[VAR_39 + VAR_3 + 1] =
   FUNC_22(VAR_37->PortOffset,
        (unsigned char)(VAR_39 + VAR_13));
 }

 if (VAR_37->byLocalID > VAR_34) {
  FUNC_16(VAR_37->PortOffset);

  FUNC_26(VAR_37->PortOffset + VAR_24 + 1,
        (VAR_28 | VAR_27));

  FUNC_15(VAR_37->PortOffset);
 }


 FUNC_20(VAR_37->PortOffset,
     VAR_22, (VAR_6 | VAR_5));


 FUNC_18(VAR_37, VAR_37->byShortRetryLimit);
 FUNC_17(VAR_37, VAR_37->byLongRetryLimit);


 FUNC_26(VAR_37->PortOffset + VAR_26, VAR_36);

 FUNC_26(VAR_37->PortOffset + VAR_26, VAR_35);


 FUNC_0(VAR_37);

 if (VAR_37->bUpdateBBVGA) {
  VAR_37->byBBVGACurrent = VAR_37->abyBBVGA[0];
  VAR_37->byBBVGANew = VAR_37->byBBVGACurrent;
  FUNC_3(VAR_37, VAR_37->abyBBVGA[0]);
 }

 FUNC_1(VAR_37, VAR_37->byRxAntennaMode);
 FUNC_2(VAR_37, VAR_37->byTxAntennaMode);



 VAR_37->wCurrentRate = VAR_31;

 VAR_37->bRadioOff = 0;

 VAR_37->byRadioCtl = FUNC_22(VAR_37->PortOffset,
       VAR_17);
 VAR_37->bHWRadioOff = 0;

 if (VAR_37->byRadioCtl & VAR_19) {

  FUNC_10(VAR_37->PortOffset, &VAR_37->byGPIO);

  if (((VAR_37->byGPIO & VAR_21) &&
       !(VAR_37->byRadioCtl & VAR_20)) ||
       (!(VAR_37->byGPIO & VAR_21) &&
       (VAR_37->byRadioCtl & VAR_20)))
   VAR_37->bHWRadioOff = 1;
 }

 if (VAR_37->bHWRadioOff || VAR_37->bRadioControlOff)
  FUNC_5(VAR_37);


 FUNC_24(VAR_37->PortOffset, VAR_37->abyCurrentNetAddr);
 FUNC_27("Network address = %pM\n", VAR_37->abyCurrentNetAddr);


 FUNC_6(VAR_37);

 FUNC_7(VAR_37);

 if (VAR_37->byLocalID <= VAR_33)
  FUNC_14(VAR_37->PortOffset, VAR_25, VAR_32);


 FUNC_12(VAR_37->PortOffset);
 FUNC_13(VAR_37->PortOffset);


 FUNC_19(VAR_37->PortOffset);
}
