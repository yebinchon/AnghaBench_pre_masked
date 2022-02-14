
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_P3c4; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,unsigned short,unsigned short) ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_1, unsigned short VAR_2, unsigned short VAR_3)
{
   if(VAR_1->ChipType >= VAR_0) {
      VAR_2 &= 0x0f;
      VAR_3 &= 0x0f;
   }
   FUNC_0(VAR_1->SiS_P3c4,0x11,VAR_2,VAR_3);
}
