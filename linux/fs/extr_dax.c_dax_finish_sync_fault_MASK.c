
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; scalar_t__ pgoff; } ;
typedef int pfn_t ;
typedef int loff_t ;
typedef enum page_entry_size { ____Placeholder_page_entry_size } page_entry_size ;
struct TYPE_2__ {int vm_file; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_fault*,int ,unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int,int) ;

vm_fault_t FUNC_3(struct vm_fault *VAR_3,
  enum page_entry_size VAR_4, pfn_t VAR_5)
{
 int VAR_6;
 loff_t VAR_7 = ((loff_t)VAR_3->pgoff) << VAR_0;
 unsigned int VAR_8 = FUNC_1(VAR_4);
 size_t VAR_9 = VAR_1 << VAR_8;

 VAR_6 = FUNC_2(VAR_3->vma->vm_file, VAR_7, VAR_7 + VAR_9 - 1, 1);
 if (VAR_6)
  return VAR_2;
 return FUNC_0(VAR_3, VAR_5, VAR_8);
}
