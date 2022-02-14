
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbp_session {scalar_t__ generation; int node_id; int reconnect_hold; int lock; scalar_t__ reconnect_expires; int guid; TYPE_1__* card; } ;
struct TYPE_2__ {scalar_t__ generation; int lock; int * local_node; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sbp_session *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_3(&VAR_1->lock);

 if (VAR_1->card) {
  FUNC_4(&VAR_1->card->lock);
  VAR_2 = (VAR_1->card->local_node != ((void*)0));
  FUNC_6(&VAR_1->card->lock);

  if (!VAR_2) {
   FUNC_0(VAR_1->card);
   VAR_1->card = ((void*)0);
  }
 }

 if (!VAR_2 || (VAR_1->generation != VAR_1->card->generation)) {
  FUNC_2("Waiting for reconnect from node: %016llx\n",
    VAR_1->guid);

  VAR_1->node_id = -1;
  VAR_1->reconnect_expires = FUNC_1() +
   ((VAR_1->reconnect_hold + 1) * VAR_0);
 }

 FUNC_5(&VAR_1->lock);
}
