
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_P3c4; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {int* SR; } ;


 int FUNC_0 (struct SiS_Private*,int ,int,unsigned char) ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
 unsigned char VAR_2;
 int VAR_3;

 FUNC_0(VAR_0, VAR_0->SiS_P3c4, 0x00, 0x03);

 VAR_2 = VAR_0->SiS_StandTable[VAR_1].SR[0] | 0x20;
 FUNC_0(VAR_0, VAR_0->SiS_P3c4, 0x01, VAR_2);

 for (VAR_3 = 2; VAR_3 <= 4; VAR_3++) {
  VAR_2 = VAR_0->SiS_StandTable[VAR_1].SR[VAR_3 - 1];
  FUNC_0(VAR_0, VAR_0->SiS_P3c4, VAR_3, VAR_2);
 }
}
