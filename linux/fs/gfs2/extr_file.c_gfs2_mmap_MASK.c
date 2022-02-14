
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; } ;
struct gfs2_inode {int i_gl; int i_inode; } ;
struct gfs2_holder {int dummy; } ;
struct file {int f_flags; TYPE_1__* f_mapping; } ;
struct TYPE_2__ {int host; } ;


 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (int ,int ,int ,struct gfs2_holder*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_4->f_mapping->host);

 if (!(VAR_4->f_flags & VAR_2) &&
     !FUNC_1(&VAR_6->i_inode)) {
  struct gfs2_holder VAR_7;
  int VAR_8;

  VAR_8 = FUNC_4(VAR_6->i_gl, VAR_1, VAR_0,
        &VAR_7);
  if (VAR_8)
   return VAR_8;

  FUNC_3(&VAR_7);
  FUNC_2(VAR_4);
 }
 VAR_5->vm_ops = &VAR_3;

 return 0;
}
