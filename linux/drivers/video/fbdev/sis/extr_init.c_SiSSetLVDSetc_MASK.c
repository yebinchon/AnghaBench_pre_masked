
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_IF_DEF_LVDS; int SiS_IF_DEF_TRUMPION; int SiS_IF_DEF_CH70xx; int SiS_IF_DEF_CONEX; int ChipType; int SiS_P3d4; int SiS_Backup70xx; int SiS_Part4Port; scalar_t__ SiS_ChrontelInit; } ;
 int FUNC_0 (struct SiS_Private*,int) ;
 int FUNC_1 (int ,int) ;



__attribute__((used)) static
void
FUNC_2(struct SiS_Private *VAR_0)
{
   unsigned short VAR_1;

   VAR_0->SiS_IF_DEF_LVDS = 0;
   VAR_0->SiS_IF_DEF_TRUMPION = 0;
   VAR_0->SiS_IF_DEF_CH70xx = 0;
   VAR_0->SiS_IF_DEF_CONEX = 0;

   VAR_0->SiS_ChrontelInit = 0;

   if(VAR_0->ChipType == 129) return;


   VAR_1 = FUNC_1(VAR_0->SiS_Part4Port,0x00);
   if((VAR_1 == 1) || (VAR_1 == 2)) return;

   switch(VAR_0->ChipType) {
   default:
 break;
   }
}
