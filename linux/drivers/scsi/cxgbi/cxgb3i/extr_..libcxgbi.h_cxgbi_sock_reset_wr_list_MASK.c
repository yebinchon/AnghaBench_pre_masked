
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int * wr_pending_tail; int wr_pending_head; } ;



__attribute__((used)) static inline void FUNC_0(struct cxgbi_sock *VAR_0)
{
 VAR_0->wr_pending_head = *(VAR_0->wr_pending_tail = ((void*)0));
}
