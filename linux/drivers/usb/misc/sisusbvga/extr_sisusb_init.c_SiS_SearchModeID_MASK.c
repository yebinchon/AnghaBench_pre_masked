
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {TYPE_1__* SiS_EModeIDTable; } ;
struct TYPE_2__ {unsigned short Ext_ModeID; } ;



__attribute__((used)) static int
FUNC_0(struct SiS_Private *VAR_0, unsigned short *VAR_1,
   unsigned short *VAR_2)
{
 if ((*VAR_1) <= 0x13) {

  if ((*VAR_1) != 0x03)
   return 0;

  (*VAR_2) = 0;

 } else {

  for (*VAR_2 = 0;; (*VAR_2)++) {

   if (VAR_0->SiS_EModeIDTable[*VAR_2].Ext_ModeID ==
       (*VAR_1))
    break;

   if (VAR_0->SiS_EModeIDTable[*VAR_2].Ext_ModeID ==
       0xFF)
    return 0;
  }

 }

 return 1;
}
