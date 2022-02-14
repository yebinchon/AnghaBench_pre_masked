
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int VideoMemorySize; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;

__attribute__((used)) static bool
FUNC_1(struct SiS_Private *VAR_2, unsigned short VAR_3,
  unsigned short VAR_4)
{
   unsigned short VAR_5 = VAR_2->VideoMemorySize / (1024*1024);
   unsigned short VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
   unsigned short VAR_7 = ((VAR_6 & VAR_0) >> VAR_1) + 1;

   if(!VAR_5) return 1;

   if(VAR_5 < VAR_7) return 0;
   return 1;
}
