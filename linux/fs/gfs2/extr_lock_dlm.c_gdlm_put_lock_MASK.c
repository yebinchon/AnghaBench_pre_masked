
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm_lockstruct {int ls_dlm; } ;
struct gfs2_sbd {int sd_flags; struct lm_lockstruct sd_lockstruct; } ;
struct TYPE_4__ {scalar_t__ ln_number; int ln_type; struct gfs2_sbd* ln_sbd; } ;
struct TYPE_3__ {scalar_t__ sb_lkid; scalar_t__ sb_lvbptr; } ;
struct gfs2_glock {scalar_t__ gl_state; TYPE_2__ gl_name; TYPE_1__ gl_lksb; int gl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int *,struct gfs2_glock*) ;
 int FUNC_2 (struct gfs2_sbd*,char*,int ,unsigned long long,int) ;
 int FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct gfs2_glock*,int ) ;
 int FUNC_5 (struct gfs2_glock*,int ) ;
 int FUNC_6 (struct gfs2_glock*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct gfs2_glock *VAR_5)
{
 struct gfs2_sbd *VAR_6 = VAR_5->gl_name.ln_sbd;
 struct lm_lockstruct *VAR_7 = &VAR_6->sd_lockstruct;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_5->gl_lksb.sb_lkid == 0) {
  FUNC_3(VAR_5);
  return;
 }

 FUNC_0(VAR_2, &VAR_5->gl_flags);
 FUNC_4(VAR_5, VAR_1);
 FUNC_5(VAR_5, VAR_1);
 FUNC_6(VAR_5);



 if (VAR_5->gl_lksb.sb_lvbptr && (VAR_5->gl_state == VAR_3))
  VAR_8 = 1;

 if (FUNC_7(VAR_4, &VAR_6->sd_flags) &&
     !VAR_8) {
  FUNC_3(VAR_5);
  return;
 }

 VAR_9 = FUNC_1(VAR_7->ls_dlm, VAR_5->gl_lksb.sb_lkid, VAR_0,
      ((void*)0), VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_6, "gdlm_unlock %x,%llx err=%d\n",
         VAR_5->gl_name.ln_type,
         (unsigned long long)VAR_5->gl_name.ln_number, VAR_9);
  return;
 }
}
