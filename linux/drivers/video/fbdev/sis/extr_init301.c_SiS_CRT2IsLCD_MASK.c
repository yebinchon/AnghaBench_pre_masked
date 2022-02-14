
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_P3d4; int SiS_P3c4; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct SiS_Private *VAR_1)
{
   if(VAR_1->ChipType == VAR_0) {
      if(FUNC_0(VAR_1->SiS_P3c4,0x13) & 0x20) return 1;
   }
   if(FUNC_0(VAR_1->SiS_P3d4,0x30) & 0x20) return 1;
   return 0;
}
