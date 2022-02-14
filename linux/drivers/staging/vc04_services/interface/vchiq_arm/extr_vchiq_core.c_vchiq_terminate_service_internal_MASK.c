
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int id; } ;
struct vchiq_service {int remoteport; int localport; struct vchiq_state* state; } ;


 int VAR_0 ;
 int FUNC_0 (struct vchiq_service*) ;
 int FUNC_1 (struct vchiq_state*,struct vchiq_service*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

void
FUNC_3(struct vchiq_service *VAR_2)
{
 struct vchiq_state *VAR_3 = VAR_2->state;

 FUNC_2(VAR_1, "%d: tsi - (%d<->%d)",
  VAR_3->id, VAR_2->localport, VAR_2->remoteport);

 FUNC_0(VAR_2);


 FUNC_1(VAR_3, VAR_2, VAR_0);
}
