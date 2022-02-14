
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {unsigned short CHDisplay; int CModeFlag; unsigned short SiS_VGAHDE; unsigned short SiS_HDE; unsigned short SiS_VGAVDE; unsigned short SiS_VDE; unsigned short CVDisplay; scalar_t__ ChipType; int SiS_IF_DEF_LVDS; int SiS_SetFlag; int SiS_VBType; int SiS_VBInfo; int SiS_LCDResInfo; int SiS_LCDInfo; scalar_t__ SiS_IF_DEF_FSTN; scalar_t__ SiS_IF_DEF_DSTN; int SiS_P3c4; int SiS_P3d4; TYPE_3__* SiS_EModeIDTable; TYPE_2__* SiS_ModeResInfo; TYPE_1__* SiS_StResInfo; scalar_t__ UseCustomMode; } ;
struct TYPE_6__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_5__ {unsigned short HTotal; unsigned short VTotal; } ;
struct TYPE_4__ {unsigned short HTotal; unsigned short VTotal; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short,unsigned short) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_10, unsigned short VAR_11, unsigned short VAR_12)
{
   unsigned short VAR_13, VAR_14, VAR_15=0, VAR_16;

   if(VAR_10->UseCustomMode) {
      VAR_13 = VAR_10->CHDisplay;
      if(VAR_10->CModeFlag & VAR_2) VAR_13 <<= 1;
      VAR_10->SiS_VGAHDE = VAR_10->SiS_HDE = VAR_13;

      VAR_10->SiS_VGAVDE = VAR_10->SiS_VDE = VAR_10->CVDisplay;
      return;
   }

   VAR_16 = FUNC_1(VAR_10,VAR_11,VAR_12);

   if(VAR_11 <= 0x13) {
      VAR_13 = VAR_10->SiS_StResInfo[VAR_16].HTotal;
      VAR_14 = VAR_10->SiS_StResInfo[VAR_16].VTotal;
   } else {
      VAR_13 = VAR_10->SiS_ModeResInfo[VAR_16].HTotal;
      VAR_14 = VAR_10->SiS_ModeResInfo[VAR_16].VTotal;
      VAR_15 = VAR_10->SiS_EModeIDTable[VAR_12].Ext_ModeFlag;
   }

   if(!VAR_10->SiS_IF_DEF_DSTN && !VAR_10->SiS_IF_DEF_FSTN) {

      if((VAR_10->ChipType >= VAR_4) && (VAR_10->SiS_IF_DEF_LVDS == 1)) {
  if((VAR_11 != 0x03) && (VAR_10->SiS_SetFlag & VAR_7)) {
     if(VAR_14 == 350) VAR_14 = 400;
  }
  if(FUNC_0(VAR_10->SiS_P3d4,0x3a) & 0x01) {
     if(VAR_11 == 0x12) VAR_14 = 400;
  }
      }

      if(VAR_15 & VAR_2) VAR_13 <<= 1;
      if(VAR_15 & VAR_1) VAR_14 <<= 1;

   }

   if((VAR_10->SiS_VBType & VAR_9) && (!(VAR_10->SiS_VBType & VAR_8))) {

      if(VAR_10->SiS_VBInfo & VAR_6) {
  switch(VAR_10->SiS_LCDResInfo) {
    case 130:
       if(!(VAR_10->SiS_SetFlag & VAR_3)) {
   if(!(VAR_10->SiS_LCDInfo & VAR_0)) {
      if(VAR_14 == 350) VAR_14 = 357;
      if(VAR_14 == 400) VAR_14 = 420;
      if(VAR_14 == 480) VAR_14 = 525;
   }
       }
       break;
    case 129:
       if(!(VAR_10->SiS_LCDInfo & VAR_0)) {

   if(VAR_14 == 400) VAR_14 = 405;
       }
       if(VAR_14 == 350) VAR_14 = 360;
       if(VAR_10->SiS_SetFlag & VAR_3) {
   if(VAR_14 == 360) VAR_14 = 375;
       }
       break;
    case 128:
       if(!(VAR_10->SiS_SetFlag & VAR_3)) {
   if(VAR_14 == 1024) VAR_14 = 1056;
       }
       break;
  }
      }

   } else {

      if(VAR_10->SiS_VBType & VAR_9) {
  if(VAR_10->SiS_VBInfo & (VAR_6 | VAR_5)) {
     if(VAR_13 == 720) VAR_13 = 640;
  }
      } else if(VAR_13 == 720) VAR_13 = 640;

      if(VAR_10->SiS_SetFlag & VAR_7) {
  VAR_14 = 400;
  if(VAR_10->ChipType >= VAR_4) {
     if(FUNC_0(VAR_10->SiS_P3c4,0x17) & 0x80) VAR_14 = 480;
  } else {
     if(FUNC_0(VAR_10->SiS_P3c4,0x13) & 0x80) VAR_14 = 480;
  }
  if(VAR_10->SiS_IF_DEF_DSTN || VAR_10->SiS_IF_DEF_FSTN) VAR_14 = 480;
      }

   }
   VAR_10->SiS_VGAHDE = VAR_10->SiS_HDE = VAR_13;
   VAR_10->SiS_VGAVDE = VAR_10->SiS_VDE = VAR_14;
}
