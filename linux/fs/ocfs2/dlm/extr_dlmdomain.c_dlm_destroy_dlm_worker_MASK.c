
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int * dlm_worker; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dlm_ctxt *VAR_0)
{
 if (VAR_0->dlm_worker) {
  FUNC_0(VAR_0->dlm_worker);
  VAR_0->dlm_worker = ((void*)0);
 }
}
