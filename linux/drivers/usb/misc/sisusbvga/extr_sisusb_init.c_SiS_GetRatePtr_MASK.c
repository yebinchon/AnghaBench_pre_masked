
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned short SiS_ModeType; TYPE_2__* SiS_RefIndex; TYPE_1__* SiS_EModeIDTable; int SiS_P3d4; } ;
struct TYPE_4__ {unsigned short ModeID; unsigned short Ext_InfoFlag; } ;
struct TYPE_3__ {unsigned short REFindex; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (struct SiS_Private*,int ,int) ;

__attribute__((used)) static unsigned short
FUNC_1(struct SiS_Private *VAR_1, unsigned short VAR_2,
        unsigned short VAR_3)
{
 unsigned short VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_2 <= 0x13)
  return 0xFFFF;

 VAR_6 = FUNC_0(VAR_1, VAR_1->SiS_P3d4, 0x33) & 0x0F;
 if (VAR_6 > 0)
  VAR_6--;

 VAR_4 = VAR_1->SiS_EModeIDTable[VAR_3].REFindex;
 VAR_2 = VAR_1->SiS_RefIndex[VAR_4].ModeID;

 VAR_5 = 0;
 do {
  if (VAR_1->SiS_RefIndex[VAR_4 + VAR_5].ModeID != VAR_2)
   break;

  VAR_7 =
      VAR_1->SiS_RefIndex[VAR_4 + VAR_5].Ext_InfoFlag & VAR_0;
  if (VAR_7 < VAR_1->SiS_ModeType)
   break;

  VAR_5++;
  VAR_6--;
 } while (VAR_6 != 0xFFFF);

 VAR_5--;

 return (VAR_4 + VAR_5);
}
