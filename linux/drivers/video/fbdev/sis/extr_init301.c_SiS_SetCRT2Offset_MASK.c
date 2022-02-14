
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBInfo; int SiS_Part1Port; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (int ,int,unsigned char) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_1, unsigned short VAR_2, unsigned short VAR_3,
  unsigned short VAR_4)
{
   unsigned short VAR_5;
   unsigned char VAR_6;

   if(VAR_1->SiS_VBInfo & VAR_0) return;

   VAR_5 = FUNC_0(VAR_1,VAR_2,VAR_3,VAR_4);

   FUNC_1(VAR_1->SiS_Part1Port,0x07,(VAR_5 & 0xFF));
   FUNC_1(VAR_1->SiS_Part1Port,0x09,(VAR_5 >> 8));

   VAR_6 = (unsigned char)(((VAR_5 >> 3) & 0xFF) + 1);
   if(VAR_5 & 0x07) VAR_6++;
   FUNC_1(VAR_1->SiS_Part1Port,0x03,VAR_6);
}
