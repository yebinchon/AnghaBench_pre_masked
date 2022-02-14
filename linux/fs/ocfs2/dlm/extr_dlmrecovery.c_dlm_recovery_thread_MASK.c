
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int dlm_reco_thread_wq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ctxt*) ;
 scalar_t__ FUNC_1 (struct dlm_ctxt*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(void *VAR_2)
{
 int VAR_3;
 struct dlm_ctxt *VAR_4 = VAR_2;
 unsigned long VAR_5 = FUNC_5(VAR_0);

 FUNC_3(0, "dlm thread running for %s...\n", VAR_4->name);

 while (!FUNC_2()) {
  if (FUNC_1(VAR_4)) {
   VAR_3 = FUNC_0(VAR_4);
   if (VAR_3 == -VAR_1) {

    continue;
   }
   if (VAR_3 < 0)
    FUNC_4(VAR_3);
  }

  FUNC_6(VAR_4->dlm_reco_thread_wq,
       FUNC_2(),
       VAR_5);
 }

 FUNC_3(0, "quitting DLM recovery thread\n");
 return 0;
}
