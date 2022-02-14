
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct ubifs_inode {scalar_t__ creat_sqnum; scalar_t__ synced_i_size; int compr_type; int flags; int ui_size; } ;
struct ubifs_info {scalar_t__ highest_inum; int cnt_lock; scalar_t__ max_sqnum; int default_compr; int vfs_sb; } ;
struct inode {scalar_t__ i_ino; int * i_op; int i_size; int * i_fop; TYPE_1__* i_mapping; int i_ctime; int i_atime; int i_mtime; int i_flags; } ;
struct TYPE_2__ {int * a_ops; scalar_t__ nrpages; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;





 int VAR_5 ;


 scalar_t__ FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct inode*,int*,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*,struct inode*,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (struct ubifs_info*,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct ubifs_inode* FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int VAR_14 ;
 int FUNC_18 (struct ubifs_info*,char*,unsigned long,scalar_t__) ;

struct inode *FUNC_19(struct ubifs_info *VAR_15, struct inode *VAR_16,
         umode_t VAR_17)
{
 int VAR_18;
 struct inode *VAR_19;
 struct ubifs_inode *VAR_20;
 bool VAR_21 = 0;

 if (FUNC_14(VAR_16)) {
  VAR_18 = FUNC_4(VAR_16);
  if (VAR_18) {
   FUNC_15(VAR_15, "fscrypt_get_encryption_info failed: %i", VAR_18);
   return FUNC_1(VAR_18);
  }

  if (!FUNC_5(VAR_16))
   return FUNC_1(-VAR_2);

  VAR_21 = 1;
 }

 VAR_19 = FUNC_11(VAR_15->vfs_sb);
 VAR_20 = FUNC_16(VAR_19);
 if (!VAR_19)
  return FUNC_1(-VAR_1);







 VAR_19->i_flags |= VAR_6;

 FUNC_8(VAR_19, VAR_16, VAR_17);
 VAR_19->i_mtime = VAR_19->i_atime = VAR_19->i_ctime =
    FUNC_3(VAR_19);
 VAR_19->i_mapping->nrpages = 0;

 switch (VAR_17 & VAR_5) {
 case 129:
  VAR_19->i_mapping->a_ops = &VAR_11;
  VAR_19->i_op = &VAR_12;
  VAR_19->i_fop = &VAR_13;
  break;
 case 132:
  VAR_19->i_op = &VAR_9;
  VAR_19->i_fop = &VAR_10;
  VAR_19->i_size = VAR_20->ui_size = VAR_8;
  break;
 case 130:
  VAR_19->i_op = &VAR_14;
  break;
 case 128:
 case 131:
 case 134:
 case 133:
  VAR_19->i_op = &VAR_12;
  VAR_21 = 0;
  break;
 default:
  FUNC_0();
 }

 VAR_20->flags = FUNC_7(VAR_16, VAR_17);
 FUNC_17(VAR_19);
 if (FUNC_2(VAR_17))
  VAR_20->compr_type = VAR_15->default_compr;
 else
  VAR_20->compr_type = VAR_7;
 VAR_20->synced_i_size = 0;

 FUNC_12(&VAR_15->cnt_lock);

 if (VAR_15->highest_inum >= VAR_3) {
  if (VAR_15->highest_inum >= VAR_4) {
   FUNC_13(&VAR_15->cnt_lock);
   FUNC_15(VAR_15, "out of inode numbers");
   FUNC_10(VAR_19);
   FUNC_9(VAR_19);
   return FUNC_1(-VAR_0);
  }
  FUNC_18(VAR_15, "running out of inode numbers (current %lu, max %u)",
      (unsigned long)VAR_15->highest_inum, VAR_4);
 }

 VAR_19->i_ino = ++VAR_15->highest_inum;







 VAR_20->creat_sqnum = ++VAR_15->max_sqnum;
 FUNC_13(&VAR_15->cnt_lock);

 if (VAR_21) {
  VAR_18 = FUNC_6(VAR_16, VAR_19, &VAR_21, 1);
  if (VAR_18) {
   FUNC_15(VAR_15, "fscrypt_inherit_context failed: %i", VAR_18);
   FUNC_10(VAR_19);
   FUNC_9(VAR_19);
   return FUNC_1(VAR_18);
  }
 }

 return VAR_19;
}
