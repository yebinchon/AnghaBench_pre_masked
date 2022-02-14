
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nvecs; int * handler; } ;
struct bfa_s {TYPE_1__ msix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0(struct bfa_s *VAR_5)
{
 int VAR_6;

 if (VAR_5->msix.nvecs == 0)
  return;

 if (VAR_5->msix.nvecs == 1) {
  for (VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++)
   VAR_5->msix.handler[VAR_6] = VAR_3;
  return;
 }

 for (VAR_6 = VAR_2+1; VAR_6 < VAR_0; VAR_6++)
  VAR_5->msix.handler[VAR_6] = VAR_4;
}
