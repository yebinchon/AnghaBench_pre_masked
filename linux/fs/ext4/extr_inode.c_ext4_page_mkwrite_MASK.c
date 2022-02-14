
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {struct page* page; struct vm_area_struct* vma; } ;
struct vm_area_struct {struct file* vm_file; } ;
struct page {unsigned long index; struct address_space* mapping; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned long loff_t ;
typedef int handle_t ;
typedef int get_block_t ;
struct TYPE_2__ {int i_mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct vm_area_struct*,struct vm_fault*,int *) ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int VAR_11 ;
 int FUNC_6 (struct inode*) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * FUNC_7 (struct inode*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct inode*,int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ,int*) ;
 scalar_t__ FUNC_14 (int *,int ,int ,unsigned long,int *,int ) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 (struct file*) ;
 int FUNC_17 (struct file*) ;
 unsigned long FUNC_18 (struct inode*) ;
 int FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 scalar_t__ FUNC_21 (struct page*) ;
 unsigned long FUNC_22 (struct page*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (struct page*) ;

vm_fault_t FUNC_30(struct vm_fault *VAR_15)
{
 struct vm_area_struct *VAR_16 = VAR_15->vma;
 struct page *VAR_17 = VAR_15->page;
 loff_t VAR_18;
 unsigned long VAR_19;
 int VAR_20;
 vm_fault_t VAR_21;
 struct file *VAR_22 = VAR_16->vm_file;
 struct inode *VAR_23 = FUNC_16(VAR_22);
 struct address_space *VAR_24 = VAR_23->i_mapping;
 handle_t *VAR_25;
 get_block_t *VAR_26;
 int VAR_27 = 0;

 if (FUNC_26(FUNC_2(VAR_23)))
  return VAR_9;

 FUNC_24(VAR_23->i_sb);
 FUNC_17(VAR_16->vm_file);

 FUNC_5(&FUNC_0(VAR_23)->i_mmap_sem);

 VAR_20 = FUNC_6(VAR_23);
 if (VAR_20)
  goto out_ret;


 if (FUNC_25(VAR_23->i_sb, VAR_0) &&
     !FUNC_12(VAR_23) &&
     !FUNC_9(VAR_23->i_sb)) {
  do {
   VAR_20 = FUNC_3(VAR_16, VAR_15,
         VAR_12);
  } while (VAR_20 == -VAR_1 &&
         FUNC_13(VAR_23->i_sb, &VAR_27));
  goto out_ret;
 }

 FUNC_19(VAR_17);
 VAR_18 = FUNC_18(VAR_23);

 if (VAR_17->mapping != VAR_24 || FUNC_22(VAR_17) > VAR_18) {
  FUNC_27(VAR_17);
  VAR_21 = VAR_8;
  goto out;
 }

 if (VAR_17->index == VAR_18 >> VAR_5)
  VAR_19 = VAR_18 & ~VAR_4;
 else
  VAR_19 = VAR_6;




 if (FUNC_21(VAR_17)) {
  if (!FUNC_14(((void*)0), FUNC_20(VAR_17),
         0, VAR_19, ((void*)0),
         VAR_11)) {

   FUNC_29(VAR_17);
   VAR_21 = VAR_7;
   goto out;
  }
 }
 FUNC_27(VAR_17);

 if (FUNC_11(VAR_23))
  VAR_26 = VAR_14;
 else
  VAR_26 = VAR_13;
retry_alloc:
 VAR_25 = FUNC_7(VAR_23, VAR_2,
        FUNC_15(VAR_23));
 if (FUNC_1(VAR_25)) {
  VAR_21 = VAR_9;
  goto out;
 }
 VAR_20 = FUNC_3(VAR_16, VAR_15, VAR_26);
 if (!VAR_20 && FUNC_12(VAR_23)) {
  if (FUNC_14(VAR_25, FUNC_20(VAR_17), 0,
     VAR_6, ((void*)0), VAR_10)) {
   FUNC_27(VAR_17);
   VAR_21 = VAR_9;
   FUNC_8(VAR_25);
   goto out;
  }
  FUNC_10(VAR_23, VAR_3);
 }
 FUNC_8(VAR_25);
 if (VAR_20 == -VAR_1 && FUNC_13(VAR_23->i_sb, &VAR_27))
  goto retry_alloc;
out_ret:
 VAR_21 = FUNC_4(VAR_20);
out:
 FUNC_28(&FUNC_0(VAR_23)->i_mmap_sem);
 FUNC_23(VAR_23->i_sb);
 return VAR_21;
}
