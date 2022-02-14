
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadname ;
struct vchiq_state {int id; scalar_t__ conn_state; } ;
struct vchiq_arm_state {int first_connect; int susp_res_lock; int ka_thread; } ;
typedef int VCHIQ_CONNSTATE_T ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,char*) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,int,int ,int ) ;
 struct vchiq_arm_state* FUNC_6 (struct vchiq_state*) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct vchiq_state *VAR_3,
           VCHIQ_CONNSTATE_T VAR_4,
           VCHIQ_CONNSTATE_T VAR_5)
{
 struct vchiq_arm_state *VAR_6 = FUNC_6(VAR_3);

 FUNC_5(VAR_2, "%d: %s->%s", VAR_3->id,
  FUNC_1(VAR_4), FUNC_1(VAR_5));
 if (VAR_3->conn_state == VAR_0) {
  FUNC_8(&VAR_6->susp_res_lock);
  if (!VAR_6->first_connect) {
   char VAR_7[16];

   VAR_6->first_connect = 1;
   FUNC_9(&VAR_6->susp_res_lock);
   FUNC_3(VAR_7, sizeof(VAR_7), "vchiq-keep/%d",
    VAR_3->id);
   VAR_6->ka_thread = FUNC_2(
    &VAR_1,
    (void *)VAR_3,
    VAR_7);
   if (FUNC_0(VAR_6->ka_thread)) {
    FUNC_4(VAR_2,
     "vchiq: FATAL: couldn't create thread %s",
     VAR_7);
   } else {
    FUNC_7(VAR_6->ka_thread);
   }
  } else
   FUNC_9(&VAR_6->susp_res_lock);
 }
}
