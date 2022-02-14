
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tid_t ;
struct tlock {int lock; } ;
struct TYPE_5__ {struct inode* ip; } ;
struct tblock {TYPE_1__ u; int xflag; } ;
struct metapage {int dummy; } ;
struct lv {int length; scalar_t__ offset; } ;
struct inode {scalar_t__ i_ino; scalar_t__ i_nlink; int i_size; int i_mode; int i_sb; void* i_mtime; void* i_ctime; } ;
struct dt_lock {scalar_t__ index; struct lv* lv; } ;
struct dentry {int dummy; } ;
struct component_name {int dummy; } ;
struct btstack {int dummy; } ;
typedef int s64 ;
typedef scalar_t__ ino_t ;
struct TYPE_6__ {int idotdot; } ;
struct TYPE_7__ {TYPE_2__ header; } ;
struct TYPE_8__ {int commit_mutex; int bxflag; TYPE_3__ i_dtroot; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 int VAR_13 ;
 TYPE_4__* FUNC_3 (struct inode*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct inode*) ;
 int FUNC_7 (int ,struct inode*) ;
 int FUNC_8 (scalar_t__) ;
 void* FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,struct inode*,struct component_name*,scalar_t__*,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ,struct inode*,struct component_name*,scalar_t__*,struct btstack*) ;
 int FUNC_16 (int ,struct inode*,struct component_name*,scalar_t__*,scalar_t__,int ) ;
 int FUNC_17 (struct inode*,struct component_name*,scalar_t__*,struct btstack*,int ) ;
 int FUNC_18 (struct component_name*) ;
 int FUNC_19 (struct component_name*,struct dentry*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (char*,int,...) ;
 int FUNC_24 (struct inode*,int ) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,struct inode*) ;
 scalar_t__ FUNC_30 (int ,struct inode*) ;
 struct tblock* FUNC_31 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_32 (int ,int) ;
 int FUNC_33 (int ,int ) ;
 int FUNC_34 (int ,int,struct inode**,int) ;
 int FUNC_35 (int ) ;
 struct tlock* FUNC_36 (int ,struct inode*,struct metapage*,int) ;
 int FUNC_37 (int ,struct inode*,int) ;

__attribute__((used)) static int FUNC_38(struct inode *VAR_22, struct dentry *VAR_23,
        struct inode *VAR_24, struct dentry *VAR_25,
        unsigned int VAR_26)
{
 struct btstack VAR_27;
 ino_t VAR_28;
 struct component_name VAR_29;
 struct inode *VAR_30;
 struct component_name VAR_31;
 struct inode *VAR_32;
 int VAR_33;
 tid_t VAR_34;
 struct tlock *VAR_35;
 struct dt_lock *VAR_36;
 struct lv *VAR_37;
 int VAR_38;
 struct inode *VAR_39[4];
 struct tblock *VAR_40;
 s64 VAR_41 = 0;
 int VAR_42;

 if (VAR_26 & ~VAR_18)
  return -VAR_8;

 FUNC_23("jfs_rename: %pd %pd", VAR_23, VAR_25);

 VAR_33 = FUNC_11(VAR_22);
 if (VAR_33)
  goto out1;
 VAR_33 = FUNC_11(VAR_24);
 if (VAR_33)
  goto out1;

 VAR_32 = FUNC_10(VAR_23);
 VAR_30 = FUNC_10(VAR_25);

 if ((VAR_33 = FUNC_19(&VAR_31, VAR_23)))
  goto out1;

 if ((VAR_33 = FUNC_19(&VAR_29, VAR_25)))
  goto out2;




 VAR_33 = FUNC_17(VAR_22, &VAR_31, &VAR_28, &VAR_27, VAR_14);
 if (VAR_33 || (VAR_28 != VAR_32->i_ino)) {
  VAR_33 = -VAR_10;
  goto out3;
 }




 VAR_33 = FUNC_17(VAR_24, &VAR_29, &VAR_28, &VAR_27, VAR_14);
 if (!VAR_33) {
  if ((!VAR_30) || (VAR_28 != VAR_30->i_ino)) {
   VAR_33 = -VAR_12;
   goto out3;
  }
 } else if (VAR_33 != -VAR_10)
  goto out3;
 else if (VAR_30) {

  VAR_33 = -VAR_12;
  goto out3;
 }

 if (FUNC_4(VAR_32->i_mode)) {
  if (VAR_30) {
   if (!FUNC_14(VAR_30)) {
    VAR_33 = -VAR_11;
    goto out3;
   }
  }
 } else if (VAR_30) {
  FUNC_1(VAR_30, VAR_17);

  VAR_33 = FUNC_11(VAR_30);
  if (VAR_33)
   goto out_unlock;
 }




 VAR_34 = FUNC_33(VAR_24->i_sb, 0);







 FUNC_27(&FUNC_3(VAR_24)->commit_mutex, VAR_2);
 FUNC_27(&FUNC_3(VAR_32)->commit_mutex, VAR_1);
 if (VAR_22 != VAR_24)
  FUNC_27(&FUNC_3(VAR_22)->commit_mutex,
      VAR_3);

 if (VAR_30) {
  FUNC_27(&FUNC_3(VAR_30)->commit_mutex,
      VAR_4);



  VAR_28 = VAR_30->i_ino;
  VAR_33 = FUNC_16(VAR_34, VAR_24, &VAR_29, &VAR_28,
         VAR_32->i_ino, VAR_16);
  if (VAR_33)
   goto out_tx;
  FUNC_12(VAR_30);
  if (FUNC_4(VAR_30->i_mode)) {
   FUNC_12(VAR_30);
   if (VAR_30->i_nlink) {
    FUNC_28(&FUNC_3(VAR_30)->commit_mutex);
    if (VAR_22 != VAR_24)
     FUNC_28(&FUNC_3(VAR_22)->commit_mutex);
    FUNC_28(&FUNC_3(VAR_32)->commit_mutex);
    FUNC_28(&FUNC_3(VAR_24)->commit_mutex);
    if (!FUNC_4(VAR_32->i_mode) && VAR_30)
     FUNC_2(VAR_30);
    FUNC_22(VAR_30->i_sb,
       "new_ip->i_nlink != 0\n");
    return -VAR_9;
   }
   VAR_40 = FUNC_31(VAR_34);
   VAR_40->xflag |= VAR_0;
   VAR_40->u.ip = VAR_30;
  } else if (VAR_30->i_nlink == 0) {
   FUNC_5(!FUNC_30(VAR_5, VAR_30));

   if ((VAR_41 = FUNC_7(VAR_34, VAR_30)) < 0) {
    FUNC_32(VAR_34, 1);
    VAR_33 = VAR_41;
    goto out_tx;
   }
   VAR_40 = FUNC_31(VAR_34);
   VAR_40->xflag |= VAR_0;
   VAR_40->u.ip = VAR_30;
  } else {
   VAR_30->i_ctime = FUNC_9(VAR_30);
   FUNC_25(VAR_30);
  }
 } else {



  VAR_33 = FUNC_17(VAR_24, &VAR_29, &VAR_28, &VAR_27,
         VAR_13);
  if (VAR_33) {
   FUNC_21("jfs_rename didn't expect dtSearch to fail w/rc = %d",
    VAR_33);
   goto out_tx;
  }

  VAR_28 = VAR_32->i_ino;
  VAR_33 = FUNC_15(VAR_34, VAR_24, &VAR_29, &VAR_28, &VAR_27);
  if (VAR_33) {
   if (VAR_33 == -VAR_9)
    FUNC_21("jfs_rename: dtInsert returned -EIO");
   goto out_tx;
  }
  if (FUNC_4(VAR_32->i_mode))
   FUNC_20(VAR_24);
 }




 VAR_28 = VAR_32->i_ino;
 VAR_33 = FUNC_13(VAR_34, VAR_22, &VAR_31, &VAR_28, VAR_15);
 if (VAR_33) {
  FUNC_21("jfs_rename did not expect dtDelete to return rc = %d",
   VAR_33);
  FUNC_32(VAR_34, 1);
  goto out_tx;
 }
 if (FUNC_4(VAR_32->i_mode)) {
  FUNC_12(VAR_22);
  if (VAR_22 != VAR_24) {




   FUNC_3(VAR_32)->i_dtroot.header.idotdot =
    FUNC_8(VAR_24->i_ino);


   VAR_35 = FUNC_36(VAR_34, VAR_32,
        (struct metapage *) &FUNC_3(VAR_32)->bxflag,
          VAR_20 | VAR_19 | VAR_21);
   VAR_36 = (struct dt_lock *) & VAR_35->lock;
   FUNC_0(VAR_36->index == 0);
   VAR_37 = & VAR_36->lv[0];
   VAR_37->offset = 0;
   VAR_37->length = 1;
   VAR_36->index++;
  }
 }




 VAR_32->i_ctime = FUNC_9(VAR_32);
 FUNC_25(VAR_32);

 VAR_24->i_ctime = VAR_24->i_mtime = FUNC_9(VAR_24);
 FUNC_25(VAR_24);


 VAR_38 = 0;
 VAR_39[VAR_38++] = VAR_32;
 if (VAR_30)
  VAR_39[VAR_38++] = VAR_30;
 VAR_39[VAR_38++] = VAR_22;

 if (VAR_22 != VAR_24) {
  VAR_39[VAR_38++] = VAR_24;
  VAR_22->i_ctime = VAR_22->i_mtime = FUNC_9(VAR_22);
  FUNC_25(VAR_22);
 }






 if (VAR_41)
  VAR_42 = VAR_6;
 else
  VAR_42 = 0;

 VAR_33 = FUNC_34(VAR_34, VAR_38, VAR_39, VAR_42);

      out_tx:
 FUNC_35(VAR_34);
 if (VAR_30)
  FUNC_28(&FUNC_3(VAR_30)->commit_mutex);
 if (VAR_22 != VAR_24)
  FUNC_28(&FUNC_3(VAR_22)->commit_mutex);
 FUNC_28(&FUNC_3(VAR_32)->commit_mutex);
 FUNC_28(&FUNC_3(VAR_24)->commit_mutex);

 while (VAR_41 && (VAR_33 == 0)) {
  VAR_34 = FUNC_33(VAR_30->i_sb, 0);
  FUNC_26(&FUNC_3(VAR_30)->commit_mutex);
  VAR_41 = FUNC_37(VAR_34, VAR_30, VAR_41);
  if (VAR_41 < 0) {
   FUNC_32(VAR_34, 1);
   VAR_33 = VAR_41;
  } else
   VAR_33 = FUNC_34(VAR_34, 1, &VAR_30, VAR_6);
  FUNC_35(VAR_34);
  FUNC_28(&FUNC_3(VAR_30)->commit_mutex);
 }
 if (VAR_30 && (VAR_30->i_nlink == 0))
  FUNC_29(VAR_5, VAR_30);




 if (FUNC_30(VAR_7, VAR_22)) {
  if (VAR_22->i_size > 1)
   FUNC_24(VAR_22, 0);

  FUNC_6(VAR_7, VAR_22);
 }
      out_unlock:
 if (VAR_30 && !FUNC_4(VAR_30->i_mode))
  FUNC_2(VAR_30);
      out3:
 FUNC_18(&VAR_29);
      out2:
 FUNC_18(&VAR_31);
      out1:
 FUNC_23("jfs_rename: returning %d", VAR_33);
 return VAR_33;
}
