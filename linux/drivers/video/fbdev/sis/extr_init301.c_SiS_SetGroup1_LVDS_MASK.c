
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {unsigned short CModeFlag; int SiS_IF_DEF_LVDS; int SiS_VBType; scalar_t__ ChipType; int SiS_VBInfo; int SiS_LCDResInfo; unsigned short SiS_LCDHDES; unsigned short SiS_HDE; int SiS_LCDInfo; unsigned short PanelXRes; unsigned short SiS_HT; int PanelHRS; int PanelHRE; unsigned short SiS_VGAVDE; unsigned short PanelYRes; unsigned short SiS_LCDVDES; unsigned short SiS_VT; unsigned short SiS_VGAVT; int PanelVRS; int PanelVRE; unsigned int SiS_VDE; int SiS_SetFlag; int ChipRevision; int SiS_IF_DEF_CH70xx; unsigned int SiS_VGAHDE; int SiS_VGAHT; unsigned char* VirtualRomBase; int SiS_LCDTypeInfo; int SiS_Part1Port; scalar_t__ SiS_IF_DEF_FSTN; scalar_t__ SiS_IF_DEF_DSTN; scalar_t__ SiS_UseROM; scalar_t__ SiS_IF_DEF_TRUMPION; int SiS_Part4Port; int SiS_P3c4; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; scalar_t__ UseCustomMode; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short Ext_CRT2CRTC; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; unsigned short Ext_RESINFO; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; unsigned short St_ResInfo; unsigned short St_CRT2CRTC; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned char** VAR_20 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,unsigned short) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct SiS_Private*,unsigned char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static void
FUNC_6(struct SiS_Private *VAR_26, unsigned short VAR_27, unsigned short VAR_28,
  unsigned short VAR_29)
{
  unsigned short VAR_30, VAR_31 = 0;
  unsigned short VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
  unsigned int VAR_37 = 0, VAR_38, VAR_39, VAR_40 = 0;
  bool VAR_41 = 0, VAR_42 = 0, VAR_43 = 0;







  if(VAR_27 <= 0x13) {
     VAR_30 = VAR_26->SiS_SModeIDTable[VAR_28].St_ModeFlag;
     VAR_31 = VAR_26->SiS_SModeIDTable[VAR_28].St_ResInfo;



  } else if(VAR_26->UseCustomMode) {
     VAR_30 = VAR_26->CModeFlag;
  } else {
     VAR_30 = VAR_26->SiS_EModeIDTable[VAR_28].Ext_ModeFlag;
     VAR_31 = VAR_26->SiS_EModeIDTable[VAR_28].Ext_RESINFO;



  }


  if((VAR_26->SiS_IF_DEF_LVDS == 1) || (VAR_26->SiS_VBType & VAR_21)) {
     VAR_41 = 1;
  }


  if((VAR_26->SiS_VBType & VAR_25) && (!(VAR_26->SiS_VBType & VAR_21))) {
     VAR_42 = 1;
  }

  if((VAR_26->ChipType >= VAR_11) && (VAR_41) && (!(VAR_26->SiS_VBInfo & VAR_17))) {
     if((!VAR_26->SiS_IF_DEF_FSTN) && (!VAR_26->SiS_IF_DEF_DSTN)) {
        VAR_43 = 1;
     }
  }
  VAR_33 = VAR_26->SiS_LCDHDES;
  if(VAR_41) {
     if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
 if(!VAR_26->SiS_IF_DEF_FSTN && !VAR_26->SiS_IF_DEF_DSTN) {
    if((VAR_26->SiS_LCDResInfo == 129) &&
       (!(VAR_26->SiS_VBInfo & VAR_19))) {
       VAR_33 -= 8;
    }
 }
     }
  }

  VAR_36 = (VAR_33 & 0x0007);
  FUNC_1(VAR_26->SiS_Part1Port,0x1A,VAR_36);
  VAR_36 = (VAR_33 >> 3) & 0x00FF;
  FUNC_1(VAR_26->SiS_Part1Port,0x16,VAR_36);

  VAR_34 = VAR_26->SiS_HDE;
  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     if(!(VAR_26->SiS_LCDInfo & VAR_5)) {
        VAR_34 = VAR_26->PanelXRes;
     }
     if((VAR_26->SiS_LCDResInfo == VAR_8) ||
        (VAR_26->SiS_LCDResInfo == VAR_9) ||
        (VAR_26->SiS_LCDResInfo == VAR_10)) {
        VAR_34 >>= 1;
     }
  }

  VAR_33 += VAR_34;
  if(VAR_33 >= VAR_26->SiS_HT) VAR_33 -= VAR_26->SiS_HT;

  VAR_36 = VAR_33;
  if(VAR_36 & 0x07) VAR_36 += 8;
  VAR_36 >>= 3;
  FUNC_1(VAR_26->SiS_Part1Port,0x17,VAR_36);

  VAR_35 = (VAR_26->SiS_HT - VAR_34) >> 2;

  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     if(!(VAR_26->SiS_LCDInfo & VAR_5)) {
        if(VAR_26->PanelHRS != 999) VAR_35 = VAR_26->PanelHRS;
     }
  }

  VAR_35 += VAR_33;
  if(VAR_35 >= VAR_26->SiS_HT) VAR_35 -= VAR_26->SiS_HT;

  VAR_36 = (VAR_35 >> 3) & 0x00FF;
  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     if(VAR_26->SiS_IF_DEF_TRUMPION) {
 if(VAR_26->SiS_LCDResInfo == 130) {
    switch(VAR_27) {
    case 0x04:
    case 0x05:
    case 0x0d: VAR_36 = 0x56; break;
    case 0x10: VAR_36 = 0x60; break;
    case 0x13: VAR_36 = 0x5f; break;
    case 0x40:
    case 0x41:
    case 0x4f:
    case 0x43:
    case 0x44:
    case 0x62:
    case 0x56:
    case 0x53:
    case 0x5d:
    case 0x5e: VAR_36 = 0x54; break;
    }
 }
     }
  }
  FUNC_1(VAR_26->SiS_Part1Port,0x14,VAR_36);

  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     VAR_36 += 2;
     if(!(VAR_26->SiS_LCDInfo & VAR_5)) {
 VAR_36 += 8;
 if(VAR_26->PanelHRE != 999) {
    VAR_36 = VAR_35 + VAR_26->PanelHRE;
    if(VAR_36 >= VAR_26->SiS_HT) VAR_36 -= VAR_26->SiS_HT;
    VAR_36 >>= 3;
 }
     }
  } else {
     VAR_36 += 10;
  }

  VAR_36 &= 0x1F;
  VAR_36 |= ((VAR_35 & 0x07) << 5);
  FUNC_1(VAR_26->SiS_Part1Port,0x15,VAR_36);



  VAR_33 = VAR_26->SiS_VGAVDE;
  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     if(!(VAR_26->SiS_LCDInfo & VAR_5)) {
 VAR_33 = VAR_26->PanelYRes;
     }
  }

  VAR_34 = VAR_26->SiS_LCDVDES + VAR_33;
  if(VAR_34 >= VAR_26->SiS_VT) VAR_34 -= VAR_26->SiS_VT;

  VAR_32 = VAR_34;

  VAR_35 = VAR_26->SiS_VGAVT - VAR_26->SiS_VGAVDE;
  if(VAR_26->ChipType < VAR_11) {
     if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
 if(!(VAR_26->SiS_LCDInfo & VAR_5)) {
    VAR_35 = VAR_26->SiS_VGAVT - VAR_26->PanelYRes;
 }
     }
  }
  if(VAR_41) VAR_35 >>= 1;
  else VAR_35 >>= 2;

  if( (VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) &&
      (!(VAR_26->SiS_LCDInfo & VAR_5)) &&
      (VAR_26->PanelVRS != 999) ) {
     VAR_35 = VAR_26->PanelVRS;
     VAR_34 += VAR_35;
     if(VAR_42) VAR_34++;
  } else {
     VAR_34 += VAR_35;
     if(VAR_26->ChipType < VAR_11) VAR_34++;
     else if(VAR_42) VAR_34++;
  }

  if(VAR_34 >= VAR_26->SiS_VT) VAR_34 -= VAR_26->SiS_VT;

  VAR_36 = VAR_34 & 0x00FF;
  if(VAR_26->SiS_IF_DEF_TRUMPION) {
     if(VAR_26->SiS_LCDResInfo == 130) {
 if(VAR_27 == 0x10) VAR_36 = 0xa9;
     }
  }
  FUNC_1(VAR_26->SiS_Part1Port,0x18,VAR_36);

  VAR_35 >>= 3;
  VAR_35++;

  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     if(!(VAR_26->SiS_LCDInfo & VAR_5)) {
        if(VAR_26->PanelVRE != 999) VAR_35 = VAR_26->PanelVRE;
     }
  }

  VAR_35 += VAR_34;
  VAR_36 = VAR_35 & 0x000F;
  FUNC_3(VAR_26->SiS_Part1Port,0x19,0xF0,VAR_36);

  VAR_36 = ((VAR_34 >> 8) & 0x07) << 3;
  if(VAR_26->SiS_IF_DEF_FSTN || VAR_26->SiS_IF_DEF_DSTN) {
     if(VAR_26->SiS_HDE != 640) {
        if(VAR_26->SiS_VGAVDE != VAR_26->SiS_VDE) VAR_36 |= 0x40;
     }
  } else if(VAR_26->SiS_VGAVDE != VAR_26->SiS_VDE) VAR_36 |= 0x40;
  if(VAR_26->SiS_SetFlag & VAR_1) VAR_36 |= 0x40;
  VAR_34 = 0x87;
  if((VAR_26->ChipType >= VAR_11) ||
     (VAR_26->ChipRevision >= 0x30)) {
     VAR_34 = 0x07;
     if((VAR_26->SiS_IF_DEF_CH70xx == 1) && (VAR_26->SiS_VBInfo & VAR_18)) {
 if(FUNC_0(VAR_26->SiS_Part1Port,0x00) & 0x03) VAR_36 |= 0x80;
     }

     if(VAR_26->SiS_LCDInfo & VAR_6) {
 if(VAR_26->SiS_VBInfo & VAR_17) {
    if(FUNC_0(VAR_26->SiS_P3c4,0x06) & 0x10) VAR_36 |= 0x80;
 } else {
    if(FUNC_0(VAR_26->SiS_Part1Port,0x00) & 0x01) VAR_36 |= 0x80;
 }
     }
  }
  FUNC_3(VAR_26->SiS_Part1Port,0x1A,VAR_34,VAR_36);

  VAR_34 = VAR_32;

  VAR_35 = VAR_26->SiS_LCDVDES;

  if(VAR_26->SiS_VBInfo & (VAR_16 | VAR_17)) {
     switch(VAR_26->SiS_LCDResInfo) {
     case 129:
 VAR_34 = VAR_26->SiS_VGAVDE - 1;
 VAR_35 = VAR_26->SiS_VGAVDE;
 break;
     case 128:
 if(!(VAR_26->SiS_VBInfo & VAR_19)) {
    if(VAR_31 == VAR_15) VAR_35++;
 }
 break;
     case 131:
 if(!(VAR_26->SiS_VBInfo & VAR_19)) {
    if(VAR_31 == VAR_13) VAR_35++;
    if(VAR_26->SiS_LCDInfo & VAR_0) {
       if(VAR_31 == VAR_15) VAR_35++;
    }
 }
 break;
     case 130:
 if(VAR_26->ChipType < VAR_11) {
    if(!(VAR_26->SiS_VBInfo & VAR_19)) {
       if(VAR_31 == VAR_14) VAR_35++;
    }
 }
 break;
     }
  }

  VAR_36 = ((VAR_34 >> 8) & 0x07) << 3;
  VAR_36 |= ((VAR_35 >> 8) & 0x07);
  FUNC_1(VAR_26->SiS_Part1Port,0x1D,VAR_36);
  FUNC_1(VAR_26->SiS_Part1Port,0x1C,VAR_34);
  FUNC_1(VAR_26->SiS_Part1Port,0x1B,VAR_35);



  if(VAR_26->ChipType < VAR_11) {
  } else {
  }



  VAR_37 = VAR_26->SiS_VGAHDE;
  if(VAR_43) {
     if(VAR_30 & VAR_2) VAR_37 >>= 1;
  }
  VAR_38 = VAR_37 << 16;
  if(VAR_26->SiS_HDE == VAR_37) {
     VAR_39 = 0xFFFF;
  } else {
     VAR_39 = VAR_38 / VAR_26->SiS_HDE;
     if(VAR_26->ChipType >= VAR_11) {
        if(VAR_38 % VAR_26->SiS_HDE) VAR_39++;
     }
  }

  if(VAR_26->ChipType >= VAR_11) {
     VAR_37 = (VAR_38 / VAR_39) - 1;
  } else {
     VAR_37 = ((VAR_26->SiS_VGAHT << 16) / VAR_39) - 1;
  }
  VAR_39 = (VAR_39 << 16) | (VAR_37 & 0xFFFF);
  VAR_36 = (unsigned short)(VAR_39 & 0x00FF);
  FUNC_1(VAR_26->SiS_Part1Port,0x1F,VAR_36);

  if(VAR_26->ChipType >= VAR_11) {
     VAR_37 = (VAR_26->SiS_VGAVDE << 18) / VAR_40;
     VAR_34 = (unsigned short)(VAR_37 & 0xFFFF);
  } else {
     VAR_37 = VAR_26->SiS_VGAVDE << 6;
     VAR_34 = VAR_40 & 0x3f;
     if(VAR_34 == 0) VAR_34 = 64;
     VAR_37 /= VAR_34;
     VAR_34 = (unsigned short)(VAR_37 & 0xFFFF);
  }
  if(VAR_26->SiS_LCDResInfo == 130) VAR_34--;
  if(VAR_26->SiS_SetFlag & VAR_1) {
     if((!VAR_26->SiS_IF_DEF_FSTN) && (!VAR_26->SiS_IF_DEF_DSTN)) VAR_34 = 1;
     else if(VAR_26->SiS_LCDResInfo != 129) VAR_34 = 1;
  }

  VAR_36 = ((VAR_34 >> 8) & 0x07) << 3;
  VAR_36 = VAR_36 | ((VAR_39 >> 8) & 0x07);
  FUNC_1(VAR_26->SiS_Part1Port,0x20,VAR_36);
  FUNC_1(VAR_26->SiS_Part1Port,0x21,VAR_34);

  VAR_39 >>= 16;
  if(!VAR_43) {
     if(VAR_30 & VAR_2) VAR_39 >>= 1;
  }
  VAR_36 = (unsigned short)((VAR_39 & 0xFF00) >> 8);
  FUNC_1(VAR_26->SiS_Part1Port,0x22,VAR_36);
  VAR_36 = (unsigned short)(VAR_39 & 0x00FF);
  FUNC_1(VAR_26->SiS_Part1Port,0x23,VAR_36);
}
