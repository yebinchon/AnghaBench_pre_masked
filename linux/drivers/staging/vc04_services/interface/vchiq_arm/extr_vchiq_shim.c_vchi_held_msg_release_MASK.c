
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_header {int dummy; } ;
struct vchi_held_msg {scalar_t__ message; scalar_t__ service; } ;
typedef int int32_t ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int FUNC_0 (int ,struct vchiq_header*) ;

int32_t FUNC_1(struct vchi_held_msg *VAR_0)
{
 FUNC_0((VCHIQ_SERVICE_HANDLE_T)(long)VAR_0->service,
         (struct vchiq_header *)VAR_0->message);

 return 0;
}
