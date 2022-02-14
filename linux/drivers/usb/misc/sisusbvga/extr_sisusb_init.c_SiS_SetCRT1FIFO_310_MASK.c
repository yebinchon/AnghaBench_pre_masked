
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_P3c4; TYPE_1__* SiS_EModeIDTable; } ;
struct TYPE_2__ {unsigned short Ext_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (struct SiS_Private*,int ,int,int) ;
 int FUNC_1 (struct SiS_Private*,int ,int,int) ;
 int FUNC_2 (struct SiS_Private*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_2, unsigned short VAR_3,
      unsigned short VAR_4)
{
 unsigned short VAR_5 = VAR_2->SiS_EModeIDTable[VAR_4].Ext_ModeFlag;


 FUNC_1(VAR_2, VAR_2->SiS_P3c4, 0x3D, 0xFE);

 FUNC_0(VAR_2, VAR_2->SiS_P3c4, 0x08, 0xAE);
 FUNC_1(VAR_2, VAR_2->SiS_P3c4, 0x09, 0xF0);

 if (VAR_3 <= 0x13)
  return;

 if ((!(VAR_5 & VAR_0)) || (!(VAR_5 & VAR_1))) {
  FUNC_0(VAR_2, VAR_2->SiS_P3c4, 0x08, 0x34);
  FUNC_2(VAR_2, VAR_2->SiS_P3c4, 0x3D, 0x01);
 }
}
