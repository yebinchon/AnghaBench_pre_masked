
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shim_service {int callback_param; int callback; int queue; } ;
struct service_creation {int callback_param; int callback; } ;
typedef int VCHIQ_INSTANCE_T ;


 int VAR_0 ;
 int FUNC_0 (struct shim_service*) ;
 struct shim_service* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static struct shim_service *FUNC_3(VCHIQ_INSTANCE_T VAR_1,
 struct service_creation *VAR_2)
{
 struct shim_service *VAR_3 = FUNC_1(sizeof(struct shim_service), VAR_0);

 (void)VAR_1;

 if (VAR_3) {
  if (FUNC_2(&VAR_3->queue, 64)) {
   VAR_3->callback = VAR_2->callback;
   VAR_3->callback_param = VAR_2->callback_param;
  } else {
   FUNC_0(VAR_3);
   VAR_3 = ((void*)0);
  }
 }

 return VAR_3;
}
