
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {int dummy; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct file {TYPE_3__* f_mapping; } ;
struct address_space {int dummy; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {TYPE_2__* host; } ;
struct TYPE_7__ {int i_ino; } ;
struct TYPE_6__ {struct file* vm_file; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,struct file*,int ,long long) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct file*,struct page*) ;
 int FUNC_5 (TYPE_4__*,struct page*) ;
 unsigned int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct file*,struct page*,int ,unsigned int) ;
 int VAR_6 ;
 struct address_space* FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static vm_fault_t FUNC_15(struct vm_fault *VAR_7)
{
 struct page *VAR_8 = VAR_7->page;
 struct file *VAR_9 = VAR_7->vma->vm_file;
 struct inode *VAR_10 = FUNC_2(VAR_9);
 unsigned VAR_11;
 vm_fault_t VAR_12 = VAR_4;
 struct address_space *VAR_13;

 FUNC_1(VAR_1, "NFS: vm_page_mkwrite(%pD2(%lu), offset %lld)\n",
  VAR_9, VAR_9->f_mapping->host->i_ino,
  (long long)FUNC_9(VAR_8));

 FUNC_11(VAR_10->i_sb);


 FUNC_5(FUNC_0(VAR_10), VAR_8);

 FUNC_13(&FUNC_0(VAR_10)->flags, VAR_0,
   VAR_6, VAR_2);

 FUNC_3(VAR_8);
 VAR_13 = FUNC_8(VAR_8);
 if (VAR_13 != VAR_10->i_mapping)
  goto out_unlock;

 FUNC_14(VAR_8);

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11 == 0)
  goto out_unlock;

 VAR_12 = VAR_3;
 if (FUNC_4(VAR_9, VAR_8) == 0 &&
     FUNC_7(VAR_9, VAR_8, 0, VAR_11) == 0)
  goto out;

 VAR_12 = VAR_5;
out_unlock:
 FUNC_12(VAR_8);
out:
 FUNC_10(VAR_10->i_sb);
 return VAR_12;
}
