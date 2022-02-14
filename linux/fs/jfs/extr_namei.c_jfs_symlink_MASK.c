
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_5__ {int ixpxd; } ;
struct tblock {TYPE_1__ u; int ino; int xflag; } ;
struct super_block {int dummy; } ;
struct metapage {int data; } ;
struct inode {int i_mode; int i_size; int i_mtime; int i_ctime; int i_ino; struct super_block* i_sb; TYPE_2__* i_mapping; int * i_op; int i_link; } ;
struct dentry {int d_name; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int s64 ;
typedef int ino_t ;
struct TYPE_8__ {int commit_mutex; int mode2; int i_inline; int ixpxd; } ;
struct TYPE_7__ {int bsize; int l2bsize; scalar_t__ nbperpage; } ;
struct TYPE_6__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_7 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct super_block*) ;
 int VAR_8 ;
 int FUNC_3 (struct inode*) ;
 int VAR_9 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ,struct inode*,struct component_name*,int *,struct btstack*) ;
 int FUNC_11 (struct inode*,struct component_name*,int *,struct btstack*,int ) ;
 int FUNC_12 (struct metapage*) ;
 int FUNC_13 (struct component_name*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct component_name*,struct dentry*) ;
 struct metapage* FUNC_16 (struct inode*,int,int ,int) ;
 struct inode* FUNC_17 (struct inode*,int) ;
 int FUNC_18 (struct inode*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (int ,struct inode*,struct inode*,int *) ;
 int VAR_12 ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (int ,char const*,int) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (int *,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (char const*) ;
 struct tblock* FUNC_27 (int ) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (struct super_block*,int ) ;
 int FUNC_30 (int ,int,struct inode**,int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ,struct inode*) ;
 int FUNC_33 (int ,struct inode*,int ,int ,int,int*,int ) ;
 int FUNC_34 (int ,struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_35(struct inode *VAR_13, struct dentry *VAR_14,
  const char *VAR_15)
{
 int VAR_16;
 tid_t VAR_17;
 ino_t VAR_18 = 0;
 struct component_name VAR_19;
 int VAR_20;
 struct btstack VAR_21;
 struct inode *VAR_22 = FUNC_6(VAR_14);
 s64 VAR_23 = 0;
 int VAR_24 = 0, VAR_25;
 s64 VAR_26;
 struct metapage *VAR_27;
 struct super_block *VAR_28;
 struct tblock *VAR_29;

 struct inode *VAR_30[2];

 FUNC_19("jfs_symlink: dip:0x%p name:%s", VAR_13, VAR_15);

 VAR_16 = FUNC_9(VAR_13);
 if (VAR_16)
  goto out1;

 VAR_20 = FUNC_26(VAR_15) + 1;






 if ((VAR_16 = FUNC_15(&VAR_19, VAR_14)))
  goto out1;





 VAR_22 = FUNC_17(VAR_13, VAR_9 | 0777);
 if (FUNC_0(VAR_22)) {
  VAR_16 = FUNC_3(VAR_22);
  goto out2;
 }

 VAR_17 = FUNC_29(VAR_13->i_sb, 0);

 FUNC_24(&FUNC_1(VAR_13)->commit_mutex, VAR_2);
 FUNC_24(&FUNC_1(VAR_22)->commit_mutex, VAR_1);

 VAR_16 = FUNC_20(VAR_17, VAR_22, VAR_13, &VAR_14->d_name);
 if (VAR_16)
  goto out3;

 VAR_29 = FUNC_27(VAR_17);
 VAR_29->xflag |= VAR_0;
 VAR_29->ino = VAR_22->i_ino;
 VAR_29->u.ixpxd = FUNC_1(VAR_22)->ixpxd;





 VAR_22->i_mode |= 0777;




 FUNC_32(VAR_17, VAR_22);





 if (VAR_20 <= VAR_5) {
  VAR_22->i_op = &VAR_11;

  VAR_22->i_link = FUNC_1(VAR_22)->i_inline;
  FUNC_22(VAR_22->i_link, VAR_15, VAR_20);
  VAR_22->i_size = VAR_20 - 1;





  if (VAR_20 > sizeof (FUNC_1(VAR_22)->i_inline))
   FUNC_1(VAR_22)->mode2 &= ~VAR_6;

  FUNC_19("jfs_symlink: fast symlink added  ssize:%d name:%s ",
    VAR_20, VAR_15);
 }



 else {
  FUNC_19("jfs_symlink: allocate extent ip:0x%p", VAR_22);

  VAR_22->i_op = &VAR_12;
  FUNC_18(VAR_22);
  VAR_22->i_mapping->a_ops = &VAR_10;






  VAR_28 = VAR_22->i_sb;
  VAR_24 = FUNC_2(VAR_28)->bsize - 1;
  VAR_25 = (VAR_20 + VAR_24) & ~VAR_24;
  VAR_26 = 0;
  VAR_23 = VAR_25 >> FUNC_2(VAR_28)->l2bsize;
  if ((VAR_16 = FUNC_33(VAR_17, VAR_22, 0, 0, VAR_23, &VAR_26, 0))) {
   FUNC_28(VAR_17, 0);
   goto out3;
  }
  VAR_22->i_size = VAR_20 - 1;
  while (VAR_20) {

   int VAR_31 = FUNC_23(VAR_20, VAR_8);

   VAR_27 = FUNC_16(VAR_22, VAR_26, VAR_8, 1);

   if (VAR_27 == ((void*)0)) {
    FUNC_34(VAR_17, VAR_22, 0, VAR_3);
    VAR_16 = -VAR_4;
    FUNC_28(VAR_17, 0);
    goto out3;
   }
   FUNC_22(VAR_27->data, VAR_15, VAR_31);
   FUNC_12(VAR_27);
   VAR_20 -= VAR_31;
   VAR_15 += VAR_31;
   VAR_26 += FUNC_2(VAR_28)->nbperpage;
  }
 }




 VAR_16 = FUNC_11(VAR_13, &VAR_19, &VAR_18, &VAR_21, VAR_7);
 if (VAR_16 == 0) {
  VAR_18 = VAR_22->i_ino;
  VAR_16 = FUNC_10(VAR_17, VAR_13, &VAR_19, &VAR_18, &VAR_21);
 }
 if (VAR_16) {
  if (VAR_23)
   FUNC_34(VAR_17, VAR_22, 0, VAR_3);
  FUNC_28(VAR_17, 0);

  goto out3;
 }

 FUNC_21(VAR_22);

 VAR_13->i_ctime = VAR_13->i_mtime = FUNC_5(VAR_13);
 FUNC_21(VAR_13);




 VAR_30[0] = VAR_13;
 VAR_30[1] = VAR_22;
 VAR_16 = FUNC_30(VAR_17, 2, &VAR_30[0], 0);

      out3:
 FUNC_31(VAR_17);
 FUNC_25(&FUNC_1(VAR_22)->commit_mutex);
 FUNC_25(&FUNC_1(VAR_13)->commit_mutex);
 if (VAR_16) {
  FUNC_14(VAR_22);
  FUNC_4(VAR_22);
  FUNC_8(VAR_22);
 } else {
  FUNC_7(VAR_14, VAR_22);
 }

      out2:
 FUNC_13(&VAR_19);

      out1:
 FUNC_19("jfs_symlink: rc:%d", VAR_16);
 return VAR_16;
}
