
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_freeze_work; int sd_vfs; int sd_freeze_state; int sd_flags; } ;
struct TYPE_2__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {scalar_t__ gl_state; TYPE_1__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_sbd*,char*,int) ;
 int FUNC_3 (struct gfs2_sbd*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct gfs2_sbd*,int *,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct gfs2_glock *VAR_6)
{
 int VAR_7 = 0;
 struct gfs2_sbd *VAR_8 = VAR_6->gl_name.ln_sbd;

 if (VAR_6->gl_state == VAR_2 &&
     FUNC_6(VAR_3, &VAR_8->sd_flags)) {
  FUNC_0(&VAR_8->sd_freeze_state, VAR_4);
  VAR_7 = FUNC_1(VAR_8->sd_vfs);
  if (VAR_7) {
   FUNC_2(VAR_8, "GFS2: couldn't freeze filesystem: %d\n",
    VAR_7);
   FUNC_3(VAR_8, 0);
  }
  FUNC_5(VAR_5, &VAR_8->sd_freeze_work);
  FUNC_4(VAR_8, ((void*)0), VAR_1 |
          VAR_0);
 }
}
