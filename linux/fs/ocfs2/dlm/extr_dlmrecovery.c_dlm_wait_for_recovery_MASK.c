
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event; int dead_node; int new_master; int state; } ;
struct dlm_ctxt {TYPE_1__ reco; int dlm_reco_thread_task; int name; } ;


 scalar_t__ FUNC_0 (struct dlm_ctxt*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct dlm_ctxt *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_1(0, "%s: reco thread %d in recovery: "
       "state=%d, master=%u, dead=%u\n",
       VAR_0->name, FUNC_2(VAR_0->dlm_reco_thread_task),
       VAR_0->reco.state, VAR_0->reco.new_master,
       VAR_0->reco.dead_node);
 }
 FUNC_3(VAR_0->reco.event, !FUNC_0(VAR_0));
}
