
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csis_state {int slock; TYPE_1__* events; int sd; } ;
struct TYPE_2__ {scalar_t__ counter; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,char*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct csis_state *VAR_2, bool VAR_3)
{
 int VAR_4 = VAR_3 ? VAR_0 : VAR_0 - 4;
 unsigned long VAR_5;

 FUNC_0(&VAR_2->slock, VAR_5);

 for (VAR_4--; VAR_4 >= 0; VAR_4--) {
  if (VAR_2->events[VAR_4].counter > 0 || VAR_1)
   FUNC_2(&VAR_2->sd, "%s events: %d\n",
      VAR_2->events[VAR_4].name,
      VAR_2->events[VAR_4].counter);
 }
 FUNC_1(&VAR_2->slock, VAR_5);
}
