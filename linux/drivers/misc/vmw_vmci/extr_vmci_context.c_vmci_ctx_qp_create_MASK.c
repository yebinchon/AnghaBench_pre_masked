
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_ctx {int queue_pair_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct vmci_handle) ;
 int FUNC_1 (int ,struct vmci_handle) ;
 scalar_t__ FUNC_2 (struct vmci_handle) ;

int FUNC_3(struct vmci_ctx *VAR_2, struct vmci_handle VAR_3)
{
 int VAR_4;

 if (VAR_2 == ((void*)0) || FUNC_2(VAR_3))
  return VAR_1;

 if (!FUNC_1(VAR_2->queue_pair_array, VAR_3))
  VAR_4 = FUNC_0(
   &VAR_2->queue_pair_array, VAR_3);
 else
  VAR_4 = VAR_0;

 return VAR_4;
}
