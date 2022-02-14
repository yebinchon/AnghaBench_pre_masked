
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_DDC_Clk; int SiS_DDC_Index; int SiS_DDC_Port; int SiS_DDC_NClk; } ;


 int FUNC_0 (struct SiS_Private*,int ) ;
 unsigned short FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,unsigned short) ;

__attribute__((used)) static unsigned short
FUNC_3(struct SiS_Private *VAR_1)
{
  unsigned short VAR_2, VAR_3=1000;

  FUNC_2(VAR_1->SiS_DDC_Port,
    VAR_1->SiS_DDC_Index,
    VAR_1->SiS_DDC_NClk,
    VAR_1->SiS_DDC_Clk);
  do {
    VAR_2 = FUNC_1(VAR_1->SiS_DDC_Port,VAR_1->SiS_DDC_Index);
  } while((!(VAR_2 & VAR_1->SiS_DDC_Clk)) && --VAR_3);
  if (!VAR_3) {
   return 0xFFFF;
  }
  FUNC_0(VAR_1,VAR_0);
  return 0;
}
