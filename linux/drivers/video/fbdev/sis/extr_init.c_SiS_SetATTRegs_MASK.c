
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_VBType; int SiS_VBInfo; int SiS_IF_DEF_LVDS; scalar_t__ SiS_IF_DEF_CH70xx; scalar_t__ ChipType; int SiS_P3da; int SiS_P3c0; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {unsigned char* ATTR; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_9, unsigned short VAR_10)
{
   unsigned char VAR_11;
   unsigned short VAR_12;

   for(VAR_12 = 0; VAR_12 <= 0x13; VAR_12++) {
      VAR_11 = VAR_9->SiS_StandTable[VAR_10].ATTR[VAR_12];

      if(VAR_12 == 0x13) {



  if(VAR_9->SiS_VBType & VAR_8) {
     if(VAR_9->SiS_VBInfo & VAR_4) VAR_11 = 0;
  }
  if(VAR_9->SiS_IF_DEF_LVDS == 1) {
     if(VAR_9->SiS_IF_DEF_CH70xx != 0) {
        if(VAR_9->SiS_VBInfo & VAR_5) {
    if(VAR_9->SiS_VBInfo & VAR_6) VAR_11 = 0;
        }
     }
  }
  if(VAR_9->ChipType >= VAR_2) {
     if(VAR_9->SiS_VBInfo & (VAR_5 | VAR_3)) {
        if(VAR_9->SiS_VBInfo & VAR_6) VAR_11 = 0;
     }
  } else if(VAR_9->SiS_VBInfo & VAR_3) {
     if(VAR_9->ChipType >= VAR_1) {
        if(VAR_0) {

    if(VAR_9->SiS_VBType & VAR_7) {
       if(VAR_9->SiS_VBInfo & VAR_6) VAR_11 = 0;
    } else {
       VAR_11 = 0;
    }
        }
     } else {
        if(VAR_9->SiS_VBInfo & VAR_6) VAR_11 = 0;
     }
  }
      }
      FUNC_0(VAR_9->SiS_P3da);
      FUNC_1(VAR_9->SiS_P3c0,VAR_12);
      FUNC_1(VAR_9->SiS_P3c0,VAR_11);
   }

   FUNC_0(VAR_9->SiS_P3da);
   FUNC_1(VAR_9->SiS_P3c0,0x14);
   FUNC_1(VAR_9->SiS_P3c0,0x00);

   FUNC_0(VAR_9->SiS_P3da);
   FUNC_1(VAR_9->SiS_P3c0,0x20);
   FUNC_0(VAR_9->SiS_P3da);
}
