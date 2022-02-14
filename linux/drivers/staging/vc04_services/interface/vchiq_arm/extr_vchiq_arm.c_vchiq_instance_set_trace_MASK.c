
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vchiq_service {int trace; } ;
typedef TYPE_1__* VCHIQ_INSTANCE_T ;
struct TYPE_4__ {int trace; int state; } ;


 struct vchiq_service* FUNC_0 (int ,TYPE_1__*,int*) ;
 int FUNC_1 (struct vchiq_service*) ;

void
FUNC_2(VCHIQ_INSTANCE_T VAR_0, int VAR_1)
{
 struct vchiq_service *VAR_2;
 int VAR_3;

 VAR_3 = 0;
 while ((VAR_2 = FUNC_0(VAR_0->state,
  VAR_0, &VAR_3)) != ((void*)0)) {
  VAR_2->trace = VAR_1;
  FUNC_1(VAR_2);
 }
 VAR_0->trace = (VAR_1 != 0);
}
