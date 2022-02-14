
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fourcc; } ;
struct vchiq_service {TYPE_1__ base; } ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 struct vchiq_service* FUNC_0 (int ) ;

int
FUNC_1(VCHIQ_SERVICE_HANDLE_T VAR_0)
{
 struct vchiq_service *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? VAR_1->base.fourcc : 0;
}
