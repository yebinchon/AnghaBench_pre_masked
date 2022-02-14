
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char* VirtualRomBase; unsigned char Init_P4_0E; scalar_t__ ChipType; scalar_t__ SiS_XGIROM; scalar_t__ SiS_ROMNew; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct SiS_Private *VAR_1)
{
   unsigned char *VAR_2 = VAR_1->VirtualRomBase;

   VAR_1->Init_P4_0E = 0;
   if(VAR_1->SiS_ROMNew) {
      VAR_1->Init_P4_0E = VAR_2[0x82];
   } else if(VAR_1->ChipType >= VAR_0) {
      if(VAR_1->SiS_XGIROM) {
         VAR_1->Init_P4_0E = VAR_2[0x80];
      }
   }
}
