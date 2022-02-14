
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_service {int client_id; } ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 struct vchiq_service* FUNC_0 (int ) ;
 int FUNC_1 (struct vchiq_service*) ;

int
FUNC_2(VCHIQ_SERVICE_HANDLE_T VAR_0)
{
 struct vchiq_service *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = VAR_1 ? VAR_1->client_id : 0;
 if (VAR_1)
  FUNC_1(VAR_1);

 return VAR_2;
}
