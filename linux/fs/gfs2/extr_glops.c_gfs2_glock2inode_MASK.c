
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_flags; } ;
struct TYPE_2__ {int lock; } ;
struct gfs2_glock {TYPE_1__ gl_lockref; struct gfs2_inode* gl_object; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct gfs2_inode *FUNC_3(struct gfs2_glock *VAR_1)
{
 struct gfs2_inode *VAR_2;

 FUNC_1(&VAR_1->gl_lockref.lock);
 VAR_2 = VAR_1->gl_object;
 if (VAR_2)
  FUNC_0(VAR_0, &VAR_2->i_flags);
 FUNC_2(&VAR_1->gl_lockref.lock);
 return VAR_2;
}
