
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_LCDResInfo; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;

 unsigned short VAR_2 ;



__attribute__((used)) static unsigned short
FUNC_0(struct SiS_Private *VAR_3)
{
   unsigned short VAR_4 = VAR_3->SiS_LCDResInfo;

   switch(VAR_4) {
   case 130: VAR_4 = VAR_1; break;
   case 129: VAR_4 = VAR_2; break;
   case 128: VAR_4 = VAR_0; break;
   }
   return VAR_4;
}
