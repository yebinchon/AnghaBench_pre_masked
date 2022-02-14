
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int * cpl_abort_rpl; int * cpl_abort_req; int * cpl_close; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct cxgbi_sock *VAR_0)
{
 if (VAR_0->cpl_close) {
  FUNC_0(VAR_0->cpl_close);
  VAR_0->cpl_close = ((void*)0);
 }
 if (VAR_0->cpl_abort_req) {
  FUNC_0(VAR_0->cpl_abort_req);
  VAR_0->cpl_abort_req = ((void*)0);
 }
 if (VAR_0->cpl_abort_rpl) {
  FUNC_0(VAR_0->cpl_abort_rpl);
  VAR_0->cpl_abort_rpl = ((void*)0);
 }
}
