
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_wait; int sd_trunc_lock; int sd_trunc_list; } ;
struct gfs2_inode {int i_diskflags; int i_trunc_list; int i_inode; int i_flags; } ;
struct gfs2_holder {int gh_flags; scalar_t__ gh_state; struct gfs2_glock* gh_gl; } ;
struct TYPE_2__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {scalar_t__ gl_state; struct gfs2_inode* gl_object; TYPE_1__ gl_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gfs2_inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct gfs2_holder *VAR_5)
{
 struct gfs2_glock *VAR_6 = VAR_5->gh_gl;
 struct gfs2_sbd *VAR_7 = VAR_6->gl_name.ln_sbd;
 struct gfs2_inode *VAR_8 = VAR_6->gl_object;
 int VAR_9 = 0;

 if (!VAR_8 || (VAR_5->gh_flags & VAR_2))
  return 0;

 if (FUNC_6(VAR_1, &VAR_8->i_flags)) {
  VAR_9 = FUNC_0(VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_5->gh_state != VAR_3)
  FUNC_1(&VAR_8->i_inode);

 if ((VAR_8->i_diskflags & VAR_0) &&
     (VAR_6->gl_state == VAR_4) &&
     (VAR_5->gh_state == VAR_4)) {
  FUNC_4(&VAR_7->sd_trunc_lock);
  if (FUNC_3(&VAR_8->i_trunc_list))
   FUNC_2(&VAR_8->i_trunc_list, &VAR_7->sd_trunc_list);
  FUNC_5(&VAR_7->sd_trunc_lock);
  FUNC_7(&VAR_7->sd_quota_wait);
  return 1;
 }

 return VAR_9;
}
