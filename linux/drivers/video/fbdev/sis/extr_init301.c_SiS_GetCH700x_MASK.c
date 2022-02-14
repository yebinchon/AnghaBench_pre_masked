
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_DeviceAddr; int SiS_DDC_Index; int SiS_DDC_Data; int SiS_DDC_Clk; unsigned short SiS_DDC_ReadAddr; int SiS_ChrontelInit; } ;


 int FUNC_0 (struct SiS_Private*,int ) ;
 unsigned short FUNC_1 (struct SiS_Private*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct SiS_Private*) ;

unsigned short
FUNC_3(struct SiS_Private *VAR_1, unsigned short VAR_2)
{
  unsigned short VAR_3;

  VAR_1->SiS_DDC_DeviceAddr = 0xEA;

  FUNC_0(VAR_1,VAR_0);

  if(!(VAR_1->SiS_ChrontelInit)) {
     VAR_1->SiS_DDC_Index = 0x11;
     VAR_1->SiS_DDC_Data = 0x02;
     VAR_1->SiS_DDC_Clk = 0x01;
     FUNC_2(VAR_1);
  }

  VAR_1->SiS_DDC_ReadAddr = VAR_2;

  if( ((VAR_3 = FUNC_1(VAR_1,0x80)) == 0xFFFF) &&
      (!VAR_1->SiS_ChrontelInit) ) {

     VAR_1->SiS_DDC_Index = 0x0a;
     VAR_1->SiS_DDC_Data = 0x80;
     VAR_1->SiS_DDC_Clk = 0x40;
     FUNC_2(VAR_1);

     VAR_3 = FUNC_1(VAR_1,0x80);
  }
  return VAR_3;
}
