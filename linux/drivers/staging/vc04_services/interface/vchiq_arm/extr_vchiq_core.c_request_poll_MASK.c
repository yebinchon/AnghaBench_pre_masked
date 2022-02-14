
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vchiq_state {int poll_needed; TYPE_1__* local; int trigger_event; int * poll_services; } ;
struct vchiq_service {int localport; int poll_flags; } ;
struct TYPE_2__ {int trigger; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;

inline void
FUNC_4(struct vchiq_state *VAR_0, struct vchiq_service *VAR_1,
      int VAR_2)
{
 u32 VAR_3;

 if (VAR_1) {
  do {
   VAR_3 = FUNC_1(&VAR_1->poll_flags);
  } while (FUNC_0(&VAR_1->poll_flags, VAR_3,
   VAR_3 | (1 << VAR_2)) != VAR_3);

  do {
   VAR_3 = FUNC_1(&VAR_0->poll_services[
    VAR_1->localport>>5]);
  } while (FUNC_0(
   &VAR_0->poll_services[VAR_1->localport>>5],
   VAR_3, VAR_3 | (1 << (VAR_1->localport & 0x1f)))
   != VAR_3);
 }

 VAR_0->poll_needed = 1;
 FUNC_3();


 FUNC_2(&VAR_0->trigger_event, &VAR_0->local->trigger);
}
