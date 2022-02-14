
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SIS_OH {TYPE_2__* poh_prev; TYPE_1__* poh_next; } ;
struct TYPE_4__ {TYPE_1__* poh_next; } ;
struct TYPE_3__ {TYPE_2__* poh_prev; } ;



__attribute__((used)) static void
FUNC_0(struct SIS_OH *VAR_0)
{
 VAR_0->poh_prev->poh_next = VAR_0->poh_next;
 VAR_0->poh_next->poh_prev = VAR_0->poh_prev;
}
