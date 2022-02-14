
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; int i_ino; int i_mode; } ;
struct file {int f_flags; } ;
struct f2fs_sb_info {int * inode_lock; int * inode_list; } ;
struct f2fs_inode_info {int inmem_task; int * i_gc_rwsem; int inmem_ilist; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 size_t VAR_8 ;
 int FUNC_3 (struct inode*,int ) ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct f2fs_sb_info*,int ) ;
 int FUNC_8 (struct f2fs_sb_info*,char*,int ,scalar_t__) ;
 struct inode* FUNC_9 (struct file*) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct inode*,int ) ;
 int FUNC_16 (int *,int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (struct file*) ;
 int FUNC_19 (struct file*) ;
 int FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int FUNC_26(struct file *VAR_10)
{
 struct inode *VAR_11 = FUNC_9(VAR_10);
 struct f2fs_inode_info *VAR_12 = FUNC_0(VAR_11);
 struct f2fs_sb_info *VAR_13 = FUNC_1(VAR_11);
 int VAR_14;

 if (!FUNC_13(VAR_11))
  return -VAR_1;

 if (!FUNC_2(VAR_11->i_mode))
  return -VAR_2;

 if (VAR_10->f_flags & VAR_6)
  return -VAR_2;

 VAR_14 = FUNC_19(VAR_10);
 if (VAR_14)
  return VAR_14;

 FUNC_12(VAR_11);

 if (FUNC_6(VAR_11)) {
  if (FUNC_15(VAR_11, VAR_4))
   VAR_14 = -VAR_2;
  goto out;
 }

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14)
  goto out;

 FUNC_4(&FUNC_0(VAR_11)->i_gc_rwsem[VAR_8]);





 if (FUNC_11(VAR_11))
  FUNC_8(FUNC_1(VAR_11), "Unexpected flush for atomic writes: ino=%lu, npages=%u",
     VAR_11->i_ino, FUNC_11(VAR_11));
 VAR_14 = FUNC_10(VAR_11->i_mapping, 0, VAR_5);
 if (VAR_14) {
  FUNC_25(&FUNC_0(VAR_11)->i_gc_rwsem[VAR_8]);
  goto out;
 }

 FUNC_21(&VAR_13->inode_lock[VAR_0]);
 if (FUNC_17(&VAR_12->inmem_ilist))
  FUNC_16(&VAR_12->inmem_ilist, &VAR_13->inode_list[VAR_0]);
 FUNC_22(&VAR_13->inode_lock[VAR_0]);


 FUNC_20(VAR_11, VAR_3);
 FUNC_3(VAR_11, VAR_4);
 FUNC_25(&FUNC_0(VAR_11)->i_gc_rwsem[VAR_8]);

 FUNC_7(FUNC_1(VAR_11), VAR_7);
 FUNC_0(VAR_11)->inmem_task = VAR_9;
 FUNC_23(VAR_11);
 FUNC_24(VAR_11);
out:
 FUNC_14(VAR_11);
 FUNC_18(VAR_10);
 return VAR_14;
}
