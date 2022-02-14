
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {struct vchiq_service** services; } ;
struct vchiq_service {int dummy; } ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 struct vchiq_state** VAR_2 ;

__attribute__((used)) static inline struct vchiq_service *
FUNC_0(VCHIQ_SERVICE_HANDLE_T VAR_3)
{
 struct vchiq_state *VAR_4 = VAR_2[(VAR_3 / VAR_0) &
  (VAR_1 - 1)];
 if (!VAR_4)
  return ((void*)0);

 return VAR_4->services[VAR_3 & (VAR_0 - 1)];
}
