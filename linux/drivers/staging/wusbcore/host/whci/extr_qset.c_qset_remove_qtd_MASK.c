
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whc_qset {size_t td_start; int ntds; TYPE_1__* qtd; } ;
struct whc {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct whc *VAR_1, struct whc_qset *VAR_2)
{
 VAR_2->qtd[VAR_2->td_start].status = 0;

 if (++VAR_2->td_start >= VAR_0)
  VAR_2->td_start = 0;
 VAR_2->ntds--;
}
