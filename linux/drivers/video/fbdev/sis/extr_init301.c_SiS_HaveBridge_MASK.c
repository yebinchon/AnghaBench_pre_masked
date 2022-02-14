
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_IF_DEF_LVDS; int SiS_VBType; int SiS_Part4Port; } ;


 unsigned short FUNC_0 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_1(struct SiS_Private *VAR_1)
{
   unsigned short VAR_2;

   if(VAR_1->SiS_IF_DEF_LVDS == 1) {
      return 1;
   } else if(VAR_1->SiS_VBType & VAR_0) {
      VAR_2 = FUNC_0(VAR_1->SiS_Part4Port,0x00);
      if((VAR_2 == 1) || (VAR_2 == 2)) return 1;
   }
   return 0;
}
