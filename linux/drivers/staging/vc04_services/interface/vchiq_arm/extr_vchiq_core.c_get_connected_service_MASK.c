
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int unused_service; struct vchiq_service** services; } ;
struct vchiq_service {scalar_t__ srvstate; unsigned int remoteport; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vchiq_service*) ;

__attribute__((used)) static struct vchiq_service *
FUNC_1(struct vchiq_state *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->unused_service; VAR_3++) {
  struct vchiq_service *VAR_4 = VAR_1->services[VAR_3];

  if (VAR_4 && (VAR_4->srvstate == VAR_0)
   && (VAR_4->remoteport == VAR_2)) {
   FUNC_0(VAR_4);
   return VAR_4;
  }
 }
 return ((void*)0);
}
