
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct v9fs_inode {int writeback_fid; } ;
struct page {scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {struct file* vm_file; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct v9fs_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ,char*,struct page*,unsigned long) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static vm_fault_t
FUNC_9(struct vm_fault *VAR_3)
{
 struct v9fs_inode *VAR_4;
 struct page *VAR_5 = VAR_3->page;
 struct file *VAR_6 = VAR_3->vma->vm_file;
 struct inode *VAR_7 = FUNC_2(VAR_6);


 FUNC_5(VAR_0, "page %p fid %lx\n",
   VAR_5, (unsigned long)VAR_6->private_data);


 FUNC_3(VAR_6);

 VAR_4 = FUNC_1(VAR_7);

 FUNC_7(VAR_7, VAR_5);
 FUNC_0(!VAR_4->writeback_fid);
 FUNC_4(VAR_5);
 if (VAR_5->mapping != VAR_7->i_mapping)
  goto out_unlock;
 FUNC_8(VAR_5);

 return VAR_1;
out_unlock:
 FUNC_6(VAR_5);
 return VAR_2;
}
