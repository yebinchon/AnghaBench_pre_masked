
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {int SiS_VBInfo; int SiS_TVMode; scalar_t__ SiS_ModeType; int SiS_LCDResInfo; int SiS_LCDInfo; scalar_t__ SiS_CHSOverScan; scalar_t__ SiS_IF_DEF_CH70xx; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short Ext_CRT2CRTC; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; unsigned short St_CRT2CRTC; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_0(struct SiS_Private *VAR_7, unsigned short VAR_8, unsigned short VAR_9,
     unsigned short VAR_10, unsigned short *VAR_11,
     unsigned short *VAR_12)
 {
  unsigned short VAR_13 = 0;
  bool VAR_14 = 1;



  if(VAR_8 <= 0x13) {
     VAR_13 = VAR_7->SiS_SModeIDTable[VAR_9].St_ModeFlag;
     (*VAR_11) = VAR_7->SiS_SModeIDTable[VAR_9].St_CRT2CRTC;
  } else {
     VAR_13 = VAR_7->SiS_EModeIDTable[VAR_9].Ext_ModeFlag;
     (*VAR_11) = VAR_7->SiS_RefIndex[VAR_10].Ext_CRT2CRTC;
  }

  (*VAR_11) &= 0x3F;

  if((VAR_7->SiS_IF_DEF_CH70xx) && (VAR_7->SiS_VBInfo & VAR_3)) {

     (*VAR_12) = 80;
     if((VAR_7->SiS_TVMode & VAR_5) && (!(VAR_7->SiS_TVMode & VAR_6))) {
       (*VAR_12) = 82;
 if(VAR_7->SiS_ModeType > VAR_2) {
    if(VAR_7->SiS_CHSOverScan) (*VAR_12) = 84;
 }
     }
     if((*VAR_12) != 84) {
        if(VAR_7->SiS_TVMode & VAR_4) (*VAR_12)++;
     }

  } else {

     (*VAR_12 = 0);
     switch(VAR_7->SiS_LCDResInfo) {
     case 131: (*VAR_12) = 50;
      VAR_14 = 0;
      break;
     case 130: (*VAR_12) = 14;
      break;
     case 129: (*VAR_12) = 18;
      break;
     case 128: (*VAR_12) = 10;
      break;
     case 132: (*VAR_12) = 26;
      break;
     default: return 1;
     }

     if(VAR_14) {
        if(VAR_13 & VAR_1) (*VAR_12)++;
     }

     if(VAR_7->SiS_LCDResInfo == 132) {
        if(VAR_7->SiS_LCDInfo & VAR_0) (*VAR_12) += 2;
     }

  }

  return 1;
}
