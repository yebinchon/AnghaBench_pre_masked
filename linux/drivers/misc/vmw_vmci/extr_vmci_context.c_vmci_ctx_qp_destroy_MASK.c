
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_handle {int dummy; } ;
struct vmci_ctx {int queue_pair_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmci_handle FUNC_0 (int ,struct vmci_handle) ;
 scalar_t__ FUNC_1 (struct vmci_handle) ;

int FUNC_2(struct vmci_ctx *VAR_3, struct vmci_handle VAR_4)
{
 struct vmci_handle VAR_5;

 if (VAR_3 == ((void*)0) || FUNC_1(VAR_4))
  return VAR_0;

 VAR_5 = FUNC_0(VAR_3->queue_pair_array, VAR_4);

 return FUNC_1(VAR_5) ?
  VAR_1 : VAR_2;
}
