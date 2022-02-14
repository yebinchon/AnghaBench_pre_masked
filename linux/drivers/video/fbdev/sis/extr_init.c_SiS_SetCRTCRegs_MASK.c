
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {scalar_t__ ChipType; int ChipRevision; int SiS_VBInfo; int SiS_P3d4; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {unsigned char* CRTC; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_6, unsigned short VAR_7)
{
   unsigned char VAR_8;
   unsigned short VAR_9;


   FUNC_2(VAR_6->SiS_P3d4,0x11,0x7f);

   for(VAR_9 = 0; VAR_9 <= 0x18; VAR_9++) {
      VAR_8 = VAR_6->SiS_StandTable[VAR_7].CRTC[VAR_9];
      FUNC_1(VAR_6->SiS_P3d4,VAR_9,VAR_8);
   }

   if(VAR_6->ChipType >= VAR_1) {
      FUNC_0(VAR_6);
      for(VAR_9 = 0x13; VAR_9 <= 0x14; VAR_9++) {
  VAR_8 = VAR_6->SiS_StandTable[VAR_7].CRTC[VAR_9];
  FUNC_1(VAR_6->SiS_P3d4,VAR_9,VAR_8);
      }
   } else if( ( (VAR_6->ChipType == VAR_0) ||
         (VAR_6->ChipType == VAR_2) ) &&
       (VAR_6->ChipRevision >= 0x30) ) {
      if(VAR_6->SiS_VBInfo & VAR_5) {
  if(VAR_6->SiS_VBInfo & (VAR_3 | VAR_4)) {
     FUNC_1(VAR_6->SiS_P3d4,0x18,0xFE);
  }
      }
   }
}
