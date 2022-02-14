
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_ops; struct file* vm_file; } ;
struct kernfs_ops {int (* mmap ) (struct kernfs_open_file*,struct vm_area_struct*) ;} ;
struct kernfs_open_file {int mmapped; int mutex; TYPE_2__* kn; TYPE_1__* vm_ops; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ close; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct kernfs_open_file* FUNC_1 (struct file*) ;
 struct kernfs_ops* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kernfs_open_file*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct kernfs_open_file *VAR_6 = FUNC_1(VAR_4);
 const struct kernfs_ops *VAR_7;
 int VAR_8;
 if (!(VAR_6->kn->flags & VAR_2))
  return -VAR_1;

 FUNC_4(&VAR_6->mutex);

 VAR_8 = -VAR_1;
 if (!FUNC_0(VAR_6->kn))
  goto out_unlock;

 VAR_7 = FUNC_2(VAR_6->kn);
 VAR_8 = VAR_7->mmap(VAR_6, VAR_5);
 if (VAR_8)
  goto out_put;






 if (VAR_5->vm_file != VAR_4)
  goto out_put;

 VAR_8 = -VAR_0;
 if (VAR_6->mmapped && VAR_6->vm_ops != VAR_5->vm_ops)
  goto out_put;





 VAR_8 = -VAR_0;
 if (VAR_5->vm_ops && VAR_5->vm_ops->close)
  goto out_put;

 VAR_8 = 0;
 VAR_6->mmapped = 1;
 VAR_6->vm_ops = VAR_5->vm_ops;
 VAR_5->vm_ops = &VAR_3;
out_put:
 FUNC_3(VAR_6->kn);
out_unlock:
 FUNC_5(&VAR_6->mutex);

 return VAR_8;
}
