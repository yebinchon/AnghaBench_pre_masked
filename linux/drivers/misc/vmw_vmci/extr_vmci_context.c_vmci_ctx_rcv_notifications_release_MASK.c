
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_handle_arr {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct vmci_ctx {int lock; struct vmci_handle_arr* pending_doorbell_array; } ;


 int FUNC_0 (struct vmci_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vmci_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct vmci_ctx*) ;
 int FUNC_5 (struct vmci_handle_arr**,struct vmci_handle) ;
 int FUNC_6 (struct vmci_handle_arr*) ;
 int FUNC_7 (struct vmci_handle_arr*,struct vmci_handle) ;
 struct vmci_handle FUNC_8 (struct vmci_handle_arr*) ;
 int FUNC_9 (struct vmci_handle) ;

void FUNC_10(u32 VAR_0,
     struct vmci_handle_arr *VAR_1,
     struct vmci_handle_arr *VAR_2,
     bool VAR_3)
{
 struct vmci_ctx *VAR_4 = FUNC_3(VAR_0);

 FUNC_1(&VAR_4->lock);
 if (!VAR_3) {
  struct vmci_handle VAR_5;
  VAR_5 = FUNC_8(
     VAR_4->pending_doorbell_array);
  while (!FUNC_9(VAR_5)) {
   if (!FUNC_7(VAR_1,
             VAR_5)) {
    FUNC_5(
      &VAR_1, VAR_5);
   }
   VAR_5 = FUNC_8(
     VAR_4->pending_doorbell_array);
  }
  FUNC_6(VAR_4->pending_doorbell_array);
  VAR_4->pending_doorbell_array = VAR_1;
  VAR_1 = ((void*)0);
 } else {
  FUNC_0(VAR_4);
 }
 FUNC_2(&VAR_4->lock);
 FUNC_4(VAR_4);

 if (VAR_1)
  FUNC_6(VAR_1);

 if (VAR_2)
  FUNC_6(VAR_2);
}
