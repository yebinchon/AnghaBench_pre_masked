
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_usbphyc {int nphys; TYPE_1__** phys; } ;
struct TYPE_2__ {scalar_t__ active; } ;



__attribute__((used)) static bool FUNC_0(struct stm32_usbphyc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nphys; VAR_1++)
  if (VAR_0->phys[VAR_1]->active)
   return 1;

 return 0;
}
