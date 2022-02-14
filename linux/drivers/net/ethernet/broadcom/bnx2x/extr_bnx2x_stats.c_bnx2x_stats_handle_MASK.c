
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int stats_state; int stats_lock; int panic; } ;
typedef enum bnx2x_stats_state { ____Placeholder_bnx2x_stats_state } bnx2x_stats_state ;
typedef enum bnx2x_stats_event { ____Placeholder_bnx2x_stats_event } bnx2x_stats_event ;
struct TYPE_2__ {int next_state; int (* action ) (struct bnx2x*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct bnx2x *VAR_4, enum bnx2x_stats_event VAR_5)
{
 enum bnx2x_stats_state VAR_6 = VAR_4->stats_state;

 if (FUNC_6(VAR_4->panic))
  return;





 if (FUNC_3(&VAR_4->stats_lock)) {
  if (VAR_5 == VAR_2)
   return;

  FUNC_1(VAR_0,
     "Unlikely stats' lock contention [event %d]\n", VAR_5);
  if (FUNC_6(FUNC_2(&VAR_4->stats_lock, VAR_1 / 10))) {
   FUNC_0("Failed to take stats lock [event %d]\n",
      VAR_5);
   return;
  }
 }

 VAR_3[VAR_6][VAR_5].action(VAR_4);
 VAR_4->stats_state = VAR_3[VAR_6][VAR_5].next_state;

 FUNC_7(&VAR_4->stats_lock);

 if ((VAR_5 != VAR_2) || FUNC_4(VAR_4))
  FUNC_1(VAR_0, "state %d -> event %d -> state %d\n",
     VAR_6, VAR_5, VAR_4->stats_state);
}
