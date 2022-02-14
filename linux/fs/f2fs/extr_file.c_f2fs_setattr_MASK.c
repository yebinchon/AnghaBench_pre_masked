
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_ctime; int i_mtime; int i_gid; int i_uid; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int i_acl_mode; int i_sem; void* last_disk_size; int * i_gc_rwsem; int i_mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct dentry*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct inode*,int) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct dentry*,struct iattr*) ;
 int FUNC_19 (struct dentry*,struct iattr*) ;
 int FUNC_20 (int ,int ) ;
 void* FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct inode*,int ) ;
 scalar_t__ FUNC_23 (struct inode*,struct iattr*) ;
 int FUNC_24 (struct inode*,int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (struct dentry*,struct iattr*) ;
 int FUNC_27 (struct inode*,scalar_t__) ;
 int FUNC_28 (int ,int ) ;
 scalar_t__ FUNC_29 (int ) ;
 int FUNC_30 (int *) ;

int FUNC_31(struct dentry *VAR_8, struct iattr *VAR_9)
{
 struct inode *VAR_10 = FUNC_6(VAR_8);
 int VAR_11;

 if (FUNC_29(FUNC_12(FUNC_1(VAR_10))))
  return -VAR_4;

 VAR_11 = FUNC_26(VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_18(VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_19(VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;

 if (FUNC_23(VAR_10, VAR_9)) {
  VAR_11 = FUNC_8(VAR_10);
  if (VAR_11)
   return VAR_11;
 }
 if ((VAR_9->ia_valid & VAR_3 &&
  !FUNC_28(VAR_9->ia_uid, VAR_10->i_uid)) ||
  (VAR_9->ia_valid & VAR_0 &&
  !FUNC_20(VAR_9->ia_gid, VAR_10->i_gid))) {
  FUNC_14(FUNC_1(VAR_10));
  VAR_11 = FUNC_9(VAR_10, VAR_9);
  if (VAR_11) {
   FUNC_25(FUNC_1(VAR_10),
     VAR_6);
   FUNC_17(FUNC_1(VAR_10));
   return VAR_11;
  }




  if (VAR_9->ia_valid & VAR_3)
   VAR_10->i_uid = VAR_9->ia_uid;
  if (VAR_9->ia_valid & VAR_0)
   VAR_10->i_gid = VAR_9->ia_gid;
  FUNC_15(VAR_10, 1);
  FUNC_17(FUNC_1(VAR_10));
 }

 if (VAR_9->ia_valid & VAR_2) {
  loff_t VAR_12 = FUNC_21(VAR_10);

  if (VAR_9->ia_size > FUNC_2(VAR_10)) {




   VAR_11 = FUNC_11(VAR_10);
   if (VAR_11)
    return VAR_11;
  }

  FUNC_7(&FUNC_0(VAR_10)->i_gc_rwsem[VAR_7]);
  FUNC_7(&FUNC_0(VAR_10)->i_mmap_sem);

  FUNC_27(VAR_10, VAR_9->ia_size);

  if (VAR_9->ia_size <= VAR_12)
   VAR_11 = FUNC_16(VAR_10);




  FUNC_30(&FUNC_0(VAR_10)->i_mmap_sem);
  FUNC_30(&FUNC_0(VAR_10)->i_gc_rwsem[VAR_7]);
  if (VAR_11)
   return VAR_11;

  FUNC_7(&FUNC_0(VAR_10)->i_sem);
  VAR_10->i_mtime = VAR_10->i_ctime = FUNC_5(VAR_10);
  FUNC_0(VAR_10)->last_disk_size = FUNC_21(VAR_10);
  FUNC_30(&FUNC_0(VAR_10)->i_sem);
 }

 FUNC_3(VAR_10, VAR_9);

 if (VAR_9->ia_valid & VAR_1) {
  VAR_11 = FUNC_24(VAR_10, FUNC_13(VAR_10));
  if (VAR_11 || FUNC_22(VAR_10, VAR_5)) {
   VAR_10->i_mode = FUNC_0(VAR_10)->i_acl_mode;
   FUNC_4(VAR_10, VAR_5);
  }
 }


 FUNC_15(VAR_10, 1);


 FUNC_10(FUNC_1(VAR_10), 1);

 return VAR_11;
}
