
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {scalar_t__ mapping; } ;
struct orangefs_write_range {int gid; int uid; void* len; void* pos; } ;
struct orangefs_inode_s {unsigned long bitlock; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct TYPE_2__ {int vm_file; } ;


 int VAR_0 ;
 struct orangefs_inode_s* FUNC_0 (struct inode*) ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 struct orangefs_write_range* FUNC_10 (int,int ) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct page*) ;
 void* FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*,unsigned long) ;
 scalar_t__ FUNC_19 (int ,int ) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;
 scalar_t__ FUNC_22 (unsigned long*,int,int ) ;

vm_fault_t FUNC_23(struct vm_fault *VAR_6)
{
 struct page *VAR_7 = VAR_6->page;
 struct inode *VAR_8 = FUNC_6(VAR_6->vma->vm_file);
 struct orangefs_inode_s *VAR_9 = FUNC_0(VAR_8);
 unsigned long *VAR_10 = &VAR_9->bitlock;
 vm_fault_t VAR_11;
 struct orangefs_write_range *VAR_12;

 FUNC_16(VAR_8->i_sb);

 if (FUNC_22(VAR_10, 1, VAR_2)) {
  VAR_11 = VAR_5;
  goto out;
 }

 FUNC_11(VAR_7);
 if (FUNC_1(VAR_7) && !FUNC_2(VAR_7)) {





  if (FUNC_12(VAR_7)) {
   VAR_11 = VAR_3|VAR_5;
   goto out;
  }
 }
 if (FUNC_2(VAR_7)) {
  VAR_12 = (struct orangefs_write_range *)FUNC_14(VAR_7);
  if (FUNC_19(VAR_12->uid, FUNC_5()) &&
      FUNC_9(VAR_12->gid, FUNC_4())) {
   VAR_12->pos = FUNC_13(VAR_7);
   VAR_12->len = VAR_1;
   goto okay;
  } else {
   if (FUNC_12(VAR_7)) {
    VAR_11 = VAR_3|VAR_5;
    goto out;
   }
  }
 }
 VAR_12 = FUNC_10(sizeof *VAR_12, VAR_0);
 if (!VAR_12) {
  VAR_11 = VAR_3|VAR_5;
  goto out;
 }
 VAR_12->pos = FUNC_13(VAR_7);
 VAR_12->len = VAR_1;
 VAR_12->uid = FUNC_5();
 VAR_12->gid = FUNC_4();
 FUNC_3(VAR_7);
 FUNC_18(VAR_7, (unsigned long)VAR_12);
 FUNC_8(VAR_7);
okay:

 FUNC_7(VAR_6->vma->vm_file);
 if (VAR_7->mapping != VAR_8->i_mapping) {
  FUNC_20(VAR_7);
  VAR_11 = VAR_3|VAR_4;
  goto out;
 }






 FUNC_17(VAR_7);
 FUNC_21(VAR_7);
 VAR_11 = VAR_3;
out:
 FUNC_15(VAR_8->i_sb);
 return VAR_11;
}
