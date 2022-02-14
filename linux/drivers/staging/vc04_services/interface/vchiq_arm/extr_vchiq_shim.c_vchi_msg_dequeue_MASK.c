
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vchiq_header {scalar_t__ size; int data; } ;
struct shim_service {int handle; int queue; } ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (int ,struct vchiq_header*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct vchiq_header* FUNC_4 (int *) ;

int32_t FUNC_5(VCHI_SERVICE_HANDLE_T VAR_2,
 void *VAR_3,
 uint32_t VAR_4,
 uint32_t *VAR_5,
 VCHI_FLAGS_T VAR_6)
{
 struct shim_service *VAR_7 = (struct shim_service *)VAR_2;
 struct vchiq_header *VAR_8;

 FUNC_0((VAR_6 != VAR_1) &&
  (VAR_6 != VAR_0));

 if (VAR_6 == VAR_1)
  if (FUNC_3(&VAR_7->queue))
   return -1;

 VAR_8 = FUNC_4(&VAR_7->queue);

 FUNC_1(VAR_3, VAR_8->data, VAR_8->size < VAR_4 ?
  VAR_8->size : VAR_4);

 *VAR_5 = VAR_8->size;

 FUNC_2(VAR_7->handle, VAR_8);

 return 0;
}
