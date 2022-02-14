
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct lm_lockstruct {int ls_jid; int ls_recover_spin; int ls_recover_flags; void* ls_recover_mount; void* ls_recover_start; } ;
struct gfs2_sbd {int sd_control_work; struct lm_lockstruct sd_lockstruct; } ;
struct dlm_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct gfs2_sbd*,struct dlm_slot*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_3, struct dlm_slot *VAR_4, int VAR_5,
         int VAR_6, uint32_t VAR_7)
{
 struct gfs2_sbd *VAR_8 = VAR_3;
 struct lm_lockstruct *VAR_9 = &VAR_8->sd_lockstruct;


 FUNC_2(VAR_8, VAR_4, VAR_5);

 FUNC_4(&VAR_9->ls_recover_spin);
 VAR_9->ls_recover_start = VAR_7;

 if (!VAR_9->ls_recover_mount) {
  VAR_9->ls_recover_mount = VAR_7;
  VAR_9->ls_jid = VAR_6 - 1;
 }

 if (!FUNC_6(VAR_1, &VAR_9->ls_recover_flags))
  FUNC_1(VAR_2, &VAR_8->sd_control_work, 0);

 FUNC_0(VAR_0, &VAR_9->ls_recover_flags);
 FUNC_3();
 FUNC_7(&VAR_9->ls_recover_flags, VAR_0);
 FUNC_5(&VAR_9->ls_recover_spin);
}
