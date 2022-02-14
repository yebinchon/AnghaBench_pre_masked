
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {int i_mode; } ;
struct dentry {int d_parent; } ;
struct ceph_nfs_snapfh {scalar_t__ snapid; void* ino; scalar_t__ hash; void* parent_ino; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*,struct dentry*) ;
 void* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 struct dentry* FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_4, u32 *VAR_5, int *VAR_6,
         struct inode *VAR_7)
{
 static const int VAR_8 =
  sizeof(struct ceph_nfs_snapfh) >> 2;
 struct ceph_nfs_snapfh *VAR_9 = (void *)VAR_5;
 u64 VAR_10 = FUNC_3(VAR_4);
 int VAR_11;
 bool VAR_12 = 1;

 if (*VAR_6 < VAR_8) {
  *VAR_6 = VAR_8;
  VAR_11 = VAR_3;
  goto out;
 }

 VAR_11 = -VAR_1;
 if (VAR_10 != VAR_0) {
  struct inode *VAR_13;
  struct dentry *VAR_14 = FUNC_5(VAR_4);
  if (!VAR_14)
   goto out;

  FUNC_9();
  VAR_13 = FUNC_6(VAR_14->d_parent);
  if (FUNC_3(VAR_13) != VAR_0) {
   VAR_9->parent_ino = FUNC_2(VAR_13);
   VAR_9->hash = FUNC_1(VAR_13, VAR_14);
   VAR_12 = 0;
  }
  FUNC_10();
  FUNC_8(VAR_14);
 }

 if (VAR_12) {
  if (!FUNC_0(VAR_4->i_mode))
   goto out;
  VAR_9->parent_ino = VAR_9->ino;
  VAR_9->hash = 0;
 }
 VAR_9->ino = FUNC_2(VAR_4);
 VAR_9->snapid = VAR_10;

 *VAR_6 = VAR_8;
 VAR_11 = VAR_2;
out:
 FUNC_7("encode_snapfh %llx.%llx ret=%d\n", FUNC_4(VAR_4), VAR_11);
 return VAR_11;
}
