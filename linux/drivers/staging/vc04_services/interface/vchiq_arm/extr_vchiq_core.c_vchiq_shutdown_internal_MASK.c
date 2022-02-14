
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int dummy; } ;
struct vchiq_service {int handle; } ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_INSTANCE_T ;


 int VAR_0 ;
 struct vchiq_service* FUNC_0 (struct vchiq_state*,int ,int*) ;
 int FUNC_1 (struct vchiq_service*) ;
 int FUNC_2 (int ) ;

VCHIQ_STATUS_T
FUNC_3(struct vchiq_state *VAR_1, VCHIQ_INSTANCE_T VAR_2)
{
 struct vchiq_service *VAR_3;
 int VAR_4;


 VAR_4 = 0;
 while ((VAR_3 = FUNC_0(VAR_1, VAR_2,
  &VAR_4)) != ((void*)0)) {
  (void)FUNC_2(VAR_3->handle);
  FUNC_1(VAR_3);
 }

 return VAR_0;
}
