
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {int SiS_SetFlag; int SiS_VBType; int SiS_VBInfo; scalar_t__ ChipType; unsigned short PanelVCLKIdx300; int SiS_LCDInfo; unsigned short PanelVCLKIdx315; int SiS_TVMode; int ChipRevision; scalar_t__ SiS_IF_DEF_CH70xx; scalar_t__ SiS_ModeType; unsigned char* SiS_CHTVVCLKUNTSC; unsigned char* SiS_CHTVVCLKONTSC; unsigned char* SiS_CHTVVCLKUPAL; unsigned char* SiS_CHTVVCLKOPAL; unsigned char* SiS_CHTVVCLKUPALM; unsigned char* SiS_CHTVVCLKOPALM; unsigned char* SiS_CHTVVCLKUPALN; unsigned char* SiS_CHTVVCLKOPALN; unsigned char* SiS_CHTVVCLKSOPAL; scalar_t__ SiS_CustomT; scalar_t__ SiS_CHSOverScan; TYPE_3__* SiS_SModeIDTable; int SiS_UseWide; int SiS_UseWideCRT2; TYPE_2__* SiS_RefIndex; TYPE_1__* SiS_EModeIDTable; scalar_t__ SiS_P3ca; } ;
struct TYPE_6__ {unsigned short St_ResInfo; unsigned short St_CRT2CRTC; } ;
struct TYPE_5__ {unsigned short Ext_CRT2CRTC; unsigned short Ext_CRTVCLK; } ;
struct TYPE_4__ {unsigned short Ext_RESINFO; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 unsigned short VAR_29 ;
 unsigned short VAR_30 ;
 int VAR_31 ;
 unsigned short VAR_32 ;
 unsigned short VAR_33 ;
 unsigned short VAR_34 ;
 unsigned short VAR_35 ;
 unsigned short VAR_36 ;
 unsigned short VAR_37 ;
 unsigned short VAR_38 ;
 unsigned short VAR_39 ;
 unsigned short VAR_40 ;
 unsigned short VAR_41 ;
 unsigned short VAR_42 ;
 unsigned short VAR_43 ;
 unsigned short VAR_44 ;

unsigned short
FUNC_2(struct SiS_Private *VAR_45, unsigned short VAR_46, unsigned short VAR_47,
  unsigned short VAR_48)
{
  unsigned short VAR_49, VAR_50 = 0, VAR_51 = 0, VAR_52 = 0;
  unsigned short VAR_53, VAR_54;
  const unsigned char *VAR_55 = ((void*)0);

  if(VAR_46 <= 0x13) {
     VAR_53 = VAR_45->SiS_SModeIDTable[VAR_47].St_ResInfo;
     VAR_49 = VAR_45->SiS_SModeIDTable[VAR_47].St_CRT2CRTC;
     VAR_51 = (FUNC_1((VAR_45->SiS_P3ca+0x02)) >> 2) & 0x03;
     VAR_52 = VAR_51;
  } else {
     VAR_53 = VAR_45->SiS_EModeIDTable[VAR_47].Ext_RESINFO;
     VAR_49 = VAR_45->SiS_RefIndex[VAR_48].Ext_CRT2CRTC;
     VAR_51 = VAR_45->SiS_RefIndex[VAR_48].Ext_CRTVCLK;
     VAR_52 = FUNC_0(VAR_45, VAR_48,
  (VAR_45->SiS_SetFlag & VAR_9) ? VAR_45->SiS_UseWideCRT2 : VAR_45->SiS_UseWide);
  }

  if(VAR_45->SiS_VBType & VAR_31) {

     if(VAR_45->SiS_SetFlag & VAR_9) {

 VAR_49 >>= 6;
 if(VAR_45->SiS_VBInfo & (VAR_16 | VAR_17)) {

    if(VAR_45->ChipType < VAR_11) {
       VAR_50 = VAR_45->PanelVCLKIdx300;
       if((VAR_45->SiS_LCDInfo & VAR_3) && (VAR_45->SiS_LCDInfo & VAR_7)) {
   VAR_50 = VAR_51;
       }
    } else {
       VAR_50 = VAR_45->PanelVCLKIdx315;
       if((VAR_45->SiS_LCDInfo & VAR_3) && (VAR_45->SiS_LCDInfo & VAR_7)) {
   switch(VAR_53) {

   case 133: VAR_50 = VAR_38; break;
   case 132: VAR_50 = VAR_39; break;
   case 131: VAR_50 = VAR_40; break;
   case 129: VAR_50 = VAR_42; break;
   case 128: VAR_50 = VAR_43; break;
   case 130: VAR_50 = VAR_41; break;
   case 137: VAR_50 = VAR_34; break;
   case 136: VAR_50 = VAR_35; break;
   case 135: VAR_50 = VAR_36; break;
   case 134: VAR_50 = VAR_37; break;
   default: VAR_50 = VAR_51;
   }

   if(VAR_46 <= 0x13) {
      if(VAR_45->ChipType <= VAR_12) {
         if(VAR_45->SiS_SModeIDTable[VAR_47].St_CRT2CRTC == 1) VAR_50 = 0x42;
      } else {
         if(VAR_45->SiS_SModeIDTable[VAR_47].St_CRT2CRTC == 1) VAR_50 = 0x00;
      }
   }
   if(VAR_45->ChipType <= VAR_12) {
      if(VAR_50 == 0) VAR_50 = 0x41;
      if(VAR_50 == 1) VAR_50 = 0x43;
      if(VAR_50 == 4) VAR_50 = 0x44;
   }
       }
    }

 } else if(VAR_45->SiS_VBInfo & VAR_18) {

    if(VAR_45->SiS_VBInfo & VAR_15) {
       if(VAR_45->SiS_TVMode & VAR_21) VAR_50 = VAR_6;
       else VAR_50 = VAR_5;
       if(VAR_45->SiS_TVMode & VAR_26) VAR_50 = VAR_4;
    } else if(VAR_45->SiS_TVMode & VAR_28) VAR_50 = VAR_44;
    else if(VAR_45->SiS_TVMode & VAR_27) VAR_50 = VAR_30;
    else if(VAR_45->SiS_TVMode & VAR_21) VAR_50 = VAR_30;
    else VAR_50 = VAR_29;

    if(VAR_45->ChipType < VAR_11) VAR_50 += VAR_19;
    else VAR_50 += VAR_20;

 } else {

    VAR_50 = VAR_52;
    if(VAR_45->ChipType < VAR_11) {
       if(VAR_46 > 0x13) {
   if( (VAR_45->ChipType == VAR_13) &&
       (VAR_45->ChipRevision >= 0x30)) {
      if(VAR_50 == 0x14) VAR_50 = 0x34;
   }

   if(VAR_50 == 0x17) VAR_50 = 0x45;
       }
    }
 }

     } else {

 VAR_50 = VAR_52;
 if(VAR_45->ChipType < VAR_11) {
    if(VAR_46 > 0x13) {
       if( (VAR_45->ChipType != VAR_13) &&
    (VAR_45->ChipType != VAR_10) ) {
   if(VAR_50 == 0x1b) VAR_50 = 0x48;
       }
    }
 }
     }

  } else {

     VAR_50 = VAR_49;

     if(VAR_45->SiS_SetFlag & VAR_9) {

 if( (VAR_45->SiS_IF_DEF_CH70xx != 0) && (VAR_45->SiS_VBInfo & VAR_18) ) {

    VAR_50 &= 0x1f;
    VAR_54 = 0;
    if(VAR_45->SiS_TVMode & VAR_22) VAR_54 += 1;
    if(VAR_45->SiS_TVMode & VAR_23) {
       VAR_54 += 2;
       if(VAR_45->SiS_ModeType > VAR_8) {
   if(VAR_45->SiS_CHSOverScan) VAR_54 = 8;
       }
       if(VAR_45->SiS_TVMode & VAR_24) {
   VAR_54 = 4;
   if(VAR_45->SiS_TVMode & VAR_22) VAR_54 += 1;
       } else if(VAR_45->SiS_TVMode & VAR_25) {
   VAR_54 = 6;
   if(VAR_45->SiS_TVMode & VAR_22) VAR_54 += 1;
       }
    }
    switch(VAR_54) {
      case 0: VAR_55 = VAR_45->SiS_CHTVVCLKUNTSC; break;
      case 1: VAR_55 = VAR_45->SiS_CHTVVCLKONTSC; break;
      case 2: VAR_55 = VAR_45->SiS_CHTVVCLKUPAL; break;
      case 3: VAR_55 = VAR_45->SiS_CHTVVCLKOPAL; break;
      case 4: VAR_55 = VAR_45->SiS_CHTVVCLKUPALM; break;
      case 5: VAR_55 = VAR_45->SiS_CHTVVCLKOPALM; break;
      case 6: VAR_55 = VAR_45->SiS_CHTVVCLKUPALN; break;
      case 7: VAR_55 = VAR_45->SiS_CHTVVCLKOPALN; break;
      case 8: VAR_55 = VAR_45->SiS_CHTVVCLKSOPAL; break;
      default: VAR_55 = VAR_45->SiS_CHTVVCLKOPAL; break;
    }
    VAR_50 = VAR_55[VAR_50];

 } else if(VAR_45->SiS_VBInfo & VAR_16) {

    if(VAR_45->ChipType < VAR_11) {
       VAR_50 = VAR_45->PanelVCLKIdx300;
    } else {
       VAR_50 = VAR_45->PanelVCLKIdx315;
    }
 } else {

    VAR_50 = VAR_52;
    if(VAR_45->ChipType < VAR_11) {
       if(VAR_46 > 0x13) {
   if( (VAR_45->ChipType == VAR_13) &&
       (VAR_45->ChipRevision >= 0x30) ) {
      if(VAR_50 == 0x14) VAR_50 = 0x2e;
   }
       }
    }
 }

     } else {

 VAR_50 = VAR_52;
 if(VAR_45->ChipType < VAR_11) {
    if(VAR_46 > 0x13) {
       if( (VAR_45->ChipType != VAR_13) &&
    (VAR_45->ChipType != VAR_10) ) {
   if(VAR_50 == 0x1b) VAR_50 = 0x48;
       }






    }
        }

     }

  }

  return VAR_50;
}
