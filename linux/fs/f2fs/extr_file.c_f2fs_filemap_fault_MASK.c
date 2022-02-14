
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_fault_t ;
struct vm_fault {int pgoff; TYPE_1__* vma; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int i_mmap_sem; } ;
struct TYPE_3__ {int vm_file; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 struct inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vm_fault*) ;
 int FUNC_4 (struct inode*,int ,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static vm_fault_t FUNC_6(struct vm_fault *VAR_0)
{
 struct inode *VAR_1 = FUNC_2(VAR_0->vma->vm_file);
 vm_fault_t VAR_2;

 FUNC_1(&FUNC_0(VAR_1)->i_mmap_sem);
 VAR_2 = FUNC_3(VAR_0);
 FUNC_5(&FUNC_0(VAR_1)->i_mmap_sem);

 FUNC_4(VAR_1, VAR_0->pgoff, (unsigned long)VAR_2);

 return VAR_2;
}
