
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {scalar_t__ mapping; int index; } ;
struct inode {scalar_t__ i_mapping; } ;
struct TYPE_2__ {int vm_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct vm_fault *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 struct inode *VAR_4 = FUNC_0(VAR_2->vma->vm_file);

 FUNC_1(VAR_2->vma->vm_file);
 FUNC_3(VAR_3);
 if (VAR_3->mapping != VAR_4->i_mapping) {
  FUNC_4(VAR_3);
  return VAR_1;
 }

 FUNC_2(VAR_4, VAR_3->index);
 return VAR_0;
}
