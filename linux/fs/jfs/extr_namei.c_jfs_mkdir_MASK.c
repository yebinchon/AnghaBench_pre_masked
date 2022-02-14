
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
typedef int tid_t ;
struct TYPE_3__ {int ixpxd; } ;
struct tblock {TYPE_1__ u; int ino; int xflag; } ;
struct inode {int i_mtime; int i_ctime; int * i_fop; int * i_op; int i_ino; int i_sb; } ;
struct dentry {int d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
struct TYPE_4__ {int commit_mutex; int ixpxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_5 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,struct inode*,int ) ;
 int FUNC_9 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_10 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_11 (struct component_name*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct component_name*,struct dentry*) ;
 struct inode* FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int ,struct inode*,struct inode*) ;
 int FUNC_19 (int ,struct inode*,struct inode*,int *) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct inode*,int) ;
 struct tblock* FUNC_24 (int ) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,int,struct inode**,int ) ;
 int FUNC_28 (int ) ;

__attribute__((used)) static int FUNC_29(struct inode *VAR_8, struct dentry *VAR_9, umode_t VAR_10)
{
 int VAR_11 = 0;
 tid_t VAR_12;
 struct inode *VAR_13 = ((void*)0);
 ino_t VAR_14;
 struct component_name VAR_15;
 struct btstack VAR_16;
 struct inode *VAR_17[2];
 struct tblock *VAR_18;

 FUNC_17("jfs_mkdir: dip:0x%p name:%pd", VAR_8, VAR_9);

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11)
  goto out1;





 if ((VAR_11 = FUNC_13(&VAR_15, VAR_9)))
  goto out1;






 VAR_13 = FUNC_14(VAR_8, VAR_5 | VAR_10);
 if (FUNC_0(VAR_13)) {
  VAR_11 = FUNC_2(VAR_13);
  goto out2;
 }

 VAR_12 = FUNC_26(VAR_8->i_sb, 0);

 FUNC_21(&FUNC_1(VAR_8)->commit_mutex, VAR_2);
 FUNC_21(&FUNC_1(VAR_13)->commit_mutex, VAR_1);

 VAR_11 = FUNC_18(VAR_12, VAR_13, VAR_8);
 if (VAR_11)
  goto out3;

 VAR_11 = FUNC_19(VAR_12, VAR_13, VAR_8, &VAR_9->d_name);
 if (VAR_11) {
  FUNC_25(VAR_12, 0);
  goto out3;
 }

 if ((VAR_11 = FUNC_10(VAR_8, &VAR_15, &VAR_14, &VAR_16, VAR_4))) {
  FUNC_16("jfs_mkdir: dtSearch returned %d", VAR_11);
  FUNC_25(VAR_12, 0);
  goto out3;
 }

 VAR_18 = FUNC_24(VAR_12);
 VAR_18->xflag |= VAR_0;
 VAR_18->ino = VAR_13->i_ino;
 VAR_18->u.ixpxd = FUNC_1(VAR_13)->ixpxd;

 VAR_17[0] = VAR_8;
 VAR_17[1] = VAR_13;




 FUNC_8(VAR_12, VAR_13, VAR_8->i_ino);





 VAR_14 = VAR_13->i_ino;
 if ((VAR_11 = FUNC_9(VAR_12, VAR_8, &VAR_15, &VAR_14, &VAR_16))) {
  if (VAR_11 == -VAR_3) {
   FUNC_16("jfs_mkdir: dtInsert returned -EIO");
   FUNC_25(VAR_12, 1);
  } else
   FUNC_25(VAR_12, 0);
  goto out3;
 }

 FUNC_23(VAR_13, 2);
 VAR_13->i_op = &VAR_6;
 VAR_13->i_fop = &VAR_7;

 FUNC_20(VAR_13);


 FUNC_15(VAR_8);
 VAR_8->i_ctime = VAR_8->i_mtime = FUNC_4(VAR_8);
 FUNC_20(VAR_8);

 VAR_11 = FUNC_27(VAR_12, 2, &VAR_17[0], 0);

      out3:
 FUNC_28(VAR_12);
 FUNC_22(&FUNC_1(VAR_13)->commit_mutex);
 FUNC_22(&FUNC_1(VAR_8)->commit_mutex);
 if (VAR_11) {
  FUNC_12(VAR_13);
  FUNC_3(VAR_13);
  FUNC_6(VAR_13);
 } else {
  FUNC_5(VAR_9, VAR_13);
 }

      out2:
 FUNC_11(&VAR_15);


      out1:

 FUNC_17("jfs_mkdir: rc:%d", VAR_11);
 return VAR_11;
}
