
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_transition {int events; struct fscache_state const* transit_to; } ;
typedef struct fscache_state {struct fscache_transition* transitions; struct fscache_state const* (* work ) (struct fscache_object*,int) ;int name; } const fscache_state ;
struct fscache_object {unsigned long events; unsigned long event_mask; unsigned long oob_event_mask; struct fscache_state const* state; int debug_id; struct fscache_transition* oob_table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct fscache_state const* VAR_0 ;
 int VAR_1 ;
 struct fscache_state const* FUNC_2 (int ) ;
 int FUNC_3 (int,unsigned long*) ;
 int FUNC_4 (char*,int ,unsigned long,...) ;
 int FUNC_5 (char*,int ,int ,unsigned long) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,unsigned long*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct fscache_object*) ;
 int FUNC_10 () ;
 struct fscache_state const* FUNC_11 (struct fscache_object*,int) ;
 int FUNC_12 (struct fscache_object*,struct fscache_state const*,int,int,int) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct fscache_object *VAR_2)
{
 const struct fscache_transition *VAR_3;
 const struct fscache_state *VAR_4, *VAR_5;
 unsigned long VAR_6, VAR_7;
 bool VAR_8;
 int VAR_9 = -1;

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_5("{OBJ%x,%s,%lx}",
        VAR_2->debug_id, VAR_2->state->name, VAR_2->events);

 VAR_7 = VAR_2->event_mask;
restart:
 VAR_2->event_mask = 0;
 VAR_4 = VAR_2->state;
restart_masked:
 VAR_6 = VAR_2->events;


 if (VAR_6 & VAR_2->oob_event_mask) {
  FUNC_4("{OBJ%x} oob %lx",
         VAR_2->debug_id, VAR_6 & VAR_2->oob_event_mask);
  VAR_8 = 1;
  for (VAR_3 = VAR_2->oob_table; VAR_3->events; VAR_3++) {
   if (VAR_6 & VAR_3->events) {
    VAR_4 = VAR_3->transit_to;
    FUNC_0(VAR_4->work != ((void*)0));
    VAR_9 = FUNC_8(VAR_6 & VAR_3->events) - 1;
    FUNC_3(VAR_9, &VAR_2->oob_event_mask);
    FUNC_7(VAR_9, &VAR_2->events);
    goto execute_work_state;
   }
  }
 }
 VAR_8 = 0;


 if (!VAR_4->work) {
  if (VAR_6 & VAR_7) {
   for (VAR_3 = VAR_4->transitions; VAR_3->events; VAR_3++) {
    if (VAR_6 & VAR_3->events) {
     VAR_5 = VAR_3->transit_to;
     VAR_9 = FUNC_8(VAR_6 & VAR_3->events) - 1;
     FUNC_12(VAR_2, VAR_4,
         1, 0, VAR_9);
     FUNC_7(VAR_9, &VAR_2->events);
     FUNC_4("{OBJ%x} ev %d: %s -> %s",
            VAR_2->debug_id, VAR_9,
            VAR_4->name, VAR_5->name);
     VAR_2->state = VAR_4 = VAR_5;
     goto execute_work_state;
    }
   }


   FUNC_1();
  }

  goto unmask_events;
 }

execute_work_state:
 FUNC_4("{OBJ%x} exec %s", VAR_2->debug_id, VAR_4->name);

 FUNC_12(VAR_2, VAR_4, 0, VAR_8, VAR_9);
 VAR_5 = VAR_4->work(VAR_2, VAR_9);
 VAR_9 = -1;
 if (VAR_5 == VAR_0) {
  FUNC_4("{OBJ%x} %s notrans", VAR_2->debug_id, VAR_4->name);
  if (FUNC_13(VAR_4 == FUNC_2(VAR_1))) {
   FUNC_6(" [dead]");
   return;
  }
  FUNC_9(VAR_2);
  VAR_7 = VAR_2->oob_event_mask;
  goto unmask_events;
 }

 FUNC_4("{OBJ%x} %s -> %s",
        VAR_2->debug_id, VAR_4->name, VAR_5->name);
 VAR_2->state = VAR_4 = VAR_5;

 if (VAR_4->work) {
  if (FUNC_13(VAR_4 == FUNC_2(VAR_1))) {
   FUNC_6(" [dead]");
   return;
  }
  goto restart_masked;
 }


 VAR_7 = VAR_2->oob_event_mask;
 for (VAR_3 = VAR_4->transitions; VAR_3->events; VAR_3++)
  VAR_7 |= VAR_3->events;

unmask_events:
 VAR_2->event_mask = VAR_7;
 FUNC_10();
 VAR_6 = VAR_2->events;
 if (VAR_6 & VAR_7)
  goto restart;
 FUNC_6(" [msk %lx]", VAR_7);
}
