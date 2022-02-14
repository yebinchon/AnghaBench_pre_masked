
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int channels; int lock; TYPE_1__* driver; struct bc_state* bcs; } ;
struct bc_state {int busy; int use_count; } ;
struct TYPE_2__ {int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

struct bc_state *FUNC_5(struct cardstate *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->lock, VAR_2);
 if (!FUNC_4(VAR_1->driver->owner)) {
  FUNC_0(VAR_0,
   "could not get module for allocating channel");
  FUNC_3(&VAR_1->lock, VAR_2);
  return ((void*)0);
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->channels; ++VAR_3)
  if (!VAR_1->bcs[VAR_3].use_count) {
   ++VAR_1->bcs[VAR_3].use_count;
   VAR_1->bcs[VAR_3].busy = 1;
   FUNC_3(&VAR_1->lock, VAR_2);
   FUNC_0(VAR_0, "allocated channel %d", VAR_3);
   return VAR_1->bcs + VAR_3;
  }
 FUNC_1(VAR_1->driver->owner);
 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_0, "no free channel");
 return ((void*)0);
}
