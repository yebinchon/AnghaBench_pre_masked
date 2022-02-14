
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {scalar_t__ ChipType; scalar_t__ SiS_IF_DEF_LVDS; int SiS_VBType; int SiS_P3c4; TYPE_1__* SiS_VCLKData; } ;
struct TYPE_2__ {int SR2B; int SR2C; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_3)
{
   if(VAR_3->ChipType >= VAR_0) {
      if(VAR_3->ChipType < VAR_1) {
  if(VAR_3->SiS_IF_DEF_LVDS == 0) return;
      }
   } else {
      if((VAR_3->SiS_IF_DEF_LVDS == 0) &&
  (!(VAR_3->SiS_VBType & VAR_2)) ) {
  return;
      }
   }

   FUNC_1(VAR_3->SiS_P3c4,0x31,0xcf,0x20);
   FUNC_0(VAR_3->SiS_P3c4,0x2B,VAR_3->SiS_VCLKData[1].SR2B);
   FUNC_0(VAR_3->SiS_P3c4,0x2C,VAR_3->SiS_VCLKData[1].SR2C);
   FUNC_0(VAR_3->SiS_P3c4,0x2D,0x80);
   FUNC_1(VAR_3->SiS_P3c4,0x31,0xcf,0x10);
   FUNC_0(VAR_3->SiS_P3c4,0x2B,VAR_3->SiS_VCLKData[0].SR2B);
   FUNC_0(VAR_3->SiS_P3c4,0x2C,VAR_3->SiS_VCLKData[0].SR2C);
   FUNC_0(VAR_3->SiS_P3c4,0x2D,0x80);
}
