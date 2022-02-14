
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int tid_t ;
struct TYPE_2__ {int ixpxd; } ;
struct tblock {TYPE_1__ u; int ino; int xflag; } ;
struct jfs_inode_info {int commit_mutex; int dev; int ixpxd; } ;
struct inode {int i_mtime; int i_ctime; int i_mode; int * i_op; int i_ino; int i_sb; } ;
struct dentry {int d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_3 ;
 struct jfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_9 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_10 (struct component_name*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct component_name*,struct dentry*) ;
 struct inode* FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*,int ,int ) ;
 int VAR_4 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int ,struct inode*,struct inode*) ;
 int FUNC_17 (int ,struct inode*,struct inode*,int *) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 struct tblock* FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int,struct inode**,int ) ;
 int FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_5, struct dentry *VAR_6,
  umode_t VAR_7, dev_t VAR_8)
{
 struct jfs_inode_info *VAR_9;
 struct btstack VAR_10;
 struct component_name VAR_11;
 ino_t VAR_12;
 struct inode *VAR_13;
 struct inode *VAR_14[2];
 int VAR_15;
 tid_t VAR_16;
 struct tblock *VAR_17;

 FUNC_15("jfs_mknod: %pd", VAR_6);

 VAR_15 = FUNC_7(VAR_5);
 if (VAR_15)
  goto out;

 if ((VAR_15 = FUNC_12(&VAR_11, VAR_6)))
  goto out;

 VAR_13 = FUNC_13(VAR_5, VAR_7);
 if (FUNC_0(VAR_13)) {
  VAR_15 = FUNC_2(VAR_13);
  goto out1;
 }
 VAR_9 = FUNC_1(VAR_13);

 VAR_16 = FUNC_24(VAR_5->i_sb, 0);

 FUNC_19(&FUNC_1(VAR_5)->commit_mutex, VAR_2);
 FUNC_19(&FUNC_1(VAR_13)->commit_mutex, VAR_1);

 VAR_15 = FUNC_16(VAR_16, VAR_13, VAR_5);
 if (VAR_15)
  goto out3;

 VAR_15 = FUNC_17(VAR_16, VAR_13, VAR_5, &VAR_6->d_name);
 if (VAR_15) {
  FUNC_23(VAR_16, 0);
  goto out3;
 }

 if ((VAR_15 = FUNC_9(VAR_5, &VAR_11, &VAR_12, &VAR_10, VAR_3))) {
  FUNC_23(VAR_16, 0);
  goto out3;
 }

 VAR_17 = FUNC_22(VAR_16);
 VAR_17->xflag |= VAR_0;
 VAR_17->ino = VAR_13->i_ino;
 VAR_17->u.ixpxd = FUNC_1(VAR_13)->ixpxd;

 VAR_12 = VAR_13->i_ino;
 if ((VAR_15 = FUNC_8(VAR_16, VAR_5, &VAR_11, &VAR_12, &VAR_10))) {
  FUNC_23(VAR_16, 0);
  goto out3;
 }

 VAR_13->i_op = &VAR_4;
 VAR_9->dev = FUNC_21(VAR_8);
 FUNC_14(VAR_13, VAR_13->i_mode, VAR_8);

 FUNC_18(VAR_13);

 VAR_5->i_ctime = VAR_5->i_mtime = FUNC_4(VAR_5);

 FUNC_18(VAR_5);

 VAR_14[0] = VAR_5;
 VAR_14[1] = VAR_13;
 VAR_15 = FUNC_25(VAR_16, 2, VAR_14, 0);

      out3:
 FUNC_26(VAR_16);
 FUNC_20(&FUNC_1(VAR_13)->commit_mutex);
 FUNC_20(&FUNC_1(VAR_5)->commit_mutex);
 if (VAR_15) {
  FUNC_11(VAR_13);
  FUNC_3(VAR_13);
  FUNC_6(VAR_13);
 } else {
  FUNC_5(VAR_6, VAR_13);
 }

      out1:
 FUNC_10(&VAR_11);

      out:
 FUNC_15("jfs_mknod: returning %d", VAR_15);
 return VAR_15;
}
