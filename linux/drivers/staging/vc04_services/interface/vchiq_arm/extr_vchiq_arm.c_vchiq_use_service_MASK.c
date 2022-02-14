
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_service {int state; } ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 struct vchiq_service* FUNC_0 (int ) ;
 int FUNC_1 (struct vchiq_service*) ;
 int FUNC_2 (int ,struct vchiq_service*,int ) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_SERVICE_HANDLE_T VAR_2)
{
 VCHIQ_STATUS_T VAR_3 = VAR_1;
 struct vchiq_service *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_4->state, VAR_4,
    VAR_0);
  FUNC_1(VAR_4);
 }
 return VAR_3;
}
