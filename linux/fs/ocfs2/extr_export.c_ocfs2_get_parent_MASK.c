
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_sb; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct inode*,int *,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*,char*,int,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,int*) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct dentry*,int ,int ,unsigned long long) ;
 int FUNC_16 (struct dentry*) ;

__attribute__((used)) static struct dentry *FUNC_17(struct dentry *VAR_4)
{
 int VAR_5;
 u64 VAR_6;
 struct dentry *VAR_7;
 struct inode *VAR_8 = FUNC_3(VAR_4);
 int VAR_9;

 FUNC_15(VAR_4, VAR_4->d_name.len, VAR_4->d_name.name,
          (unsigned long long)FUNC_1(VAR_8)->ip_blkno);

 VAR_5 = FUNC_11(FUNC_2(VAR_8->i_sb), 1);
 if (VAR_5 < 0) {
  FUNC_5(VAR_3, "getting nfs sync lock(EX) failed %d\n", VAR_5);
  VAR_7 = FUNC_0(VAR_5);
  goto bail;
 }

 VAR_5 = FUNC_8(VAR_8, ((void*)0), 0);
 if (VAR_5 < 0) {
  if (VAR_5 != -VAR_1)
   FUNC_6(VAR_5);
  VAR_7 = FUNC_0(VAR_5);
  goto unlock_nfs_sync;
 }

 VAR_5 = FUNC_10(VAR_8, "..", 2, &VAR_6);
 if (VAR_5 < 0) {
  VAR_7 = FUNC_0(-VAR_1);
  goto bail_unlock;
 }

 VAR_5 = FUNC_13(FUNC_2(VAR_8->i_sb), VAR_6, &VAR_9);
 if (VAR_5 < 0) {
  if (VAR_5 == -VAR_0) {
   VAR_5 = -VAR_2;
  } else
   FUNC_5(VAR_3, "test inode bit failed %d\n", VAR_5);
  VAR_7 = FUNC_0(VAR_5);
  goto bail_unlock;
 }

 FUNC_14(VAR_5, VAR_9);
 if (!VAR_9) {
  VAR_5 = -VAR_2;
  VAR_7 = FUNC_0(VAR_5);
  goto bail_unlock;
 }

 VAR_7 = FUNC_4(FUNC_7(FUNC_2(VAR_8->i_sb), VAR_6, 0, 0));

bail_unlock:
 FUNC_9(VAR_8, 0);

unlock_nfs_sync:
 FUNC_12(FUNC_2(VAR_8->i_sb), 1);

bail:
 FUNC_16(VAR_7);

 return VAR_7;
}
