
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3c4; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct SiS_Private*) ;

unsigned short
FUNC_2(struct SiS_Private *VAR_0)
{
   FUNC_1(VAR_0);
   return ((FUNC_0(VAR_0->SiS_P3c4,0x11) & 0x02) >> 1);
}
