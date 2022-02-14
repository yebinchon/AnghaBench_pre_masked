
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmci_handle_arr {scalar_t__ size; scalar_t__ max_capacity; scalar_t__ capacity; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct vmci_handle_arr* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

struct vmci_handle_arr *FUNC_3(u32 VAR_2, u32 VAR_3)
{
 struct vmci_handle_arr *VAR_4;

 if (VAR_3 == 0 || VAR_2 > VAR_3)
  return ((void*)0);

 if (VAR_2 == 0)
  VAR_2 = FUNC_2((u32)VAR_1,
          VAR_3);

 VAR_4 = FUNC_1(FUNC_0(VAR_2), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->capacity = VAR_2;
 VAR_4->max_capacity = VAR_3;
 VAR_4->size = 0;

 return VAR_4;
}
