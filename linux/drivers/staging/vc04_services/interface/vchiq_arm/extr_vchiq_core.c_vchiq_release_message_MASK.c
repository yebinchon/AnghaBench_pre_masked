
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiq_state {struct vchiq_shared_state* remote; } ;
struct vchiq_slot_info {int dummy; } ;
struct vchiq_shared_state {int slot_first; int slot_last; int slot_sync; } ;
struct vchiq_service {struct vchiq_state* state; } ;
struct vchiq_header {int msgid; } ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int FUNC_0 (struct vchiq_state*,void*) ;
 struct vchiq_slot_info* FUNC_1 (struct vchiq_state*,int) ;
 int VAR_0 ;
 struct vchiq_service* FUNC_2 (int ) ;
 int FUNC_3 (struct vchiq_state*,struct vchiq_header*) ;
 int FUNC_4 (struct vchiq_state*,struct vchiq_slot_info*,struct vchiq_header*,struct vchiq_service*) ;
 int FUNC_5 (struct vchiq_service*) ;

void
FUNC_6(VCHIQ_SERVICE_HANDLE_T VAR_1,
        struct vchiq_header *VAR_2)
{
 struct vchiq_service *VAR_3 = FUNC_2(VAR_1);
 struct vchiq_shared_state *VAR_4;
 struct vchiq_state *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return;

 VAR_5 = VAR_3->state;
 VAR_4 = VAR_5->remote;

 VAR_6 = FUNC_0(VAR_5, (void *)VAR_2);

 if ((VAR_6 >= VAR_4->slot_first) &&
  (VAR_6 <= VAR_4->slot_last)) {
  int VAR_7 = VAR_2->msgid;

  if (VAR_7 & VAR_0) {
   struct vchiq_slot_info *VAR_8 =
    FUNC_1(VAR_5, VAR_6);

   FUNC_4(VAR_5, VAR_8, VAR_2, VAR_3);
  }
 } else if (VAR_6 == VAR_4->slot_sync)
  FUNC_3(VAR_5, VAR_2);

 FUNC_5(VAR_3);
}
