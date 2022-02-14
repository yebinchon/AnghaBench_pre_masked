
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_Part1Port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
void
FUNC_1(struct SiS_Private *VAR_2)
{
   if(VAR_2->ChipType == VAR_1)
      return;
   else if(VAR_2->ChipType >= VAR_0)
      FUNC_0(VAR_2->SiS_Part1Port,0x2F,0xFE);
   else
      FUNC_0(VAR_2->SiS_Part1Port,0x24,0xFE);
}
