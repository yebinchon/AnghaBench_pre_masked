
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {scalar_t__ mapping; scalar_t__ index; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct f2fs_sb_info {int dummy; } ;
struct dnode_of_data {int node_changed; int data_blkaddr; } ;
typedef int loff_t ;
struct TYPE_4__ {int i_mmap_sem; } ;
struct TYPE_3__ {int vm_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_10 ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct f2fs_sb_info*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct f2fs_sb_info*,int) ;
 int FUNC_9 (struct f2fs_sb_info*,int ) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct dnode_of_data*,scalar_t__) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 int FUNC_14 (struct dnode_of_data*) ;
 int FUNC_15 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_16 (struct f2fs_sb_info*,int ) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct page*,int ,int,int) ;
 struct inode* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct dnode_of_data*,struct inode*,int *,int *,int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct page*,int ) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 (struct page*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct page*,int,int ) ;

__attribute__((used)) static vm_fault_t FUNC_33(struct vm_fault *VAR_11)
{
 struct page *VAR_12 = VAR_11->page;
 struct inode *VAR_13 = FUNC_19(VAR_11->vma->vm_file);
 struct f2fs_sb_info *VAR_14 = FUNC_1(VAR_13);
 struct dnode_of_data VAR_15 = { .node_changed = 0 };
 int VAR_16;

 if (FUNC_29(FUNC_10(VAR_14))) {
  VAR_16 = -VAR_3;
  goto err;
 }

 if (!FUNC_13(VAR_14)) {
  VAR_16 = -VAR_4;
  goto err;
 }

 FUNC_25(VAR_13->i_sb);

 FUNC_9(VAR_14, FUNC_12(VAR_13));

 FUNC_20(VAR_11->vma->vm_file);
 FUNC_7(&FUNC_0(VAR_13)->i_mmap_sem);
 FUNC_22(VAR_12);
 if (FUNC_29(VAR_12->mapping != VAR_13->i_mapping ||
   FUNC_23(VAR_12) > FUNC_21(VAR_13) ||
   !FUNC_3(VAR_12))) {
  FUNC_30(VAR_12);
  VAR_16 = -VAR_2;
  goto out_sem;
 }


 FUNC_5(VAR_14, VAR_6, 1);
 FUNC_26(&VAR_15, VAR_13, ((void*)0), ((void*)0), 0);
 VAR_16 = FUNC_11(&VAR_15, VAR_12->index);
 FUNC_14(&VAR_15);
 FUNC_5(VAR_14, VAR_6, 0);
 if (VAR_16) {
  FUNC_30(VAR_12);
  goto out_sem;
 }


 FUNC_18(VAR_12, VAR_1, 0, 1);


 FUNC_17(VAR_13, VAR_15.data_blkaddr);




 if (FUNC_2(VAR_12))
  goto out_sem;


 if (((loff_t)(VAR_12->index + 1) << VAR_8) >
      FUNC_21(VAR_13)) {
  loff_t VAR_17;

  VAR_17 = FUNC_21(VAR_13) & ~VAR_7;
  FUNC_32(VAR_12, VAR_17, VAR_9);
 }
 FUNC_27(VAR_12);
 if (!FUNC_3(VAR_12))
  FUNC_4(VAR_12);

 FUNC_15(VAR_14, VAR_0, VAR_5);
 FUNC_16(VAR_14, VAR_10);

 FUNC_28(VAR_12, VAR_1);
out_sem:
 FUNC_31(&FUNC_0(VAR_13)->i_mmap_sem);

 FUNC_8(VAR_14, VAR_15.node_changed);

 FUNC_24(VAR_13->i_sb);
err:
 return FUNC_6(VAR_16);
}
