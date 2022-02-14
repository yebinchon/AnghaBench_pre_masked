
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int * dlm_reco_thread_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct dlm_ctxt *VAR_0)
{
 if (VAR_0->dlm_reco_thread_task) {
  FUNC_1(0, "waiting for dlm recovery thread to exit\n");
  FUNC_0(VAR_0->dlm_reco_thread_task);
  VAR_0->dlm_reco_thread_task = ((void*)0);
 }
}
