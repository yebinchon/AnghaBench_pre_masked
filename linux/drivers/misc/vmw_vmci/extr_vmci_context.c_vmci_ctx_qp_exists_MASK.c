
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_ctx {int queue_pair_array; } ;


 int FUNC_0 (int ,struct vmci_handle) ;
 scalar_t__ FUNC_1 (struct vmci_handle) ;

bool FUNC_2(struct vmci_ctx *VAR_0, struct vmci_handle VAR_1)
{
 if (VAR_0 == ((void*)0) || FUNC_1(VAR_1))
  return 0;

 return FUNC_0(VAR_0->queue_pair_array, VAR_1);
}
