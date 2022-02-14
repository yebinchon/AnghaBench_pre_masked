
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vchiq_service_params {int version_min; int version; struct shim_service* userdata; int callback; int fourcc; } ;
struct shim_service {int handle; } ;
struct TYPE_2__ {int version_min; int version; } ;
struct service_creation {TYPE_1__ version; int service_id; } ;
typedef int params ;
typedef int int32_t ;
typedef int * VCHI_SERVICE_HANDLE_T ;
typedef int VCHI_INSTANCE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_INSTANCE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vchiq_service_params*,int ,int) ;
 struct shim_service* FUNC_1 (int ,struct service_creation*) ;
 int FUNC_2 (struct shim_service*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,struct vchiq_service_params*,int *) ;

int32_t FUNC_4(VCHI_INSTANCE_T VAR_2,
 struct service_creation *VAR_3,
 VCHI_SERVICE_HANDLE_T *VAR_4)
{
 VCHIQ_INSTANCE_T VAR_5 = (VCHIQ_INSTANCE_T)VAR_2;
 struct shim_service *VAR_6 = FUNC_1(VAR_5, VAR_3);

 *VAR_4 = (VCHI_SERVICE_HANDLE_T)VAR_6;

 if (VAR_6) {
  struct vchiq_service_params VAR_7;
  VCHIQ_STATUS_T VAR_8;

  FUNC_0(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.fourcc = VAR_3->service_id;
  VAR_7.callback = VAR_1;
  VAR_7.userdata = VAR_6;
  VAR_7.version = VAR_3->version.version;
  VAR_7.version_min = VAR_3->version.version_min;

  VAR_8 = FUNC_3(VAR_5, &VAR_7,
   &VAR_6->handle);
  if (VAR_8 != VAR_0) {
   FUNC_2(VAR_6);
   VAR_6 = ((void*)0);
   *VAR_4 = ((void*)0);
  }
 }

 return (VAR_6 != ((void*)0)) ? 0 : -1;
}
