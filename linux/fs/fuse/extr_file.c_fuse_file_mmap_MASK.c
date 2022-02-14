
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct fuse_file {int open_flags; } ;
struct file {int f_mapping; struct fuse_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*) ;
 int VAR_5 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct fuse_file *VAR_8 = VAR_6->private_data;

 if (VAR_8->open_flags & VAR_1) {

  if (VAR_7->vm_flags & VAR_2)
   return -VAR_0;

  FUNC_3(VAR_6->f_mapping);

  return FUNC_2(VAR_6, VAR_7);
 }

 if ((VAR_7->vm_flags & VAR_4) && (VAR_7->vm_flags & VAR_3))
  FUNC_1(VAR_6);

 FUNC_0(VAR_6);
 VAR_7->vm_ops = &VAR_5;
 return 0;
}
