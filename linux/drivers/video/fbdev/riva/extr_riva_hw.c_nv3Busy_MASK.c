
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int FifoEmptyCount; int * PGRAPH; TYPE_1__* Rop; } ;
struct TYPE_4__ {int FifoFree; } ;
typedef TYPE_2__ RIVA_HW_INST ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1
(
    RIVA_HW_INST *VAR_0
)
{
    return ((FUNC_0(&VAR_0->Rop->FifoFree, 0) < VAR_0->FifoEmptyCount) ||
     FUNC_0(&VAR_0->PGRAPH[0x000006B0/4], 0) & 0x01);
}
