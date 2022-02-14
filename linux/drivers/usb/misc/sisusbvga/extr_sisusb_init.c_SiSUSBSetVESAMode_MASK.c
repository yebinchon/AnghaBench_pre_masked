
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {TYPE_1__* SiS_EModeIDTable; } ;
struct TYPE_2__ {int Ext_ModeID; unsigned short Ext_VESAID; } ;


 int FUNC_0 (struct SiS_Private*,unsigned short) ;
 int FUNC_1 (struct SiS_Private*) ;

int FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
 unsigned short VAR_2 = 0;
 int VAR_3;

 FUNC_1(VAR_0);

 if (VAR_1 == 0x03) {

  VAR_2 = 0x03;

 } else {

  VAR_3 = 0;
  do {

   if (VAR_0->SiS_EModeIDTable[VAR_3].Ext_VESAID == VAR_1) {
    VAR_2 = VAR_0->SiS_EModeIDTable[VAR_3].Ext_ModeID;
    break;
   }

  } while (VAR_0->SiS_EModeIDTable[VAR_3++].Ext_ModeID != 0xff);

 }

 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_0, VAR_2);
}
