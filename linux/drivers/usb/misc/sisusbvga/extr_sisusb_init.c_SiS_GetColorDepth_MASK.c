
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_3__ {unsigned short St_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;

__attribute__((used)) static unsigned short
FUNC_0(struct SiS_Private *VAR_2, unsigned short VAR_3,
    unsigned short VAR_4)
{
 static const unsigned short VAR_5[6] = { 1, 2, 4, 4, 6, 8 };
 unsigned short VAR_6;
 short VAR_7;

 if (VAR_3 <= 0x13) {
  VAR_6 = VAR_2->SiS_SModeIDTable[VAR_4].St_ModeFlag;
 } else {
  VAR_6 = VAR_2->SiS_EModeIDTable[VAR_4].Ext_ModeFlag;
 }

 VAR_7 = (VAR_6 & VAR_1) - VAR_0;
 if (VAR_7 < 0)
  VAR_7 = 0;
 return VAR_5[VAR_7];
}
