
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_io_copy_callback_context {scalar_t__ element_offset; TYPE_1__* element; int elements_to_go; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ data; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,size_t) ;
 size_t FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(void *VAR_1, void *VAR_2,
        size_t VAR_3, size_t VAR_4)
{
 struct vchiq_io_copy_callback_context *VAR_5 = VAR_1;
 size_t VAR_6 = 0;
 size_t VAR_7;

 while (VAR_6 < VAR_4) {
  if (!VAR_5->elements_to_go)
   return VAR_6;

  if (!VAR_5->element->size) {
   VAR_5->elements_to_go--;
   VAR_5->element++;
   VAR_5->element_offset = 0;
   continue;
  }

  VAR_7 = FUNC_1(VAR_5->element->size - VAR_5->element_offset,
           VAR_4 - VAR_6);

  if (FUNC_0(VAR_2 + VAR_6,
      VAR_5->element->data + VAR_5->element_offset,
      VAR_7))
   return -VAR_0;

  VAR_5->element_offset += VAR_7;
  VAR_6 += VAR_7;

  if (VAR_5->element_offset == VAR_5->element->size) {
   VAR_5->elements_to_go--;
   VAR_5->element++;
   VAR_5->element_offset = 0;
  }
 }

 return VAR_4;
}
