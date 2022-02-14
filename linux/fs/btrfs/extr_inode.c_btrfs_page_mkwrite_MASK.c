
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_fault_t ;
typedef int u64 ;
struct vm_fault {TYPE_1__* vma; struct page* page; } ;
struct page {scalar_t__ mapping; int index; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct extent_changeset {int dummy; } ;
struct btrfs_ordered_extent {int dummy; } ;
struct btrfs_fs_info {int generation; int sectorsize; } ;
typedef int loff_t ;
struct TYPE_8__ {TYPE_2__* root; int last_log_commit; int last_sub_trans; int last_trans; struct extent_io_tree io_tree; } ;
struct TYPE_7__ {int last_log_commit; int log_transid; } ;
struct TYPE_6__ {int vm_file; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct inode*,struct extent_changeset*,int,int,int) ;
 int FUNC_5 (struct inode*,struct extent_changeset**,int,int) ;
 struct btrfs_ordered_extent* FUNC_6 (TYPE_3__*,int,int) ;
 int FUNC_7 (struct btrfs_ordered_extent*) ;
 struct btrfs_fs_info* FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,int,int,int ,struct extent_state**) ;
 int FUNC_10 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int FUNC_11 (struct extent_io_tree*,int,int,int,int ,int ,struct extent_state**) ;
 int FUNC_12 (struct extent_changeset*) ;
 struct inode* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct inode*) ;
 char* FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct extent_io_tree*,int,int,struct extent_state**) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (char*,int ,int) ;
 unsigned long FUNC_22 (int) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (int,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct page*) ;
 int FUNC_28 (struct page*) ;
 int FUNC_29 (struct extent_io_tree*,int,int,struct extent_state**) ;
 int FUNC_30 (struct page*) ;
 scalar_t__ FUNC_31 (int) ;
 int FUNC_32 (struct page*) ;

vm_fault_t FUNC_33(struct vm_fault *VAR_8)
{
 struct page *VAR_9 = VAR_8->page;
 struct inode *VAR_10 = FUNC_13(VAR_8->vma->vm_file);
 struct btrfs_fs_info *VAR_11 = FUNC_8(VAR_10->i_sb);
 struct extent_io_tree *VAR_12 = &FUNC_0(VAR_10)->io_tree;
 struct btrfs_ordered_extent *VAR_13;
 struct extent_state *VAR_14 = ((void*)0);
 struct extent_changeset *VAR_15 = ((void*)0);
 char *VAR_16;
 unsigned long VAR_17;
 loff_t VAR_18;
 vm_fault_t VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 u64 VAR_22;
 u64 VAR_23;
 u64 VAR_24;
 u64 VAR_25;

 VAR_22 = VAR_4;

 FUNC_26(VAR_10->i_sb);
 VAR_23 = FUNC_23(VAR_9);
 VAR_24 = VAR_23 + VAR_4 - 1;
 VAR_25 = VAR_24;
 VAR_20 = FUNC_5(VAR_10, &VAR_15, VAR_23,
        VAR_22);
 if (!VAR_20) {
  VAR_20 = FUNC_14(VAR_8->vma->vm_file);
  VAR_21 = 1;
 }
 if (VAR_20) {
  VAR_19 = FUNC_31(VAR_20);
  if (VAR_21)
   goto out;
  goto out_noreserve;
 }

 VAR_19 = VAR_6;
again:
 FUNC_20(VAR_9);
 VAR_18 = FUNC_16(VAR_10);

 if ((VAR_9->mapping != VAR_10->i_mapping) ||
     (VAR_23 >= VAR_18)) {

  goto out_unlock;
 }
 FUNC_32(VAR_9);

 FUNC_19(VAR_12, VAR_23, VAR_24, &VAR_14);
 FUNC_28(VAR_9);





 VAR_13 = FUNC_6(FUNC_0(VAR_10), VAR_23,
   VAR_4);
 if (VAR_13) {
  FUNC_29(VAR_12, VAR_23, VAR_24,
         &VAR_14);
  FUNC_30(VAR_9);
  FUNC_10(VAR_10, VAR_13, 1);
  FUNC_7(VAR_13);
  goto again;
 }

 if (VAR_9->index == ((VAR_18 - 1) >> VAR_3)) {
  VAR_22 = FUNC_24(VAR_18 - VAR_23,
       VAR_11->sectorsize);
  if (VAR_22 < VAR_4) {
   VAR_25 = VAR_23 + VAR_22 - 1;
   FUNC_4(VAR_10, VAR_15,
     VAR_23, VAR_4 - VAR_22,
     1);
  }
 }
 FUNC_11(&FUNC_0(VAR_10)->io_tree, VAR_23, VAR_25,
     VAR_1 | VAR_2 |
     VAR_0, 0, 0, &VAR_14);

 VAR_20 = FUNC_9(VAR_10, VAR_23, VAR_25, 0,
     &VAR_14);
 if (VAR_20) {
  FUNC_29(VAR_12, VAR_23, VAR_24,
         &VAR_14);
  VAR_19 = VAR_7;
  goto out_unlock;
 }
 VAR_20 = 0;


 if (VAR_23 + VAR_4 > VAR_18)
  VAR_17 = FUNC_22(VAR_18);
 else
  VAR_17 = VAR_4;

 if (VAR_17 != VAR_4) {
  VAR_16 = FUNC_17(VAR_9);
  FUNC_21(VAR_16 + VAR_17, 0, VAR_4 - VAR_17);
  FUNC_15(VAR_9);
  FUNC_18(VAR_9);
 }
 FUNC_1(VAR_9);
 FUNC_27(VAR_9);
 FUNC_2(VAR_9);

 FUNC_0(VAR_10)->last_trans = VAR_11->generation;
 FUNC_0(VAR_10)->last_sub_trans = FUNC_0(VAR_10)->root->log_transid;
 FUNC_0(VAR_10)->last_log_commit = FUNC_0(VAR_10)->root->last_log_commit;

 FUNC_29(VAR_12, VAR_23, VAR_24, &VAR_14);

 if (!VAR_20) {
  FUNC_3(FUNC_0(VAR_10), VAR_4);
  FUNC_25(VAR_10->i_sb);
  FUNC_12(VAR_15);
  return VAR_5;
 }

out_unlock:
 FUNC_30(VAR_9);
out:
 FUNC_3(FUNC_0(VAR_10), VAR_4);
 FUNC_4(VAR_10, VAR_15, VAR_23,
         VAR_22, (VAR_19 != 0));
out_noreserve:
 FUNC_25(VAR_10->i_sb);
 FUNC_12(VAR_15);
 return VAR_19;
}
