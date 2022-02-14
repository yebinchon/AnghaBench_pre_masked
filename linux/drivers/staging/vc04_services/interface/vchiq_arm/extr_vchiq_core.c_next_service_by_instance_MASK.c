
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int unused_service; struct vchiq_service** services; } ;
struct vchiq_service {scalar_t__ srvstate; scalar_t__ instance; scalar_t__ ref_count; } ;
typedef scalar_t__ VCHIQ_INSTANCE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct vchiq_service *
FUNC_3(struct vchiq_state *VAR_2, VCHIQ_INSTANCE_T VAR_3,
    int *VAR_4)
{
 struct vchiq_service *VAR_5 = ((void*)0);
 int VAR_6 = *VAR_4;

 FUNC_1(&VAR_1);
 while (VAR_6 < VAR_2->unused_service) {
  struct vchiq_service *VAR_7 = VAR_2->services[VAR_6++];

  if (VAR_7 && (VAR_7->srvstate != VAR_0) &&
   (VAR_7->instance == VAR_3)) {
   VAR_5 = VAR_7;
   FUNC_0(VAR_5->ref_count == 0);
   VAR_5->ref_count++;
   break;
  }
 }
 FUNC_2(&VAR_1);

 *VAR_4 = VAR_6;

 return VAR_5;
}
