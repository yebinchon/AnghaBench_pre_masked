
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {scalar_t__ SiS_ModeType; int SiS_P3d4; TYPE_3__* SiS_CRT1Table; int SiS_P3c4; TYPE_2__* SiS_RefIndex; TYPE_1__* SiS_EModeIDTable; } ;
struct TYPE_6__ {int* CR; } ;
struct TYPE_5__ {unsigned char Ext_CRT1CRTC; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct SiS_Private*,int ,int,int) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int) ;
 int FUNC_2 (struct SiS_Private*,int ,int,int,unsigned short) ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_2, unsigned short VAR_3,
  unsigned short VAR_4, unsigned short VAR_5)
{
 unsigned char VAR_6;
 unsigned short VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_2, VAR_2->SiS_P3d4, 0x11, 0x7f);

 VAR_10 = VAR_2->SiS_EModeIDTable[VAR_4].Ext_ModeFlag;

 VAR_6 = VAR_2->SiS_RefIndex[VAR_5].Ext_CRT1CRTC;

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 <= 7; VAR_8++, VAR_9++) {
  FUNC_0(VAR_2, VAR_2->SiS_P3d4, VAR_9,
      VAR_2->SiS_CRT1Table[VAR_6].CR[VAR_8]);
 }
 for (VAR_9 = 0x10; VAR_8 <= 10; VAR_8++, VAR_9++) {
  FUNC_0(VAR_2, VAR_2->SiS_P3d4, VAR_9,
      VAR_2->SiS_CRT1Table[VAR_6].CR[VAR_8]);
 }
 for (VAR_9 = 0x15; VAR_8 <= 12; VAR_8++, VAR_9++) {
  FUNC_0(VAR_2, VAR_2->SiS_P3d4, VAR_9,
      VAR_2->SiS_CRT1Table[VAR_6].CR[VAR_8]);
 }
 for (VAR_9 = 0x0A; VAR_8 <= 15; VAR_8++, VAR_9++) {
  FUNC_0(VAR_2, VAR_2->SiS_P3c4, VAR_9,
      VAR_2->SiS_CRT1Table[VAR_6].CR[VAR_8]);
 }

 VAR_7 = VAR_2->SiS_CRT1Table[VAR_6].CR[16] & 0xE0;
 FUNC_0(VAR_2, VAR_2->SiS_P3c4, 0x0E, VAR_7);

 VAR_7 = ((VAR_2->SiS_CRT1Table[VAR_6].CR[16]) & 0x01) << 5;
 if (VAR_10 & VAR_0)
  VAR_7 |= 0x80;
 FUNC_2(VAR_2, VAR_2->SiS_P3d4, 0x09, 0x5F, VAR_7);

 if (VAR_2->SiS_ModeType > VAR_1)
  FUNC_0(VAR_2, VAR_2->SiS_P3d4, 0x14, 0x4F);
}
