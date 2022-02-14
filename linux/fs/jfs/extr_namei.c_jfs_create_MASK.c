
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
typedef int tid_t ;
struct TYPE_4__ {int ixpxd; } ;
struct tblock {TYPE_1__ u; int ino; int xflag; } ;
struct inode {int i_mtime; int i_ctime; TYPE_2__* i_mapping; int * i_fop; int * i_op; int i_ino; int i_sb; } ;
struct dentry {int d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int ino_t ;
struct TYPE_6__ {int commit_mutex; int ixpxd; } ;
struct TYPE_5__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
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
 int VAR_5 ;
 int FUNC_14 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int ,struct inode*,struct inode*) ;
 int FUNC_17 (int ,struct inode*,struct inode*,int *) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 struct tblock* FUNC_21 (int ) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int,struct inode**,int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,struct inode*) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_8, struct dentry *VAR_9, umode_t VAR_10,
  bool VAR_11)
{
 int VAR_12 = 0;
 tid_t VAR_13;
 struct inode *VAR_14 = ((void*)0);
 ino_t VAR_15;
 struct component_name VAR_16;
 struct btstack VAR_17;
 struct inode *VAR_18[2];
 struct tblock *VAR_19;

 FUNC_15("jfs_create: dip:0x%p name:%pd", VAR_8, VAR_9);

 VAR_12 = FUNC_7(VAR_8);
 if (VAR_12)
  goto out1;





 if ((VAR_12 = FUNC_12(&VAR_16, VAR_9)))
  goto out1;






 VAR_14 = FUNC_13(VAR_8, VAR_10);
 if (FUNC_0(VAR_14)) {
  VAR_12 = FUNC_2(VAR_14);
  goto out2;
 }

 VAR_13 = FUNC_23(VAR_8->i_sb, 0);

 FUNC_19(&FUNC_1(VAR_8)->commit_mutex, VAR_2);
 FUNC_19(&FUNC_1(VAR_14)->commit_mutex, VAR_1);

 VAR_12 = FUNC_16(VAR_13, VAR_14, VAR_8);
 if (VAR_12)
  goto out3;

 VAR_12 = FUNC_17(VAR_13, VAR_14, VAR_8, &VAR_9->d_name);
 if (VAR_12) {
  FUNC_22(VAR_13, 0);
  goto out3;
 }

 if ((VAR_12 = FUNC_9(VAR_8, &VAR_16, &VAR_15, &VAR_17, VAR_4))) {
  FUNC_14("jfs_create: dtSearch returned %d", VAR_12);
  FUNC_22(VAR_13, 0);
  goto out3;
 }

 VAR_19 = FUNC_21(VAR_13);
 VAR_19->xflag |= VAR_0;
 VAR_19->ino = VAR_14->i_ino;
 VAR_19->u.ixpxd = FUNC_1(VAR_14)->ixpxd;

 VAR_18[0] = VAR_8;
 VAR_18[1] = VAR_14;




 FUNC_26(VAR_13, VAR_14);





 VAR_15 = VAR_14->i_ino;
 if ((VAR_12 = FUNC_8(VAR_13, VAR_8, &VAR_16, &VAR_15, &VAR_17))) {
  if (VAR_12 == -VAR_3) {
   FUNC_14("jfs_create: dtInsert returned -EIO");
   FUNC_22(VAR_13, 1);
  } else
   FUNC_22(VAR_13, 0);
  goto out3;
 }

 VAR_14->i_op = &VAR_6;
 VAR_14->i_fop = &VAR_7;
 VAR_14->i_mapping->a_ops = &VAR_5;

 FUNC_18(VAR_14);

 VAR_8->i_ctime = VAR_8->i_mtime = FUNC_4(VAR_8);

 FUNC_18(VAR_8);

 VAR_12 = FUNC_24(VAR_13, 2, &VAR_18[0], 0);

      out3:
 FUNC_25(VAR_13);
 FUNC_20(&FUNC_1(VAR_14)->commit_mutex);
 FUNC_20(&FUNC_1(VAR_8)->commit_mutex);
 if (VAR_12) {
  FUNC_11(VAR_14);
  FUNC_3(VAR_14);
  FUNC_6(VAR_14);
 } else {
  FUNC_5(VAR_9, VAR_14);
 }

      out2:
 FUNC_10(&VAR_16);

      out1:

 FUNC_15("jfs_create: rc:%d", VAR_12);
 return VAR_12;
}
