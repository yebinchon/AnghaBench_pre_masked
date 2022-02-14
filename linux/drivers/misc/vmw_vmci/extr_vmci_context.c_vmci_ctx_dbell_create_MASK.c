
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmci_handle {int dummy; } ;
struct vmci_ctx {int lock; int doorbell_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vmci_ctx* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vmci_ctx*) ;
 int FUNC_4 (int *,struct vmci_handle) ;
 int FUNC_5 (int ,struct vmci_handle) ;
 scalar_t__ FUNC_6 (struct vmci_handle) ;

int FUNC_7(u32 VAR_4, struct vmci_handle VAR_5)
{
 struct vmci_ctx *VAR_6;
 int VAR_7;

 if (VAR_4 == VAR_3 || FUNC_6(VAR_5))
  return VAR_1;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 == ((void*)0))
  return VAR_2;

 FUNC_0(&VAR_6->lock);
 if (!FUNC_5(VAR_6->doorbell_array, VAR_5))
  VAR_7 = FUNC_4(&VAR_6->doorbell_array,
            VAR_5);
 else
  VAR_7 = VAR_0;

 FUNC_1(&VAR_6->lock);
 FUNC_3(VAR_6);

 return VAR_7;
}
