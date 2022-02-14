
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int pgoff; int page; struct vm_area_struct* vma; } ;
struct vm_area_struct {TYPE_2__* vm_file; } ;
typedef int sigset_t ;
struct TYPE_6__ {int ip_blkno; } ;
struct TYPE_5__ {TYPE_1__* f_mapping; } ;
struct TYPE_4__ {int host; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_fault*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct vm_area_struct*,int ,int ) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct vm_fault *VAR_0)
{
 struct vm_area_struct *VAR_1 = VAR_0->vma;
 sigset_t VAR_2;
 vm_fault_t VAR_3;

 FUNC_2(&VAR_2);
 VAR_3 = FUNC_1(VAR_0);
 FUNC_3(&VAR_2);

 FUNC_4(FUNC_0(VAR_1->vm_file->f_mapping->host)->ip_blkno,
     VAR_1, VAR_0->page, VAR_0->pgoff);
 return VAR_3;
}
