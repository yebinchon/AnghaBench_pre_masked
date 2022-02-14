
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_P3da; int SiS_P3c0; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {unsigned char* ATTR; } ;


 int FUNC_0 (struct SiS_Private*,int ) ;
 int FUNC_1 (struct SiS_Private*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
 unsigned char VAR_2;
 unsigned short VAR_3;

 for (VAR_3 = 0; VAR_3 <= 0x13; VAR_3++) {
  VAR_2 = VAR_0->SiS_StandTable[VAR_1].ATTR[VAR_3];
  FUNC_0(VAR_0, VAR_0->SiS_P3da);
  FUNC_1(VAR_0, VAR_0->SiS_P3c0, VAR_3);
  FUNC_1(VAR_0, VAR_0->SiS_P3c0, VAR_2);
 }
 FUNC_0(VAR_0, VAR_0->SiS_P3da);
 FUNC_1(VAR_0, VAR_0->SiS_P3c0, 0x14);
 FUNC_1(VAR_0, VAR_0->SiS_P3c0, 0x00);

 FUNC_0(VAR_0, VAR_0->SiS_P3da);
 FUNC_1(VAR_0, VAR_0->SiS_P3c0, 0x20);
 FUNC_0(VAR_0, VAR_0->SiS_P3da);
}
