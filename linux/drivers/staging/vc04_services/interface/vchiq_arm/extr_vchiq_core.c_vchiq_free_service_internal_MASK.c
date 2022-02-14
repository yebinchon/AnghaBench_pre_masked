
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {int id; } ;
struct vchiq_service {int srvstate; int remove_event; int localport; struct vchiq_state* state; } ;




 int VAR_0 ;



 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int FUNC_1 (struct vchiq_service*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct vchiq_service*,int ) ;

void
FUNC_5(struct vchiq_service *VAR_3)
{
 struct vchiq_state *VAR_4 = VAR_3->state;

 FUNC_3(VAR_2, "%d: fsi - (%d)",
  VAR_4->id, VAR_3->localport);

 switch (VAR_3->srvstate) {
 case 128:
 case 132:
 case 130:
 case 129:
 case 131:
  break;
 default:
  FUNC_2(VAR_2,
   "%d: fsi - (%d) in state %s",
   VAR_4->id, VAR_3->localport,
   VAR_1[VAR_3->srvstate]);
  return;
 }

 FUNC_4(VAR_3, VAR_0);

 FUNC_0(&VAR_3->remove_event);


 FUNC_1(VAR_3);
}
