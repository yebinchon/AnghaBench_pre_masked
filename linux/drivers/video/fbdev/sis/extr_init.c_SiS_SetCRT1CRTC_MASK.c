
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned char* CCRT1CRTC; scalar_t__ SiS_ModeType; scalar_t__ ChipType; int SiS_P3c4; int SiS_P3d4; TYPE_1__* SiS_CRT1Table; scalar_t__ Alternate1600x1200; int SiS_UseWide; scalar_t__ UseCustomMode; } ;
struct TYPE_2__ {int * CR; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short,int ) ;
 int FUNC_2 (int ,int,unsigned char) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,unsigned short) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct SiS_Private *VAR_3, unsigned short VAR_4,
  unsigned short VAR_5, unsigned short VAR_6)
{
   unsigned short VAR_7, VAR_8, VAR_9, VAR_10;
   unsigned char *VAR_11 = ((void*)0);

   VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5);

   if(VAR_3->UseCustomMode) {

      VAR_11 = &VAR_3->CCRT1CRTC[0];

   } else {

      VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_3->SiS_UseWide);


      if((VAR_7 == 0x20) && (VAR_3->Alternate1600x1200)) VAR_7 = 0x57;

      VAR_11 = (unsigned char *)&VAR_3->SiS_CRT1Table[VAR_7].CR[0];

   }


   FUNC_3(VAR_3->SiS_P3d4,0x11,0x7f);

   for(VAR_8 = 0, VAR_9 = 0; VAR_8 <= 7; VAR_8++, VAR_9++) {
      FUNC_2(VAR_3->SiS_P3d4,VAR_9,VAR_11[VAR_8]);
   }
   for(VAR_9 = 0x10; VAR_8 <= 10; VAR_8++, VAR_9++) {
      FUNC_2(VAR_3->SiS_P3d4,VAR_9,VAR_11[VAR_8]);
   }
   for(VAR_9 = 0x15; VAR_8 <= 12; VAR_8++, VAR_9++) {
      FUNC_2(VAR_3->SiS_P3d4,VAR_9,VAR_11[VAR_8]);
   }
   for(VAR_9 = 0x0A; VAR_8 <= 15; VAR_8++, VAR_9++) {
      FUNC_2(VAR_3->SiS_P3c4,VAR_9,VAR_11[VAR_8]);
   }

   FUNC_2(VAR_3->SiS_P3c4,0x0E,VAR_11[16] & 0xE0);

   VAR_7 = (VAR_11[16] & 0x01) << 5;
   if(VAR_10 & VAR_0) VAR_7 |= 0x80;
   FUNC_4(VAR_3->SiS_P3d4,0x09,0x5F,VAR_7);

   if(VAR_3->SiS_ModeType > VAR_1) {
      FUNC_2(VAR_3->SiS_P3d4,0x14,0x4F);
   }
}
