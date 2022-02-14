
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_NData; int SiS_DDC_Index; int SiS_DDC_Port; int SiS_DDC_Data; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (struct SiS_Private*) ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
   FUNC_2(VAR_0);
   if(VAR_1) {
      FUNC_0(VAR_0->SiS_DDC_Port,
        VAR_0->SiS_DDC_Index,
        VAR_0->SiS_DDC_NData,
        VAR_0->SiS_DDC_Data);
   } else {
      FUNC_0(VAR_0->SiS_DDC_Port,
        VAR_0->SiS_DDC_Index,
        VAR_0->SiS_DDC_NData,
        0);
   }
   FUNC_1(VAR_0);
}
