
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_lockstruct {unsigned int ls_jid; unsigned int ls_recover_size; unsigned int* ls_recover_result; int ls_recover_spin; int ls_recover_flags; } ;
struct gfs2_sbd {int sd_control_work; struct lm_lockstruct sd_lockstruct; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct gfs2_sbd*,char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct gfs2_sbd*,char*,unsigned int,char*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct gfs2_sbd *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8)
{
 struct lm_lockstruct *VAR_9 = &VAR_6->sd_lockstruct;

 if (FUNC_5(VAR_1, &VAR_9->ls_recover_flags))
  return;


 if (VAR_7 == VAR_9->ls_jid)
  return;

 FUNC_3(&VAR_9->ls_recover_spin);
 if (FUNC_5(VAR_0, &VAR_9->ls_recover_flags)) {
  FUNC_4(&VAR_9->ls_recover_spin);
  return;
 }
 if (VAR_9->ls_recover_size < VAR_7 + 1) {
  FUNC_0(VAR_6, "recovery_result jid %d short size %d\n",
         VAR_7, VAR_9->ls_recover_size);
  FUNC_4(&VAR_9->ls_recover_spin);
  return;
 }

 FUNC_1(VAR_6, "recover jid %d result %s\n", VAR_7,
  VAR_8 == VAR_4 ? "busy" : "success");

 VAR_9->ls_recover_result[VAR_7] = VAR_8;





 if (!FUNC_5(VAR_2, &VAR_9->ls_recover_flags))
  FUNC_2(VAR_5, &VAR_6->sd_control_work,
       VAR_8 == VAR_4 ? VAR_3 : 0);
 FUNC_4(&VAR_9->ls_recover_spin);
}
