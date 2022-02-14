
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
union ubifs_dev_desc {int huge; int new; } ;
struct ubifs_inode {size_t data_len; int flags; int xattr; void* data; void* ui_size; void* synced_i_size; void* xattr_names; void* xattr_size; void* xattr_cnt; void* creat_sqnum; int compr_type; } ;
struct ubifs_ino_node {scalar_t__ data; int xattr_names; int xattr_size; int xattr_cnt; int creat_sqnum; int compr_type; int flags; int data_len; int size; int mode; int ctime_nsec; int ctime_sec; int mtime_nsec; int mtime_sec; int atime_nsec; int atime_sec; int gid; int uid; int nlink; } ;
struct ubifs_info {int dummy; } ;
struct super_block {struct ubifs_info* s_fs_info; } ;
struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct inode {int i_state; int i_mode; int i_ino; int * i_op; int * i_fop; TYPE_4__* i_mapping; void* i_size; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_flags; } ;
typedef void* int64_t ;
typedef int dev_t ;
struct TYPE_8__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;





 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct inode*,void*) ;
 int FUNC_5 (struct inode*,void*) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct super_block*,unsigned long) ;
 int FUNC_8 (struct inode*,int,int ) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_10 (struct ubifs_ino_node*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (void*,scalar_t__,size_t) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (struct inode*,void*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_18 (struct ubifs_info*,struct inode*) ;
 int FUNC_19 (struct ubifs_info*,struct ubifs_ino_node*) ;
 int FUNC_20 (struct ubifs_info*,char*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ubifs_inode* FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;
 int VAR_16 ;
 int FUNC_23 (struct ubifs_info*,union ubifs_key*,struct ubifs_ino_node*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct ubifs_info*,struct inode*) ;

struct inode *FUNC_26(struct super_block *VAR_17, unsigned long VAR_18)
{
 int VAR_19;
 union ubifs_key VAR_20;
 struct ubifs_ino_node *VAR_21;
 struct ubifs_info *VAR_22 = VAR_17->s_fs_info;
 struct inode *VAR_23;
 struct ubifs_inode *VAR_24;

 FUNC_2("inode %lu", VAR_18);

 VAR_23 = FUNC_7(VAR_17, VAR_18);
 if (!VAR_23)
  return FUNC_0(-VAR_2);
 if (!(VAR_23->i_state & VAR_4))
  return VAR_23;
 VAR_24 = FUNC_21(VAR_23);

 VAR_21 = FUNC_11(VAR_9, VAR_3);
 if (!VAR_21) {
  VAR_19 = -VAR_2;
  goto out;
 }

 FUNC_9(VAR_22, &VAR_20, VAR_23->i_ino);

 VAR_19 = FUNC_23(VAR_22, &VAR_20, VAR_21);
 if (VAR_19)
  goto out_ino;

 VAR_23->i_flags |= VAR_7;

 if (!FUNC_1(VAR_0))
  VAR_23->i_flags |= VAR_6;

 FUNC_17(VAR_23, FUNC_13(VAR_21->nlink));
 FUNC_5(VAR_23, FUNC_13(VAR_21->uid));
 FUNC_4(VAR_23, FUNC_13(VAR_21->gid));
 VAR_23->i_atime.tv_sec = (int64_t)FUNC_14(VAR_21->atime_sec);
 VAR_23->i_atime.tv_nsec = FUNC_13(VAR_21->atime_nsec);
 VAR_23->i_mtime.tv_sec = (int64_t)FUNC_14(VAR_21->mtime_sec);
 VAR_23->i_mtime.tv_nsec = FUNC_13(VAR_21->mtime_nsec);
 VAR_23->i_ctime.tv_sec = (int64_t)FUNC_14(VAR_21->ctime_sec);
 VAR_23->i_ctime.tv_nsec = FUNC_13(VAR_21->ctime_nsec);
 VAR_23->i_mode = FUNC_13(VAR_21->mode);
 VAR_23->i_size = FUNC_14(VAR_21->size);

 VAR_24->data_len = FUNC_13(VAR_21->data_len);
 VAR_24->flags = FUNC_13(VAR_21->flags);
 VAR_24->compr_type = FUNC_12(VAR_21->compr_type);
 VAR_24->creat_sqnum = FUNC_14(VAR_21->creat_sqnum);
 VAR_24->xattr_cnt = FUNC_13(VAR_21->xattr_cnt);
 VAR_24->xattr_size = FUNC_13(VAR_21->xattr_size);
 VAR_24->xattr_names = FUNC_13(VAR_21->xattr_names);
 VAR_24->synced_i_size = VAR_24->ui_size = VAR_23->i_size;

 VAR_24->xattr = (VAR_24->flags & VAR_10) ? 1 : 0;

 VAR_19 = FUNC_25(VAR_22, VAR_23);
 if (VAR_19)
  goto out_invalid;

 switch (VAR_23->i_mode & VAR_5) {
 case 129:
  VAR_23->i_mapping->a_ops = &VAR_13;
  VAR_23->i_op = &VAR_14;
  VAR_23->i_fop = &VAR_15;
  if (VAR_24->xattr) {
   VAR_24->data = FUNC_11(VAR_24->data_len + 1, VAR_3);
   if (!VAR_24->data) {
    VAR_19 = -VAR_2;
    goto out_ino;
   }
   FUNC_15(VAR_24->data, VAR_21->data, VAR_24->data_len);
   ((char *)VAR_24->data)[VAR_24->data_len] = '\0';
  } else if (VAR_24->data_len != 0) {
   VAR_19 = 10;
   goto out_invalid;
  }
  break;
 case 132:
  VAR_23->i_op = &VAR_11;
  VAR_23->i_fop = &VAR_12;
  if (VAR_24->data_len != 0) {
   VAR_19 = 11;
   goto out_invalid;
  }
  break;
 case 130:
  VAR_23->i_op = &VAR_16;
  if (VAR_24->data_len <= 0 || VAR_24->data_len > VAR_8) {
   VAR_19 = 12;
   goto out_invalid;
  }
  VAR_24->data = FUNC_11(VAR_24->data_len + 1, VAR_3);
  if (!VAR_24->data) {
   VAR_19 = -VAR_2;
   goto out_ino;
  }
  FUNC_15(VAR_24->data, VAR_21->data, VAR_24->data_len);
  ((char *)VAR_24->data)[VAR_24->data_len] = '\0';
  break;
 case 134:
 case 133:
 {
  dev_t VAR_25;
  union ubifs_dev_desc *VAR_26;

  VAR_24->data = FUNC_11(sizeof(union ubifs_dev_desc), VAR_3);
  if (!VAR_24->data) {
   VAR_19 = -VAR_2;
   goto out_ino;
  }

  VAR_26 = (union ubifs_dev_desc *)VAR_21->data;
  if (VAR_24->data_len == sizeof(VAR_26->new))
   VAR_25 = FUNC_16(FUNC_13(VAR_26->new));
  else if (VAR_24->data_len == sizeof(VAR_26->huge))
   VAR_25 = FUNC_3(FUNC_14(VAR_26->huge));
  else {
   VAR_19 = 13;
   goto out_invalid;
  }
  FUNC_15(VAR_24->data, VAR_21->data, VAR_24->data_len);
  VAR_23->i_op = &VAR_14;
  FUNC_8(VAR_23, VAR_23->i_mode, VAR_25);
  break;
 }
 case 128:
 case 131:
  VAR_23->i_op = &VAR_14;
  FUNC_8(VAR_23, VAR_23->i_mode, 0);
  if (VAR_24->data_len != 0) {
   VAR_19 = 14;
   goto out_invalid;
  }
  break;
 default:
  VAR_19 = 15;
  goto out_invalid;
 }

 FUNC_10(VAR_21);
 FUNC_22(VAR_23);
 FUNC_24(VAR_23);
 return VAR_23;

out_invalid:
 FUNC_20(VAR_22, "inode %lu validation failed, error %d", VAR_23->i_ino, VAR_19);
 FUNC_19(VAR_22, VAR_21);
 FUNC_18(VAR_22, VAR_23);
 VAR_19 = -VAR_1;
out_ino:
 FUNC_10(VAR_21);
out:
 FUNC_20(VAR_22, "failed to read inode %lu, error %d", VAR_23->i_ino, VAR_19);
 FUNC_6(VAR_23);
 return FUNC_0(VAR_19);
}
