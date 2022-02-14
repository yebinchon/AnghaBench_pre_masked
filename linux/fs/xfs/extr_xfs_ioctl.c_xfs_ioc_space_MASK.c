
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int l_whence; scalar_t__ l_start; scalar_t__ l_len; } ;
typedef TYPE_2__ xfs_flock64_t ;
typedef int uint ;
struct xfs_inode {int dummy; } ;
struct inode {int i_flags; TYPE_1__* i_sb; int i_mode; } ;
struct iattr {scalar_t__ ia_size; int ia_valid; } ;
struct file {int f_mode; int f_flags; int f_pos; } ;
typedef enum xfs_prealloc_flags { ____Placeholder_xfs_prealloc_flags } xfs_prealloc_flags ;
struct TYPE_4__ {scalar_t__ s_maxbytes; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ) ;
 int VAR_10 ;
 struct xfs_inode* FUNC_2 (struct inode*) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct xfs_inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (struct file*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct xfs_inode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (struct inode*,int*,int ) ;
 int FUNC_10 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct xfs_inode*,int) ;
 int FUNC_12 (struct xfs_inode*,int) ;
 int FUNC_13 (struct xfs_inode*,int) ;
 int FUNC_14 (int ,struct iattr*) ;
 int FUNC_15 (struct xfs_inode*,scalar_t__,scalar_t__) ;

int
FUNC_16(
 struct file *VAR_17,
 unsigned int VAR_18,
 xfs_flock64_t *VAR_19)
{
 struct inode *VAR_20 = FUNC_5(VAR_17);
 struct xfs_inode *VAR_21 = FUNC_2(VAR_20);
 struct iattr VAR_22;
 enum xfs_prealloc_flags VAR_23 = 0;
 uint VAR_24 = VAR_11 | VAR_12;
 int VAR_25;

 if (VAR_20->i_flags & (VAR_9|VAR_8))
  return -VAR_4;

 if (!(VAR_17->f_mode & VAR_6))
  return -VAR_2;

 if (!FUNC_1(VAR_20->i_mode))
  return -VAR_3;

 if (VAR_17->f_flags & VAR_7)
  VAR_23 |= VAR_16;
 if (VAR_17->f_mode & VAR_5)
  VAR_23 |= VAR_14;

 VAR_25 = FUNC_7(VAR_17);
 if (VAR_25)
  return VAR_25;

 FUNC_11(VAR_21, VAR_24);
 VAR_25 = FUNC_9(VAR_20, &VAR_24, VAR_1);
 if (VAR_25)
  goto out_unlock;

 switch (VAR_19->l_whence) {
 case 0:
  break;
 case 1:
  VAR_19->l_start += VAR_17->f_pos;
  break;
 case 2:
  VAR_19->l_start += FUNC_3(VAR_21);
  break;
 default:
  VAR_25 = -VAR_3;
  goto out_unlock;
 }







 switch (VAR_18) {
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  if (VAR_19->l_len <= 0) {
   VAR_25 = -VAR_3;
   goto out_unlock;
  }
  break;
 default:
  VAR_19->l_len = 0;
  break;
 }

 if (VAR_19->l_start < 0 ||
     VAR_19->l_start > VAR_20->i_sb->s_maxbytes ||
     VAR_19->l_start + VAR_19->l_len < 0 ||
     VAR_19->l_start + VAR_19->l_len >= VAR_20->i_sb->s_maxbytes) {
  VAR_25 = -VAR_3;
  goto out_unlock;
 }

 switch (VAR_18) {
 case 128:
  VAR_23 |= VAR_15;
  VAR_25 = FUNC_15(VAR_21, VAR_19->l_start, VAR_19->l_len);
  break;
 case 132:
 case 131:
  VAR_23 |= VAR_15;
  VAR_25 = FUNC_8(VAR_21, VAR_19->l_start, VAR_19->l_len,
      VAR_10);
  break;
 case 130:
 case 129:
  VAR_25 = FUNC_10(VAR_21, VAR_19->l_start, VAR_19->l_len);
  break;
 case 136:
 case 135:
 case 134:
 case 133:
  VAR_23 |= VAR_13;
  if (VAR_19->l_start > FUNC_3(VAR_21)) {
   VAR_25 = FUNC_8(VAR_21, FUNC_3(VAR_21),
     VAR_19->l_start - FUNC_3(VAR_21), 0);
   if (VAR_25)
    goto out_unlock;
  }

  VAR_22.ia_valid = VAR_0;
  VAR_22.ia_size = VAR_19->l_start;

  VAR_25 = FUNC_14(FUNC_4(VAR_17), &VAR_22);
  break;
 default:
  FUNC_0(0);
  VAR_25 = -VAR_3;
 }

 if (VAR_25)
  goto out_unlock;

 VAR_25 = FUNC_13(VAR_21, VAR_23);

out_unlock:
 FUNC_12(VAR_21, VAR_24);
 FUNC_6(VAR_17);
 return VAR_25;
}
