
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vmci_handle_arr {size_t size; size_t capacity; size_t max_capacity; struct vmci_handle* entries; } ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t) ;
 struct vmci_handle_arr* FUNC_1 (struct vmci_handle_arr*,size_t,int ) ;
 size_t FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct vmci_handle_arr **VAR_3,
     struct vmci_handle VAR_4)
{
 struct vmci_handle_arr *VAR_5 = *VAR_3;

 if (FUNC_3(VAR_5->size >= VAR_5->capacity)) {

  struct vmci_handle_arr *VAR_6;
  u32 VAR_7 = FUNC_2(VAR_5->max_capacity - VAR_5->capacity,
     VAR_5->capacity);
  size_t VAR_8 = FUNC_0(VAR_5->capacity +
             VAR_7);

  if (VAR_5->size >= VAR_5->max_capacity)
   return VAR_1;

  VAR_6 = FUNC_1(VAR_5, VAR_8, VAR_0);
  if (!VAR_6)
   return VAR_1;

  VAR_6->capacity += VAR_7;
  *VAR_3 = VAR_5 = VAR_6;
 }

 VAR_5->entries[VAR_5->size] = VAR_4;
 VAR_5->size++;

 return VAR_2;
}
