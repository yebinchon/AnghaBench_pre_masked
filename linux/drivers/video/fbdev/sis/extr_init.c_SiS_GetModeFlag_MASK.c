
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned short CModeFlag; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; scalar_t__ UseCustomMode; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_3__ {unsigned short St_ModeFlag; } ;



unsigned short
FUNC_0(struct SiS_Private *VAR_0, unsigned short VAR_1,
  unsigned short VAR_2)
{
   if(VAR_0->UseCustomMode) {
      return VAR_0->CModeFlag;
   } else if(VAR_1 <= 0x13) {
      return VAR_0->SiS_SModeIDTable[VAR_2].St_ModeFlag;
   } else {
      return VAR_0->SiS_EModeIDTable[VAR_2].Ext_ModeFlag;
   }
}
