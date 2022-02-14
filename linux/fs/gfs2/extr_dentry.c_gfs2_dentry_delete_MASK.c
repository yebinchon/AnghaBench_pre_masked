
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* gh_gl; } ;
struct gfs2_inode {TYPE_2__ i_iopen_gh; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {int gl_flags; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry const*) ;
 scalar_t__ FUNC_2 (struct dentry const*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(const struct dentry *VAR_1)
{
 struct gfs2_inode *VAR_2;

 if (FUNC_2(VAR_1))
  return 0;

 VAR_2 = FUNC_0(FUNC_1(VAR_1));
 if (!FUNC_3(&VAR_2->i_iopen_gh))
  return 0;

 if (FUNC_4(VAR_0, &VAR_2->i_iopen_gh.gh_gl->gl_flags))
  return 1;

 return 0;
}
