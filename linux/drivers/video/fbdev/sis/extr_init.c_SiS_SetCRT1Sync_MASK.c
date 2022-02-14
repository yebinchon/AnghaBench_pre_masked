
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int CInfoFlag; int SiS_P3c2; TYPE_1__* SiS_RefIndex; scalar_t__ UseCustomMode; } ;
struct TYPE_2__ {int Ext_InfoFlag; } ;


 int FUNC_0 (int ,unsigned short) ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
   unsigned short VAR_2;

   if(VAR_0->UseCustomMode) {
      VAR_2 = VAR_0->CInfoFlag >> 8;
   } else {
      VAR_2 = VAR_0->SiS_RefIndex[VAR_1].Ext_InfoFlag >> 8;
   }

   VAR_2 &= 0xC0;
   VAR_2 |= 0x2f;
   FUNC_0(VAR_0->SiS_P3c2,VAR_2);
}
