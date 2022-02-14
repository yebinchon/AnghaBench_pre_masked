
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vchiq_header {int size; void* data; } ;
struct vchi_held_msg {struct vchiq_header* message; struct opaque_vchi_service_t* service; } ;
struct shim_service {scalar_t__ handle; int queue; } ;
struct opaque_vchi_service_t {int dummy; } ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct vchiq_header* FUNC_2 (int *) ;

int32_t FUNC_3(VCHI_SERVICE_HANDLE_T VAR_2,
 void **VAR_3,
 uint32_t *VAR_4,
 VCHI_FLAGS_T VAR_5,
 struct vchi_held_msg *VAR_6)
{
 struct shim_service *VAR_7 = (struct shim_service *)VAR_2;
 struct vchiq_header *VAR_8;

 FUNC_0((VAR_5 != VAR_1) &&
  (VAR_5 != VAR_0));

 if (VAR_5 == VAR_1)
  if (FUNC_1(&VAR_7->queue))
   return -1;

 VAR_8 = FUNC_2(&VAR_7->queue);

 *VAR_3 = VAR_8->data;
 *VAR_4 = VAR_8->size;
 VAR_6->service =
  (struct opaque_vchi_service_t *)(long)VAR_7->handle;
 VAR_6->message = VAR_8;

 return 0;
}
