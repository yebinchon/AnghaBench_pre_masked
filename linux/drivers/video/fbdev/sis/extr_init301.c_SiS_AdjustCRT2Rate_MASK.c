
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_VBType; int SiS_VBInfo; scalar_t__ ChipType; int SiS_LCDInfo; int SiS_TVMode; scalar_t__ SiS_IF_DEF_CH70xx; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {unsigned short ModeID; unsigned short Ext_InfoFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 unsigned short VAR_16 ;
 unsigned short VAR_17 ;
 unsigned short VAR_18 ;
 unsigned short VAR_19 ;
 unsigned short VAR_20 ;
 unsigned short VAR_21 ;
 unsigned short VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static bool
FUNC_0(struct SiS_Private *VAR_27, unsigned short VAR_28, unsigned short VAR_29,
  unsigned short VAR_30, unsigned short *VAR_31)
{
   unsigned short VAR_32=0, VAR_33, VAR_34;

   VAR_33 = VAR_27->SiS_RefIndex[VAR_30 + (*VAR_31)].ModeID;

   if(VAR_27->SiS_VBType & VAR_26) {

      if(VAR_27->SiS_VBInfo & VAR_7) {

  VAR_32 |= VAR_16;
  if(VAR_27->ChipType >= VAR_2) {
     VAR_32 |= VAR_17;
     if(VAR_27->SiS_VBType & VAR_24) {
        VAR_32 |= VAR_18;
        if(VAR_27->SiS_VBType & VAR_25) {
    VAR_32 |= VAR_19;
        }
     }
  }

      } else if(VAR_27->SiS_VBInfo & (VAR_5 | VAR_6)) {

  VAR_32 |= VAR_15;
  if(VAR_27->ChipType >= VAR_2) {
     if(VAR_27->SiS_VBType & VAR_26) {
        if((VAR_27->SiS_LCDInfo & VAR_0) && (VAR_27->SiS_LCDInfo & VAR_1)) {
           if(VAR_33 == 0x2e) VAR_32 |= VAR_12;
        }
     }
  }

      } else if(VAR_27->SiS_VBInfo & VAR_4) {

  VAR_32 |= VAR_14;

      } else if(VAR_27->SiS_VBInfo & (VAR_11|VAR_3|VAR_9|VAR_8)) {

  VAR_32 |= VAR_20;
  if(VAR_27->SiS_VBType & VAR_24) {
     VAR_32 |= VAR_21;
     if(VAR_27->SiS_VBInfo & VAR_11) {
        if(VAR_27->SiS_TVMode & VAR_23) {
           VAR_32 |= VAR_22;
        }
     }
  }

      }

   } else {

      if(VAR_27->SiS_IF_DEF_CH70xx != 0) {
  if(VAR_27->SiS_VBInfo & VAR_10) {
     VAR_32 |= VAR_13;
  }
      }

      if(VAR_27->SiS_VBInfo & VAR_5) {
  VAR_32 |= VAR_15;
      }

   }


   for(; VAR_27->SiS_RefIndex[VAR_30 + (*VAR_31)].ModeID == VAR_33; (*VAR_31)--) {
      VAR_34 = VAR_27->SiS_RefIndex[VAR_30 + (*VAR_31)].Ext_InfoFlag;
      if(VAR_34 & VAR_32) return 1;
      if((*VAR_31) == 0) break;
   }




   for((*VAR_31) = 0; ; (*VAR_31)++) {
      if(VAR_27->SiS_RefIndex[VAR_30 + (*VAR_31)].ModeID != VAR_33) break;
      VAR_34 = VAR_27->SiS_RefIndex[VAR_30 + (*VAR_31)].Ext_InfoFlag;
      if(VAR_34 & VAR_32) return 1;
   }
   return 0;
}
