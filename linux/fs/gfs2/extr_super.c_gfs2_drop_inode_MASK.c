
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; } ;
struct TYPE_3__ {struct gfs2_glock* gh_gl; } ;
struct gfs2_inode {TYPE_1__ i_iopen_gh; int i_flags; } ;
struct gfs2_glock {int gl_delete; int gl_flags; } ;
struct TYPE_4__ {int flags; } ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int FUNC_3 (struct gfs2_glock*) ;
 int FUNC_4 (struct gfs2_glock*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_5);

 if (!FUNC_7(VAR_0, &VAR_6->i_flags) &&
     VAR_5->i_nlink &&
     FUNC_5(&VAR_6->i_iopen_gh)) {
  struct gfs2_glock *VAR_7 = VAR_6->i_iopen_gh.gh_gl;
  if (FUNC_7(VAR_1, &VAR_7->gl_flags))
   FUNC_1(VAR_5);
 }






 if (!VAR_5->i_nlink &&
     FUNC_8(VAR_3->flags & VAR_2) &&
     FUNC_5(&VAR_6->i_iopen_gh)) {
  struct gfs2_glock *VAR_8 = VAR_6->i_iopen_gh.gh_gl;

  FUNC_3(VAR_8);
  if (FUNC_6(VAR_4, &VAR_8->gl_delete) == 0)
   FUNC_4(VAR_8);
  return 0;
 }

 return FUNC_2(VAR_5);
}
