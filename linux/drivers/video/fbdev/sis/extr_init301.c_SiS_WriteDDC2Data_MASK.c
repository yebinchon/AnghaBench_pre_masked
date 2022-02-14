
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_Data; int SiS_DDC_NData; int SiS_DDC_Index; int SiS_DDC_Port; } ;


 unsigned short FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;

__attribute__((used)) static unsigned short
FUNC_4(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
  unsigned short VAR_2,VAR_3,VAR_4;

  VAR_3 = 0x80;
  for(VAR_2 = 0; VAR_2 < 8; VAR_2++) {
    FUNC_3(VAR_0);
    if(VAR_1 & VAR_3) {
      FUNC_1(VAR_0->SiS_DDC_Port,
        VAR_0->SiS_DDC_Index,
        VAR_0->SiS_DDC_NData,
        VAR_0->SiS_DDC_Data);
    } else {
      FUNC_1(VAR_0->SiS_DDC_Port,
        VAR_0->SiS_DDC_Index,
        VAR_0->SiS_DDC_NData,
        0x00);
    }
    FUNC_2(VAR_0);
    VAR_3 >>= 1;
  }
  VAR_4 = FUNC_0(VAR_0);
  return VAR_4;
}
