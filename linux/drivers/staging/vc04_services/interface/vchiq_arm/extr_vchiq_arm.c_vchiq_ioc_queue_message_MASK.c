
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_io_copy_callback_context {unsigned long elements_to_go; scalar_t__ element_offset; struct vchiq_element* element; } ;
struct vchiq_element {scalar_t__ size; int data; } ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct vchiq_io_copy_callback_context*,size_t) ;

__attribute__((used)) static VCHIQ_STATUS_T
FUNC_1(VCHIQ_SERVICE_HANDLE_T VAR_2,
   struct vchiq_element *VAR_3,
   unsigned long VAR_4)
{
 struct vchiq_io_copy_callback_context VAR_5;
 unsigned long VAR_6;
 size_t VAR_7 = 0;

 VAR_5.element = VAR_3;
 VAR_5.element_offset = 0;
 VAR_5.elements_to_go = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (!VAR_3[VAR_6].data && VAR_3[VAR_6].size != 0)
   return -VAR_0;

  VAR_7 += VAR_3[VAR_6].size;
 }

 return FUNC_0(VAR_2, VAR_1,
       &VAR_5, VAR_7);
}
