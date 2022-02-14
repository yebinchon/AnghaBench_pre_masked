
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_NClk; int SiS_DDC_Index; int SiS_DDC_Port; } ;


 int FUNC_0 (struct SiS_Private*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static unsigned short
FUNC_2(struct SiS_Private *VAR_1)
{
  FUNC_1(VAR_1->SiS_DDC_Port,
    VAR_1->SiS_DDC_Index,
    VAR_1->SiS_DDC_NClk,
    0x00);
  FUNC_0(VAR_1,VAR_0);
  return 0;
}
