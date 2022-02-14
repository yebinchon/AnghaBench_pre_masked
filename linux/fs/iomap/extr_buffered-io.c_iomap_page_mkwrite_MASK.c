
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {scalar_t__ mapping; int index; } ;
struct iomap_ops {int dummy; } ;
struct inode {scalar_t__ i_mapping; } ;
typedef unsigned long ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int vm_file; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 unsigned long FUNC_3 (struct inode*,int,unsigned long,int,struct iomap_ops const*,struct page*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct page*) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

vm_fault_t FUNC_10(struct vm_fault *VAR_7, const struct iomap_ops *VAR_8)
{
 struct page *VAR_9 = VAR_7->page;
 struct inode *VAR_10 = FUNC_1(VAR_7->vma->vm_file);
 unsigned long VAR_11;
 loff_t VAR_12, VAR_13;
 ssize_t VAR_14;

 FUNC_4(VAR_9);
 VAR_13 = FUNC_2(VAR_10);
 if ((VAR_9->mapping != VAR_10->i_mapping) ||
     (FUNC_6(VAR_9) > VAR_13)) {

  VAR_14 = -VAR_0;
  goto out_unlock;
 }


 if (((VAR_9->index + 1) << VAR_3) > VAR_13)
  VAR_11 = FUNC_5(VAR_13);
 else
  VAR_11 = VAR_4;

 VAR_12 = FUNC_6(VAR_9);
 while (VAR_11 > 0) {
  VAR_14 = FUNC_3(VAR_10, VAR_12, VAR_11,
    VAR_2 | VAR_1, VAR_8, VAR_9,
    VAR_6);
  if (FUNC_7(VAR_14 <= 0))
   goto out_unlock;
  VAR_12 += VAR_14;
  VAR_11 -= VAR_14;
 }

 FUNC_9(VAR_9);
 return VAR_5;
out_unlock:
 FUNC_8(VAR_9);
 return FUNC_0(VAR_14);
}
