
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmci_handle_arr {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct vmci_ctx {int lock; struct vmci_handle_arr* pending_doorbell_array; struct vmci_handle_arr* doorbell_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vmci_ctx* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vmci_ctx*) ;
 struct vmci_handle FUNC_4 (struct vmci_handle_arr*) ;
 int FUNC_5 (struct vmci_handle) ;

int FUNC_6(u32 VAR_4)
{
 struct vmci_ctx *VAR_5;
 struct vmci_handle VAR_6;

 if (VAR_4 == VAR_2)
  return VAR_0;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0))
  return VAR_1;

 FUNC_0(&VAR_5->lock);
 do {
  struct vmci_handle_arr *VAR_7 = VAR_5->doorbell_array;
  VAR_6 = FUNC_4(VAR_7);
 } while (!FUNC_5(VAR_6));
 do {
  struct vmci_handle_arr *VAR_8 = VAR_5->pending_doorbell_array;
  VAR_6 = FUNC_4(VAR_8);
 } while (!FUNC_5(VAR_6));
 FUNC_1(&VAR_5->lock);

 FUNC_3(VAR_5);

 return VAR_3;
}
