
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbit_sock {int * wr_pending_head; int * wr_pending_tail; } ;



__attribute__((used)) static inline void FUNC_0(struct cxgbit_sock *VAR_0)
{
 VAR_0->wr_pending_tail = ((void*)0);
 VAR_0->wr_pending_head = ((void*)0);
}
