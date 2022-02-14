
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_vfs; } ;
struct gfs2_inode {int dummy; } ;
struct TYPE_3__ {int count; } ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {scalar_t__ gl_demote_state; scalar_t__ gl_state; TYPE_1__ gl_lockref; int gl_delete; TYPE_2__ gl_name; struct gfs2_inode* gl_object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gfs2_glock *VAR_3, bool VAR_4)
{
 struct gfs2_inode *VAR_5 = VAR_3->gl_object;
 struct gfs2_sbd *VAR_6 = VAR_3->gl_name.ln_sbd;

 if (!VAR_4 || FUNC_1(VAR_6->sd_vfs))
  return;

 if (VAR_3->gl_demote_state == VAR_1 &&
     VAR_3->gl_state == VAR_0 && VAR_5) {
  VAR_3->gl_lockref.count++;
  if (FUNC_0(VAR_2, &VAR_3->gl_delete) == 0)
   VAR_3->gl_lockref.count--;
 }
}
