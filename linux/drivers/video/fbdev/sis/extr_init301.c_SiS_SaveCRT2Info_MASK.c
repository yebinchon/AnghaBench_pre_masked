
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBInfo; int SiS_P3d4; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned short) ;
 int FUNC_1 (int ,int,unsigned short,unsigned short) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_1, unsigned short VAR_2)
{
   unsigned short VAR_3, VAR_4;


   FUNC_0(VAR_1->SiS_P3d4,0x34,VAR_2);
   VAR_3 = (VAR_1->SiS_VBInfo & VAR_0) >> 8;
   VAR_4 = ~(VAR_0 >> 8);
   FUNC_1(VAR_1->SiS_P3d4,0x31,VAR_4,VAR_3);
}
