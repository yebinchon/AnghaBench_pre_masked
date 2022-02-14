
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvecs; int * handler; } ;
struct bfa_s {TYPE_1__ msix; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct bfa_s *VAR_3)
{
 if (VAR_3->msix.nvecs == 0)
  return;

 if (VAR_3->msix.nvecs == 1)
  VAR_3->msix.handler[VAR_0] = VAR_1;
 else
  VAR_3->msix.handler[VAR_0] = VAR_2;
}
