
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {int SiS_LCDHDES; int SiS_LCDVDES; int SiS_VBInfo; int SiS_LCDResInfo; int SiS_VGAVDE; int PanelYRes; int PanelVT; scalar_t__ ChipType; int SiS_LCDTypeInfo; int SiS_CustomT; int SiS_LCDInfo; int SiS_VBType; scalar_t__ SiS_VGAHDE; scalar_t__ PanelXRes; int SiS_HT; int SiS_VT; scalar_t__ SiS_IF_DEF_CH70xx; int SiS_TVMode; int SiS_SetFlag; TYPE_2__* SiS_SModeIDTable; int PanelHT; TYPE_1__* SiS_RefIndex; scalar_t__ UseCustomMode; scalar_t__ SiS_IF_DEF_TRUMPION; } ;
struct SiS_LVDSDes {int LCDHDES; int LCDVDES; } ;
struct TYPE_4__ {unsigned short St_CRT2CRTC; unsigned short St_ModeFlag; } ;
struct TYPE_3__ {unsigned short Ext_CRT2CRTC; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;







 int const VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct SiS_LVDSDes* FUNC_0 (struct SiS_Private*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_17, unsigned short VAR_18, unsigned short VAR_19,
                   unsigned short VAR_20)
{
  unsigned short VAR_21, VAR_22;
  const struct SiS_LVDSDes *VAR_23 = ((void*)0);

  VAR_17->SiS_LCDHDES = 0;
  VAR_17->SiS_LCDVDES = 0;


  if(VAR_17->SiS_VBInfo & VAR_10) {


     if(VAR_17->SiS_IF_DEF_TRUMPION) {
 if(VAR_17->SiS_LCDResInfo == 137) {
    if(VAR_17->SiS_VGAVDE == VAR_17->PanelYRes) {
       VAR_17->SiS_LCDVDES = VAR_17->PanelVT - 1;
    }
 }
 return;
     }


     if(VAR_17->ChipType < VAR_9) {
 if(VAR_17->SiS_LCDResInfo == VAR_7 && VAR_17->SiS_LCDTypeInfo == 3) {
    VAR_17->SiS_LCDHDES = 8;
    if (VAR_17->SiS_VGAVDE >= 480) VAR_17->SiS_LCDVDES = 512;
    else if(VAR_17->SiS_VGAVDE >= 400) VAR_17->SiS_LCDVDES = 436;
    else if(VAR_17->SiS_VGAVDE >= 350) VAR_17->SiS_LCDVDES = 440;
    return;
 }
     }

  }

  if( (VAR_17->UseCustomMode) ||
      (VAR_17->SiS_LCDResInfo == VAR_8) ||
      (VAR_17->SiS_CustomT == VAR_1) ||
      (VAR_17->SiS_CustomT == VAR_2) ||
      (VAR_17->SiS_LCDInfo & VAR_5) ) {
     return;
  }

  if(VAR_18 <= 0x13) VAR_22 = VAR_17->SiS_SModeIDTable[VAR_19].St_CRT2CRTC;
  else VAR_22 = VAR_17->SiS_RefIndex[VAR_20].Ext_CRT2CRTC;

  if((VAR_17->SiS_VBType & VAR_16) && (VAR_17->SiS_VBInfo & VAR_11)) {
  } else {

     if((VAR_17->SiS_IF_DEF_CH70xx != 0) && (VAR_17->SiS_VBInfo & VAR_12)) {

 if((VAR_17->SiS_TVMode & VAR_14) && (!(VAR_17->SiS_TVMode & VAR_15))) {
    if(VAR_22 <= 3) VAR_17->SiS_LCDHDES = 256;
 }

     } else if((VAR_23 = FUNC_0(VAR_17))) {

 VAR_17->SiS_LCDHDES = (VAR_23+VAR_22)->LCDHDES;
 VAR_17->SiS_LCDVDES = (VAR_23+VAR_22)->LCDVDES;

     } else if(VAR_17->SiS_LCDInfo & VAR_3) {

 if(VAR_17->SiS_VGAHDE != VAR_17->PanelXRes) {
    VAR_17->SiS_LCDHDES = VAR_17->SiS_HT - ((VAR_17->PanelXRes - VAR_17->SiS_VGAHDE) / 2);
 }
 if(VAR_17->SiS_VGAVDE != VAR_17->PanelYRes) {
    VAR_17->SiS_LCDVDES = VAR_17->SiS_VT - ((VAR_17->PanelYRes - VAR_17->SiS_VGAVDE) / 2);
 } else {
    if(VAR_17->ChipType < VAR_9) {
       VAR_17->SiS_LCDVDES = VAR_17->PanelVT - 1;
    } else {
       switch(VAR_17->SiS_LCDResInfo) {
       case 128:
       case 137:
       case 136:
   VAR_17->SiS_LCDVDES = VAR_17->PanelVT;
   break;
       case 132:
   VAR_17->SiS_LCDVDES = VAR_17->PanelVT - 1;
   break;
       }
    }
 }

     } else {

        if(VAR_17->ChipType < VAR_9) {
        } else {
 }
     }

     if((VAR_18 <= 0x13) && (VAR_17->SiS_LCDInfo & VAR_3)) {
 VAR_21 = VAR_17->SiS_SModeIDTable[VAR_19].St_ModeFlag;
 if((VAR_17->SiS_VBType & VAR_16) && (VAR_17->SiS_VBInfo & VAR_11)) {
    if(!(VAR_21 & VAR_4)) VAR_17->SiS_LCDHDES = 632;
 } else if(!(VAR_17->SiS_SetFlag & VAR_13)) {
    if(VAR_17->SiS_LCDResInfo != 136) {
       if(VAR_17->SiS_LCDResInfo >= 137) {
          if(VAR_17->ChipType < VAR_9) {
             if(!(VAR_21 & VAR_4)) VAR_17->SiS_LCDHDES = 320;
          } else {
   }
       }
    }
 }
     }
  }
}
