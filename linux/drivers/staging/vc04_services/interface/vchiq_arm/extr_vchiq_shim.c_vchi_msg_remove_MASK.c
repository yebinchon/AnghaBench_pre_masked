
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_header {int dummy; } ;
struct shim_service {int handle; int queue; } ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;


 int FUNC_0 (int ,struct vchiq_header*) ;
 struct vchiq_header* FUNC_1 (int *) ;

int32_t FUNC_2(VCHI_SERVICE_HANDLE_T VAR_0)
{
 struct shim_service *VAR_1 = (struct shim_service *)VAR_0;
 struct vchiq_header *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->queue);

 FUNC_0(VAR_1->handle, VAR_2);

 return 0;
}
