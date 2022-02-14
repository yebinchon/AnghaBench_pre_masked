
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_SetFlag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct SiS_Private*,unsigned short) ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_1, unsigned short VAR_2)
{
   if(FUNC_0(VAR_1, VAR_2)) {
      VAR_1->SiS_SetFlag |= VAR_0;
   }
}
