
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csis_state {int slock; TYPE_1__* events; } ;
struct TYPE_2__ {scalar_t__ counter; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct csis_state *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->slock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->events[VAR_3].counter = 0;
 FUNC_1(&VAR_1->slock, VAR_2);
}
