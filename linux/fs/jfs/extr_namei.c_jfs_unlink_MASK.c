
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_3__ {struct inode* ip; } ;
struct tblock {TYPE_1__ u; int xflag; } ;
struct inode {scalar_t__ i_nlink; int i_size; int i_sb; int i_mtime; int i_ctime; int i_ino; } ;
struct dentry {int dummy; } ;
struct component_name {int dummy; } ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_4__ {int commit_mutex; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct inode*) ;
 int FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ,struct inode*,struct component_name*,int *,int ) ;
 int FUNC_11 (struct component_name*) ;
 int FUNC_12 (struct component_name*,struct dentry*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct inode*,int ) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,struct inode*) ;
 scalar_t__ FUNC_22 (int ,struct inode*) ;
 struct tblock* FUNC_23 (int ) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int,struct inode**,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,struct inode*,int) ;

__attribute__((used)) static int FUNC_29(struct inode *VAR_9, struct dentry *VAR_10)
{
 int VAR_11;
 tid_t VAR_12;
 struct inode *VAR_13 = FUNC_8(VAR_10);
 ino_t VAR_14;
 struct component_name VAR_15;
 struct inode *VAR_16[2];
 struct tblock *VAR_17;
 s64 VAR_18 = 0;
 int VAR_19;

 FUNC_15("jfs_unlink: dip:0x%p name:%pd", VAR_9, VAR_10);


 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11)
  goto out;
 VAR_11 = FUNC_9(VAR_13);
 if (VAR_11)
  goto out;

 if ((VAR_11 = FUNC_12(&VAR_15, VAR_10)))
  goto out;

 FUNC_1(VAR_13, VAR_8);

 VAR_12 = FUNC_25(VAR_9->i_sb, 0);

 FUNC_19(&FUNC_3(VAR_9)->commit_mutex, VAR_2);
 FUNC_19(&FUNC_3(VAR_13)->commit_mutex, VAR_1);

 VAR_16[0] = VAR_9;
 VAR_16[1] = VAR_13;




 VAR_14 = VAR_13->i_ino;
 if ((VAR_11 = FUNC_10(VAR_12, VAR_9, &VAR_15, &VAR_14, VAR_7))) {
  FUNC_14("jfs_unlink: dtDelete returned %d", VAR_11);
  if (VAR_11 == -VAR_6)
   FUNC_24(VAR_12, 1);
  FUNC_27(VAR_12);
  FUNC_20(&FUNC_3(VAR_13)->commit_mutex);
  FUNC_20(&FUNC_3(VAR_9)->commit_mutex);
  FUNC_2(VAR_13);
  goto out1;
 }

 FUNC_0(VAR_13->i_nlink);

 VAR_13->i_ctime = VAR_9->i_ctime = VAR_9->i_mtime = FUNC_7(VAR_13);
 FUNC_17(VAR_9);


 FUNC_13(VAR_13);




 if (VAR_13->i_nlink == 0) {
  FUNC_4(!FUNC_22(VAR_3, VAR_13));

  if ((VAR_18 = FUNC_6(VAR_12, VAR_13)) < 0) {
   FUNC_24(VAR_12, 1);
   FUNC_27(VAR_12);
   FUNC_20(&FUNC_3(VAR_13)->commit_mutex);
   FUNC_20(&FUNC_3(VAR_9)->commit_mutex);
   FUNC_2(VAR_13);
   VAR_11 = VAR_18;
   goto out1;
  }
  VAR_17 = FUNC_23(VAR_12);
  VAR_17->xflag |= VAR_0;
  VAR_17->u.ip = VAR_13;
 }






 if (VAR_18)
  VAR_19 = VAR_4;
 else
  VAR_19 = 0;





 VAR_11 = FUNC_26(VAR_12, 2, &VAR_16[0], VAR_19);

 FUNC_27(VAR_12);

 FUNC_20(&FUNC_3(VAR_13)->commit_mutex);
 FUNC_20(&FUNC_3(VAR_9)->commit_mutex);

 while (VAR_18 && (VAR_11 == 0)) {
  VAR_12 = FUNC_25(VAR_9->i_sb, 0);
  FUNC_18(&FUNC_3(VAR_13)->commit_mutex);
  VAR_18 = FUNC_28(VAR_12, VAR_13, VAR_18);
  if (VAR_18 < 0) {
   FUNC_24(VAR_12, 1);
   VAR_11 = VAR_18;
  } else
   VAR_11 = FUNC_26(VAR_12, 2, &VAR_16[0], VAR_4);
  FUNC_27(VAR_12);
  FUNC_20(&FUNC_3(VAR_13)->commit_mutex);
 }

 if (VAR_13->i_nlink == 0)
  FUNC_21(VAR_3, VAR_13);

 FUNC_2(VAR_13);





 if (FUNC_22(VAR_5, VAR_9)) {
  if (VAR_9->i_size > 1)
   FUNC_16(VAR_9, 0);

  FUNC_5(VAR_5, VAR_9);
 }

      out1:
 FUNC_11(&VAR_15);
      out:
 FUNC_15("jfs_unlink: rc:%d", VAR_11);
 return VAR_11;
}
