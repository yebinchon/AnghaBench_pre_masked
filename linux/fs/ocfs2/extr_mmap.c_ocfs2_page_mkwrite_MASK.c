
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sigset_t ;
struct TYPE_4__ {int ip_alloc_sem; } ;
struct TYPE_3__ {int vm_file; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,struct buffer_head*,struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 struct inode* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*,struct buffer_head**,int) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static vm_fault_t FUNC_14(struct vm_fault *VAR_0)
{
 struct page *VAR_1 = VAR_0->page;
 struct inode *VAR_2 = FUNC_4(VAR_0->vma->vm_file);
 struct buffer_head *VAR_3 = ((void*)0);
 sigset_t VAR_4;
 int VAR_5;
 vm_fault_t VAR_6;

 FUNC_11(VAR_2->i_sb);
 FUNC_6(&VAR_4);






 VAR_5 = FUNC_7(VAR_2, &VAR_3, 1);
 if (VAR_5 < 0) {
  FUNC_5(VAR_5);
  VAR_6 = FUNC_13(VAR_5);
  goto out;
 }






 FUNC_3(&FUNC_0(VAR_2)->ip_alloc_sem);

 VAR_6 = FUNC_1(VAR_0->vma->vm_file, VAR_3, VAR_1);

 FUNC_12(&FUNC_0(VAR_2)->ip_alloc_sem);

 FUNC_2(VAR_3);
 FUNC_8(VAR_2, 1);

out:
 FUNC_9(&VAR_4);
 FUNC_10(VAR_2->i_sb);
 return VAR_6;
}
