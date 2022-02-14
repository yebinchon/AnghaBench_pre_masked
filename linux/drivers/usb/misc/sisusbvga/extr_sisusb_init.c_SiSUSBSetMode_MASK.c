
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned long IOAddress; int SiS_ModeType; int SiS_P3d4; int SiS_P3c6; int SiS_SetFlag; TYPE_1__* SiS_EModeIDTable; int SiS_P3c4; } ;
struct TYPE_2__ {int Ext_ModeFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct SiS_Private*) ;
 int FUNC_1 (struct SiS_Private*,unsigned long) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;
 int FUNC_4 (struct SiS_Private*) ;
 int FUNC_5 (struct SiS_Private*) ;
 int FUNC_6 (struct SiS_Private*,unsigned short*,unsigned short*) ;
 int FUNC_7 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_8 (struct SiS_Private*,int ,int,unsigned short) ;
 int FUNC_9 (struct SiS_Private*,int ,int) ;

int FUNC_10(struct SiS_Private *VAR_2, unsigned short VAR_3)
{
 unsigned short VAR_4;
 unsigned long VAR_5 = VAR_2->IOAddress;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2, VAR_5);
 FUNC_4(VAR_2);

 if (!(FUNC_6(VAR_2, &VAR_3, &VAR_4)))
  return 0;

 FUNC_8(VAR_2, VAR_2->SiS_P3c4, 0x05, 0x86);

 FUNC_0(VAR_2);

 VAR_3 &= 0x7f;

 VAR_2->SiS_ModeType =
     VAR_2->SiS_EModeIDTable[VAR_4].Ext_ModeFlag & VAR_1;

 VAR_2->SiS_SetFlag = VAR_0;


 FUNC_7(VAR_2, VAR_3, VAR_4);

 FUNC_5(VAR_2);

 FUNC_3(VAR_2);
 FUNC_9(VAR_2, VAR_2->SiS_P3c6, 0xFF);


 FUNC_8(VAR_2, VAR_2->SiS_P3d4, 0x34, VAR_3);

 return 1;
}
