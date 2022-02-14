
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vchiq_service {scalar_t__ service_use_count; } ;
typedef TYPE_1__* VCHIQ_INSTANCE_T ;
struct TYPE_4__ {int state; } ;


 struct vchiq_service* FUNC_0 (int ,TYPE_1__*,int*) ;
 int FUNC_1 (struct vchiq_service*) ;

int
FUNC_2(VCHIQ_INSTANCE_T VAR_0)
{
 struct vchiq_service *VAR_1;
 int VAR_2 = 0, VAR_3;

 VAR_3 = 0;
 while ((VAR_1 = FUNC_0(VAR_0->state,
  VAR_0, &VAR_3)) != ((void*)0)) {
  VAR_2 += VAR_1->service_use_count;
  FUNC_1(VAR_1);
 }
 return VAR_2;
}
