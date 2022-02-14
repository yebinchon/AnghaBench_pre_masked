
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
typedef int dma_addr_t ;
struct TYPE_2__ {scalar_t__ min; scalar_t__ max; int paddr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static dma_addr_t FUNC_0(u16 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_0 - 1; VAR_3 > 0; VAR_3--)
  if ((VAR_1[VAR_3].min < VAR_2) &&
      (VAR_2 <= VAR_1[VAR_3].max))
   break;

 return VAR_1[VAR_3].paddr;
}
