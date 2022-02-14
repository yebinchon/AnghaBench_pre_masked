
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_P3d4; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {unsigned char* CRTC; } ;


 int FUNC_0 (struct SiS_Private*,int ,unsigned short,unsigned char) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
 unsigned char VAR_2;
 unsigned short VAR_3;

 FUNC_1(VAR_0, VAR_0->SiS_P3d4, 0x11, 0x7f);

 for (VAR_3 = 0; VAR_3 <= 0x18; VAR_3++) {
  VAR_2 = VAR_0->SiS_StandTable[VAR_1].CRTC[VAR_3];
  FUNC_0(VAR_0, VAR_0->SiS_P3d4, VAR_3, VAR_2);
 }
}
