
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned short CInfoFlag; scalar_t__ ChipType; int SiS_P3c4; int SiS_P3d4; TYPE_1__* SiS_RefIndex; scalar_t__ UseCustomMode; } ;
struct TYPE_2__ {unsigned short Ext_InfoFlag; } ;


 unsigned short VAR_0 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (int ,int,unsigned short) ;
 int FUNC_2 (int ,int,int,unsigned short) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_2, unsigned short VAR_3,
  unsigned short VAR_4, unsigned short VAR_5)
{
   unsigned short VAR_6, VAR_7, VAR_8;

   if(VAR_2->UseCustomMode) {
      VAR_8 = VAR_2->CInfoFlag;
   } else {
      VAR_8 = VAR_2->SiS_RefIndex[VAR_5].Ext_InfoFlag;
   }

   VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

   VAR_6 = (VAR_7 >> 8) & 0x0f;
   FUNC_2(VAR_2->SiS_P3c4,0x0E,0xF0,VAR_6);

   FUNC_1(VAR_2->SiS_P3d4,0x13,VAR_7 & 0xFF);

   if(VAR_8 & VAR_0) VAR_7 >>= 1;

   VAR_7 <<= 5;
   VAR_6 = (VAR_7 >> 8) + 1;
   if(VAR_7 & 0xff) VAR_6++;
   if(VAR_2->ChipType == VAR_1) {
      if(VAR_3 == 0x4a || VAR_3 == 0x49) VAR_6--;
   }
   FUNC_1(VAR_2->SiS_P3c4,0x10,VAR_6);
}
