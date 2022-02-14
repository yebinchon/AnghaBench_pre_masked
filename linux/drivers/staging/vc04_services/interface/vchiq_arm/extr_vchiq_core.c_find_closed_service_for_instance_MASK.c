
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_service {scalar_t__ srvstate; scalar_t__ handle; scalar_t__ instance; scalar_t__ ref_count; } ;
typedef scalar_t__ VCHIQ_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct vchiq_service* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,scalar_t__) ;

struct vchiq_service *
FUNC_5(VCHIQ_INSTANCE_T VAR_4,
 VCHIQ_SERVICE_HANDLE_T VAR_5)
{
 struct vchiq_service *VAR_6;

 FUNC_2(&VAR_2);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 &&
  ((VAR_6->srvstate == VAR_1) ||
   (VAR_6->srvstate == VAR_0)) &&
  (VAR_6->handle == VAR_5) &&
  (VAR_6->instance == VAR_4)) {
  FUNC_0(VAR_6->ref_count == 0);
  VAR_6->ref_count++;
 } else
  VAR_6 = ((void*)0);
 FUNC_3(&VAR_2);

 if (!VAR_6)
  FUNC_4(VAR_3,
   "Invalid service handle 0x%x", VAR_5);

 return VAR_6;
}
