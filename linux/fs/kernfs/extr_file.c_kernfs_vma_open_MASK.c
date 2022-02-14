
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct file* vm_file; } ;
struct kernfs_open_file {int kn; TYPE_1__* vm_ops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 int FUNC_0 (int ) ;
 struct kernfs_open_file* FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_4(struct vm_area_struct *VAR_0)
{
 struct file *VAR_1 = VAR_0->vm_file;
 struct kernfs_open_file *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->vm_ops)
  return;

 if (!FUNC_0(VAR_2->kn))
  return;

 if (VAR_2->vm_ops->open)
  VAR_2->vm_ops->open(VAR_0);

 FUNC_2(VAR_2->kn);
}
