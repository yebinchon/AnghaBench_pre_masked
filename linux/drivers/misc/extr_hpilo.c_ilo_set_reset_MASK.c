
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ilo_hwinfo {TYPE_1__** ccb_alloc; } ;
struct TYPE_2__ {int driver_ccb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ilo_hwinfo *VAR_1)
{
 int VAR_2;





 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!VAR_1->ccb_alloc[VAR_2])
   continue;
  FUNC_0(&VAR_1->ccb_alloc[VAR_2]->driver_ccb);
 }
}
