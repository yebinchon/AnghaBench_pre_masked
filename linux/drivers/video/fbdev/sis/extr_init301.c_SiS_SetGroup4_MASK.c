
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned short CModeFlag; scalar_t__ ChipType; int SiS_VBType; int SiS_VBInfo; int SiS_RVBHCFACT; unsigned short SiS_RVBHCMAX; int SiS_VGAHT; int SiS_VGAVT; unsigned short SiS_VGAHDE; int SiS_TVMode; unsigned short Init_P4_0E; scalar_t__ SiS_LCDResInfo; unsigned int SiS_VGAVDE; unsigned int SiS_VDE; unsigned short SiS_RVBHRS; int SiS_HT; int SiS_Part4Port; TYPE_2__* SiS_EModeIDTable; scalar_t__ UseCustomMode; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; unsigned short Ext_RESINFO; } ;
struct TYPE_3__ {unsigned short St_ModeFlag; unsigned short St_ResInfo; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,unsigned short) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_6(struct SiS_Private *VAR_22, unsigned short VAR_23, unsigned short VAR_24,
  unsigned short VAR_25)
{
  unsigned short VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
  unsigned int VAR_32, VAR_33, VAR_34;

  if(VAR_23 <= 0x13) {
     VAR_29 = VAR_22->SiS_SModeIDTable[VAR_24].St_ModeFlag;
     VAR_31 = VAR_22->SiS_SModeIDTable[VAR_24].St_ResInfo;
  } else if(VAR_22->UseCustomMode) {
     VAR_29 = VAR_22->CModeFlag;
     VAR_31 = 0;
  } else {
     VAR_29 = VAR_22->SiS_EModeIDTable[VAR_24].Ext_ModeFlag;
     VAR_31 = VAR_22->SiS_EModeIDTable[VAR_24].Ext_RESINFO;
  }

  if(VAR_22->ChipType >= VAR_2) {
     if(VAR_22->SiS_VBType & VAR_21) {
 if(VAR_22->SiS_VBInfo & VAR_9) {
    FUNC_3(VAR_22->SiS_Part4Port,0x24,0x0e);
 }
     }
  }

  if(VAR_22->SiS_VBType & (VAR_20 | VAR_18)) {
     if(VAR_22->SiS_VBInfo & VAR_10) {
 FUNC_4(VAR_22->SiS_Part4Port,0x10,0x9f);
     }
  }

  if(VAR_22->ChipType >= VAR_2) {
     if(VAR_22->SiS_VBInfo & VAR_9) {
 FUNC_2(VAR_22);
 return;
     }
  }

  FUNC_3(VAR_22->SiS_Part4Port,0x13,VAR_22->SiS_RVBHCFACT);

  VAR_28 = VAR_22->SiS_RVBHCMAX;
  FUNC_3(VAR_22->SiS_Part4Port,0x14,VAR_28);

  VAR_30 = (VAR_28 >> 1) & 0x80;

  VAR_27 = VAR_22->SiS_VGAHT - 1;
  FUNC_3(VAR_22->SiS_Part4Port,0x16,VAR_27);

  VAR_30 |= ((VAR_27 >> 5) & 0x78);

  VAR_27 = VAR_22->SiS_VGAVT - 1;
  if(!(VAR_22->SiS_VBInfo & VAR_10)) VAR_27 -= 5;
  FUNC_3(VAR_22->SiS_Part4Port,0x17,VAR_27);

  VAR_30 |= ((VAR_27 >> 8) & 0x07);
  FUNC_3(VAR_22->SiS_Part4Port,0x15,VAR_30);

  VAR_28 = VAR_22->SiS_VGAHDE;
  if(VAR_29 & VAR_0) VAR_28 >>= 1;
  if(FUNC_0(VAR_22)) VAR_28 >>= 1;

  if(VAR_22->SiS_VBInfo & VAR_8) {
     VAR_30 = 0;
     if(VAR_28 > 800) VAR_30 = 0x60;
  } else if(VAR_22->SiS_VBInfo & VAR_7) {
     VAR_30 = 0;
     if(VAR_28 > 1024) VAR_30 = 0xC0;
     else if(VAR_28 >= 960) VAR_30 = 0xA0;
  } else if(VAR_22->SiS_TVMode & (VAR_15 | VAR_16)) {
     VAR_30 = 0;
     if(VAR_28 >= 1280) VAR_30 = 0x40;
     else if(VAR_28 >= 1024) VAR_30 = 0x20;
  } else {
     VAR_30 = 0x80;
     if(VAR_28 >= 1024) VAR_30 = 0xA0;
  }

  VAR_30 |= VAR_22->Init_P4_0E;

  if(VAR_22->SiS_VBType & VAR_17) {
     if(VAR_22->SiS_LCDResInfo != VAR_1) {
        VAR_30 &= 0xf0;
        VAR_30 |= 0x0A;
     }
  }

  FUNC_5(VAR_22->SiS_Part4Port,0x0E,0x10,VAR_30);

  VAR_33 = VAR_22->SiS_VGAVDE;
  VAR_32 = VAR_22->SiS_VDE;
  if(VAR_22->SiS_VBInfo & VAR_7) {
     if(!(VAR_30 & 0xE0)) VAR_32 >>=1;
  }

  VAR_27 = VAR_22->SiS_RVBHRS;
  FUNC_3(VAR_22->SiS_Part4Port,0x18,VAR_27);
  VAR_27 >>= 8;
  VAR_27 |= 0x40;

  if(VAR_33 <= VAR_32) {
     VAR_27 ^= 0x40;
  } else {
     VAR_33 -= VAR_32;
  }

  VAR_33 *= (256 * 1024);
  VAR_34 = VAR_33 % VAR_32;
  VAR_33 /= VAR_32;
  if(VAR_34) VAR_33++;

  VAR_30 = (unsigned short)(VAR_33 & 0x000000FF);
  FUNC_3(VAR_22->SiS_Part4Port,0x1B,VAR_30);
  VAR_30 = (unsigned short)((VAR_33 & 0x0000FF00) >> 8);
  FUNC_3(VAR_22->SiS_Part4Port,0x1A,VAR_30);
  VAR_30 = (unsigned short)((VAR_33 >> 12) & 0x70);
  VAR_30 |= (VAR_27 & 0x4F);
  FUNC_3(VAR_22->SiS_Part4Port,0x19,VAR_30);

  if(VAR_22->SiS_VBType & VAR_19) {

     FUNC_3(VAR_22->SiS_Part4Port,0x1C,0x28);


     VAR_28 = 0;
     if(VAR_22->SiS_TVMode & (VAR_12 | VAR_16)) VAR_28 = 0x08;
     VAR_26 = VAR_22->SiS_VGAHDE;
     if(VAR_29 & VAR_0) VAR_26 >>= 1;
     if(FUNC_0(VAR_22)) VAR_26 >>= 1;
     if(VAR_26 > 800) {
        if(VAR_22->SiS_VBInfo & VAR_8) {
    VAR_26 -= 800;
 } else {
    VAR_28 = 0x08;
    if(VAR_26 == 960) VAR_26 *= 25;
           else if(VAR_26 == 1024) VAR_26 *= 25;
           else VAR_26 *= 20;
    VAR_30 = VAR_26 % 32;
    VAR_26 /= 32;
    if(VAR_30) VAR_26++;
    VAR_26++;
    if(VAR_22->SiS_VBInfo & VAR_10) {
       if(VAR_31 == VAR_4 ||
          VAR_31 == VAR_3 ||
   VAR_31 == VAR_5 ||
   VAR_31 == VAR_6) {

          VAR_26 = (VAR_26 & 0xff00) | 0x20;
       }
    }
 }
     }
     VAR_26--;
     VAR_30 = ((VAR_26 >> 4) & 0x30) | VAR_28;
     FUNC_3(VAR_22->SiS_Part4Port,0x1D,VAR_26);
     FUNC_3(VAR_22->SiS_Part4Port,0x1E,VAR_30);

     VAR_30 = 0x0036; VAR_28 = 0xD0;
     if((VAR_22->ChipType >= VAR_2) && (VAR_22->SiS_VBType & VAR_21)) {
 VAR_30 = 0x0026; VAR_28 = 0xC0;
     }
     if(VAR_22->SiS_VBInfo & VAR_10) {
        if(!(VAR_22->SiS_TVMode & (VAR_13 | VAR_12 | VAR_16 | VAR_15))) {
    VAR_30 |= 0x01;
    if(VAR_22->SiS_VBInfo & VAR_11) {
       if(!(VAR_22->SiS_TVMode & VAR_14)) {
            VAR_30 &= ~0x01;
       }
    }
 }
     }
     FUNC_5(VAR_22->SiS_Part4Port,0x1F,VAR_28,VAR_30);

     VAR_28 = VAR_22->SiS_HT >> 1;
     if(FUNC_0(VAR_22)) VAR_28 >>= 1;
     VAR_28 -= 2;
     FUNC_3(VAR_22->SiS_Part4Port,0x22,VAR_28);
     VAR_30 = (VAR_28 >> 5) & 0x38;
     FUNC_5(VAR_22->SiS_Part4Port,0x21,0xC0,VAR_30);

     if(VAR_22->SiS_VBType & VAR_21) {
 if(VAR_22->SiS_VBInfo & VAR_8) {
           FUNC_3(VAR_22->SiS_Part4Port,0x24,0x0e);

 }
     }

     FUNC_2(VAR_22);

  }

  FUNC_1(VAR_22, VAR_23, VAR_24, VAR_25);
}
