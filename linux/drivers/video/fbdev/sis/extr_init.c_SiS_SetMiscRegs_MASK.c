
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {scalar_t__ ChipType; int SiS_VBType; int SiS_VBInfo; int SiS_P3c2; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {unsigned char MISC; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_3, unsigned short VAR_4)
{
   unsigned char VAR_5;

   VAR_5 = VAR_3->SiS_StandTable[VAR_4].MISC;

   if(VAR_3->ChipType < VAR_0) {
      if(VAR_3->SiS_VBType & VAR_2) {
  if(VAR_3->SiS_VBInfo & VAR_1) {
    VAR_5 |= 0x0C;
  }
      }
   }

   FUNC_0(VAR_3->SiS_P3c2,VAR_5);
}
