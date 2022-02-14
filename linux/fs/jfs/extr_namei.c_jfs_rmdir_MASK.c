
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_4__ {struct inode* ip; } ;
struct tblock {TYPE_1__ u; int xflag; } ;
struct inode {int i_size; int i_mtime; int i_ctime; int i_ino; int i_sb; } ;
struct dentry {int dummy; } ;
struct component_name {int dummy; } ;
typedef int ino_t ;
struct TYPE_5__ {int flag; } ;
struct TYPE_6__ {int commit_mutex; TYPE_2__ acl; TYPE_2__ ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 int FUNC_1 (int ,struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,struct inode*,struct component_name*,int *,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct component_name*) ;
 int FUNC_9 (struct component_name*,struct dentry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ,struct inode*) ;
 struct tblock* FUNC_18 (int ) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int,struct inode**,int ) ;
 int FUNC_22 (int ,struct inode*,TYPE_2__*,int *) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_8, struct dentry *VAR_9)
{
 int VAR_10;
 tid_t VAR_11;
 struct inode *VAR_12 = FUNC_4(VAR_9);
 ino_t VAR_13;
 struct component_name VAR_14;
 struct inode *VAR_15[2];
 struct tblock *VAR_16;

 FUNC_12("jfs_rmdir: dip:0x%p name:%pd", VAR_8, VAR_9);


 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto out;
 VAR_10 = FUNC_5(VAR_12);
 if (VAR_10)
  goto out;


 if (!FUNC_7(VAR_12)) {
  VAR_10 = -VAR_6;
  goto out;
 }

 if ((VAR_10 = FUNC_9(&VAR_14, VAR_9))) {
  goto out;
 }

 VAR_11 = FUNC_20(VAR_8->i_sb, 0);

 FUNC_15(&FUNC_0(VAR_8)->commit_mutex, VAR_2);
 FUNC_15(&FUNC_0(VAR_12)->commit_mutex, VAR_1);

 VAR_15[0] = VAR_8;
 VAR_15[1] = VAR_12;

 VAR_16 = FUNC_18(VAR_11);
 VAR_16->xflag |= VAR_0;
 VAR_16->u.ip = VAR_12;




 VAR_13 = VAR_12->i_ino;
 if ((VAR_10 = FUNC_6(VAR_11, VAR_8, &VAR_14, &VAR_13, VAR_7))) {
  FUNC_11("jfs_rmdir: dtDelete returned %d", VAR_10);
  if (VAR_10 == -VAR_5)
   FUNC_19(VAR_11, 1);
  FUNC_23(VAR_11);
  FUNC_16(&FUNC_0(VAR_12)->commit_mutex);
  FUNC_16(&FUNC_0(VAR_8)->commit_mutex);

  goto out2;
 }




 VAR_8->i_ctime = VAR_8->i_mtime = FUNC_3(VAR_8);
 FUNC_10(VAR_8);





 if (FUNC_0(VAR_12)->ea.flag & VAR_4) {

  FUNC_22(VAR_11, VAR_12, &FUNC_0(VAR_12)->ea, ((void*)0));
 }
 FUNC_0(VAR_12)->ea.flag = 0;


 if (FUNC_0(VAR_12)->acl.flag & VAR_4) {

  FUNC_22(VAR_11, VAR_12, &FUNC_0(VAR_12)->acl, ((void*)0));
 }
 FUNC_0(VAR_12)->acl.flag = 0;


 FUNC_2(VAR_12);
 FUNC_14(VAR_12);

 VAR_10 = FUNC_21(VAR_11, 2, &VAR_15[0], 0);

 FUNC_23(VAR_11);

 FUNC_16(&FUNC_0(VAR_12)->commit_mutex);
 FUNC_16(&FUNC_0(VAR_8)->commit_mutex);





 if (FUNC_17(VAR_3, VAR_8)) {
  if (VAR_8->i_size > 1)
   FUNC_13(VAR_8, 0);

  FUNC_1(VAR_3, VAR_8);
 }

      out2:
 FUNC_8(&VAR_14);

      out:
 FUNC_12("jfs_rmdir: rc:%d", VAR_10);
 return VAR_10;
}
