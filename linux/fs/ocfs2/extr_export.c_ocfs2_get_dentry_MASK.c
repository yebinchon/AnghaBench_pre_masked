
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_handle {scalar_t__ ih_blkno; scalar_t__ ih_generation; } ;
struct inode {scalar_t__ i_generation; } ;
struct dentry {scalar_t__ i_generation; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 struct inode* FUNC_9 (struct ocfs2_super*,scalar_t__,int ,int ) ;
 struct inode* FUNC_10 (struct super_block*,scalar_t__) ;
 int FUNC_11 (struct ocfs2_super*,int) ;
 int FUNC_12 (struct ocfs2_super*,int) ;
 int FUNC_13 (struct ocfs2_super*,scalar_t__,int*) ;
 int FUNC_14 (struct super_block*,struct ocfs2_inode_handle*,unsigned long long) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_17 (unsigned long long,scalar_t__) ;
 int FUNC_18 (int,int) ;

__attribute__((used)) static struct dentry *FUNC_19(struct super_block *VAR_3,
  struct ocfs2_inode_handle *VAR_4)
{
 struct inode *VAR_5;
 struct ocfs2_super *VAR_6 = FUNC_3(VAR_3);
 u64 VAR_7 = VAR_4->ih_blkno;
 int VAR_8, VAR_9;
 struct dentry *VAR_10;

 FUNC_14(VAR_3, VAR_4, (unsigned long long)VAR_7);

 if (VAR_7 == 0) {
  VAR_10 = FUNC_1(-VAR_1);
  goto bail;
 }

 VAR_5 = FUNC_10(VAR_3, VAR_7);




 if (VAR_5)
  goto check_gen;





 VAR_8 = FUNC_11(VAR_6, 1);
 if (VAR_8 < 0) {
  FUNC_7(VAR_2, "getting nfs sync lock(EX) failed %d\n", VAR_8);
  goto check_err;
 }

 VAR_8 = FUNC_13(VAR_6, VAR_7, &VAR_9);
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_0) {





   VAR_8 = -VAR_1;
  } else
   FUNC_7(VAR_2, "test inode bit failed %d\n", VAR_8);
  goto unlock_nfs_sync;
 }

 FUNC_18(VAR_8, VAR_9);

 if (!VAR_9) {
  VAR_8 = -VAR_1;
  goto unlock_nfs_sync;
 }

 VAR_5 = FUNC_9(VAR_6, VAR_7, 0, 0);

unlock_nfs_sync:
 FUNC_12(VAR_6, 1);

check_err:
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_1) {
   FUNC_17((unsigned long long)VAR_7,
           VAR_4->ih_generation);
  }
  VAR_10 = FUNC_1(VAR_8);
  goto bail;
 }

 if (FUNC_2(VAR_5)) {
  FUNC_8(FUNC_4(VAR_5));
  VAR_10 = FUNC_0(VAR_5);
  goto bail;
 }

check_gen:
 if (VAR_4->ih_generation != VAR_5->i_generation) {
  FUNC_16((unsigned long long)VAR_7,
        VAR_4->ih_generation,
        VAR_5->i_generation);
  FUNC_6(VAR_5);
  VAR_10 = FUNC_1(-VAR_1);
  goto bail;
 }

 VAR_10 = FUNC_5(VAR_5);
 if (FUNC_2(VAR_10))
  FUNC_8(FUNC_4(VAR_10));

bail:
 FUNC_15(VAR_10);
 return VAR_10;
}
