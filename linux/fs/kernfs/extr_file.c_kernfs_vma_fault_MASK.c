
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; } ;
struct kernfs_open_file {int kn; TYPE_2__* vm_ops; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int (* fault ) (struct vm_fault*) ;} ;
struct TYPE_3__ {struct file* vm_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct kernfs_open_file* FUNC_1 (struct file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_fault*) ;

__attribute__((used)) static vm_fault_t FUNC_4(struct vm_fault *VAR_1)
{
 struct file *VAR_2 = VAR_1->vma->vm_file;
 struct kernfs_open_file *VAR_3 = FUNC_1(VAR_2);
 vm_fault_t VAR_4;

 if (!VAR_3->vm_ops)
  return VAR_0;

 if (!FUNC_0(VAR_3->kn))
  return VAR_0;

 VAR_4 = VAR_0;
 if (VAR_3->vm_ops->fault)
  VAR_4 = VAR_3->vm_ops->fault(VAR_1);

 FUNC_2(VAR_3->kn);
 return VAR_4;
}
