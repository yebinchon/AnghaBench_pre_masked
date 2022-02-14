
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int dummy; } ;


 int FUNC_0 (struct SiS_Private*) ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*,int) ;
 int FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (struct SiS_Private*) ;

__attribute__((used)) static
unsigned short
FUNC_5(struct SiS_Private *VAR_0, unsigned short VAR_1, unsigned char *VAR_2)
{
   unsigned short VAR_3, VAR_4, VAR_5;
   unsigned char VAR_6,VAR_7;

   if(VAR_1 > 4) return 0xFFFF;

   VAR_3 = 0;
   FUNC_4(VAR_0);
   if(!(FUNC_0(VAR_0))) {
      VAR_4 = 127;
      if(VAR_1 != 1) VAR_4 = 255;
      VAR_6 = 0;
      VAR_7 = 0;
      for(VAR_5=0; VAR_5<VAR_4; VAR_5++) {
  VAR_2[VAR_5] = (unsigned char)FUNC_1(VAR_0);
  VAR_6 += VAR_2[VAR_5];
  VAR_7 |= VAR_2[VAR_5];
  FUNC_2(VAR_0, 0);
      }
      VAR_2[VAR_5] = (unsigned char)FUNC_1(VAR_0);
      VAR_6 += VAR_2[VAR_5];
      FUNC_2(VAR_0, 1);
      if(VAR_7) VAR_3 = (unsigned short)VAR_6;
      else VAR_3 = 0xFFFF;
   } else {
      VAR_3 = 0xFFFF;
   }
   FUNC_3(VAR_0);
   return VAR_3;
}
