
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shim_service {int handle; } ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int32_t FUNC_2(const VCHI_SERVICE_HANDLE_T VAR_0)
{
 int32_t VAR_1 = -1;

 struct shim_service *VAR_2 = (struct shim_service *)VAR_0;
 if (VAR_2)
  VAR_1 = FUNC_0(FUNC_1(VAR_2->handle));
 return VAR_1;
}
