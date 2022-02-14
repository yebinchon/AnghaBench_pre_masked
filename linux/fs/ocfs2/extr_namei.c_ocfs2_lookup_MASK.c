
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocfs2_inode_info {scalar_t__ ip_blkno; int ip_lock; int ip_flags; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct ocfs2_inode_info* FUNC_3 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 struct dentry* FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*,struct inode*,scalar_t__) ;
 struct inode* FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (struct inode*,int *,int ,int ) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*,int ,scalar_t__,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct inode*,struct dentry*,scalar_t__,int ,unsigned long long,int ) ;
 int FUNC_16 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_17(struct inode *VAR_6, struct dentry *VAR_7,
       unsigned int VAR_8)
{
 int VAR_9;
 u64 VAR_10;
 struct inode *VAR_11 = ((void*)0);
 struct dentry *VAR_12;
 struct ocfs2_inode_info *VAR_13;

 FUNC_15(VAR_6, VAR_7, VAR_7->d_name.len,
      VAR_7->d_name.name,
      (unsigned long long)FUNC_3(VAR_6)->ip_blkno, 0);

 if (VAR_7->d_name.len > VAR_4) {
  VAR_12 = FUNC_0(-VAR_1);
  goto bail;
 }

 VAR_9 = FUNC_10(VAR_6, ((void*)0), 0, VAR_5);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_2)
   FUNC_6(VAR_9);
  VAR_12 = FUNC_0(VAR_9);
  goto bail;
 }

 VAR_9 = FUNC_12(VAR_6, VAR_7->d_name.name,
         VAR_7->d_name.len, &VAR_10);
 if (VAR_9 < 0)
  goto bail_add;

 VAR_11 = FUNC_9(FUNC_4(VAR_6->i_sb), VAR_10, 0, 0);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_0(-VAR_0);
  goto bail_unlock;
 }

 VAR_13 = FUNC_3(VAR_11);





 FUNC_13(&VAR_13->ip_lock);
 VAR_13->ip_flags &= ~VAR_3;
 FUNC_14(&VAR_13->ip_lock);

bail_add:
 VAR_12 = FUNC_5(VAR_11, VAR_7);

 if (VAR_11) {
  if (!FUNC_2(VAR_12))
   VAR_7 = VAR_12;

  VAR_9 = FUNC_8(VAR_7, VAR_11,
        FUNC_3(VAR_6)->ip_blkno);
  if (VAR_9) {
   FUNC_6(VAR_9);
   VAR_12 = FUNC_0(VAR_9);
   goto bail_unlock;
  }
 } else
  FUNC_7(VAR_7);

bail_unlock:




 FUNC_11(VAR_6, 0);

bail:

 FUNC_16(VAR_12);

 return VAR_12;
}
