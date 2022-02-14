
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_DeviceAddr; unsigned short SiS_DDC_ReadAddr; int SiS_ChrontelInit; } ;


 int FUNC_0 (struct SiS_Private*,int) ;
 int VAR_0 ;
 unsigned short FUNC_1 (struct SiS_Private*) ;
 scalar_t__ FUNC_2 (struct SiS_Private*) ;
 scalar_t__ FUNC_3 (struct SiS_Private*) ;
 unsigned short FUNC_4 (struct SiS_Private*,int) ;

__attribute__((used)) static unsigned short
FUNC_5(struct SiS_Private *VAR_1, unsigned short VAR_2)
{
  unsigned short VAR_3, VAR_4, VAR_5;

  for(VAR_5=0; VAR_5<20; VAR_5++) {
     if(VAR_5) {
 FUNC_3(VAR_1);
 FUNC_0(VAR_1,VAR_0 * 4);
     }
     if(FUNC_2(VAR_1)) continue;
     VAR_4 = FUNC_4(VAR_1,VAR_1->SiS_DDC_DeviceAddr);
     if(VAR_4) continue;
     VAR_4 = FUNC_4(VAR_1,VAR_1->SiS_DDC_ReadAddr | VAR_2);
     if(VAR_4) continue;
     if (FUNC_2(VAR_1)) continue;
     VAR_4 = FUNC_4(VAR_1,VAR_1->SiS_DDC_DeviceAddr | 0x01);
     if(VAR_4) continue;
     VAR_3 = FUNC_1(VAR_1);
     if(FUNC_3(VAR_1)) continue;
     VAR_1->SiS_ChrontelInit = 1;
     return VAR_3;
  }
  return 0xFFFF;
}
