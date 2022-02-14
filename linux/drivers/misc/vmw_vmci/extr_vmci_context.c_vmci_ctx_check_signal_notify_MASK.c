
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_ctx {int lock; scalar_t__ pending_datagrams; } ;


 int FUNC_0 (struct vmci_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vmci_ctx *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 if (VAR_0->pending_datagrams)
  FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock);
}
