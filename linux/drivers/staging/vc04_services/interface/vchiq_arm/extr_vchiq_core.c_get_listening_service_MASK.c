
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int unused_service; struct vchiq_service** services; } ;
struct vchiq_service {int public_fourcc; scalar_t__ srvstate; scalar_t__ remoteport; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vchiq_service*) ;

__attribute__((used)) static struct vchiq_service *
FUNC_2(struct vchiq_state *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5 == VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4->unused_service; VAR_6++) {
  struct vchiq_service *VAR_7 = VAR_4->services[VAR_6];

  if (VAR_7 &&
   (VAR_7->public_fourcc == VAR_5) &&
   ((VAR_7->srvstate == VAR_2) ||
   ((VAR_7->srvstate == VAR_3) &&
   (VAR_7->remoteport == VAR_1)))) {
   FUNC_1(VAR_7);
   return VAR_7;
  }
 }

 return ((void*)0);
}
