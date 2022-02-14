
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_fault_t ;
struct vm_fault {TYPE_1__* vma; } ;
struct kernfs_open_file {int kn; TYPE_2__* vm_ops; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ (* page_mkwrite ) (struct vm_fault*) ;} ;
struct TYPE_3__ {struct file* vm_file; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 struct kernfs_open_file* FUNC_2 (struct file*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct vm_fault*) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct vm_fault *VAR_1)
{
 struct file *VAR_2 = VAR_1->vma->vm_file;
 struct kernfs_open_file *VAR_3 = FUNC_2(VAR_2);
 vm_fault_t VAR_4;

 if (!VAR_3->vm_ops)
  return VAR_0;

 if (!FUNC_1(VAR_3->kn))
  return VAR_0;

 VAR_4 = 0;
 if (VAR_3->vm_ops->page_mkwrite)
  VAR_4 = VAR_3->vm_ops->page_mkwrite(VAR_1);
 else
  FUNC_0(VAR_2);

 FUNC_3(VAR_3->kn);
 return VAR_4;
}
