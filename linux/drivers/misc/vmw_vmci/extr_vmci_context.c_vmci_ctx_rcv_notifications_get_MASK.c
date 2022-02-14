
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_handle_arr {int dummy; } ;
struct vmci_ctx {int lock; struct vmci_handle_arr* pending_doorbell_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vmci_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct vmci_ctx*) ;
 struct vmci_handle_arr* FUNC_4 (int ,int ) ;

int FUNC_5(u32 VAR_4,
       struct vmci_handle_arr **VAR_5,
       struct vmci_handle_arr **VAR_6)
{
 struct vmci_ctx *VAR_7;
 int VAR_8 = VAR_3;

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 == ((void*)0))
  return VAR_0;

 FUNC_0(&VAR_7->lock);

 *VAR_5 = VAR_7->pending_doorbell_array;
 VAR_7->pending_doorbell_array =
  FUNC_4(0, VAR_2);
 if (!VAR_7->pending_doorbell_array) {
  VAR_7->pending_doorbell_array = *VAR_5;
  *VAR_5 = ((void*)0);
  VAR_8 = VAR_1;
 }
 *VAR_6 = ((void*)0);

 FUNC_1(&VAR_7->lock);
 FUNC_3(VAR_7);

 return VAR_8;
}
