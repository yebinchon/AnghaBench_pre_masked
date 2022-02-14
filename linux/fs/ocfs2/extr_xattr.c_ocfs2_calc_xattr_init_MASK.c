
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int umode_t ;
struct ocfs2_super {int s_mount_opt; } ;
struct ocfs2_security_xattr_info {int value_len; scalar_t__ enable; int name; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_7__ {int ip_xattr_sem; } ;
struct TYPE_6__ {scalar_t__ s_blocksize; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (struct ocfs2_super*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct inode*,struct buffer_head*,int ,char*,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct inode *VAR_7,
     struct buffer_head *VAR_8,
     umode_t VAR_9,
     struct ocfs2_security_xattr_info *VAR_10,
     int *VAR_11,
     int *VAR_12,
     int *VAR_13)
{
 int VAR_14 = 0;
 struct ocfs2_super *VAR_15 = FUNC_1(VAR_7->i_sb);
 int VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19;

 if (VAR_10->enable)
  VAR_16 = FUNC_10(FUNC_12(VAR_10->name),
           VAR_10->value_len);

 if (VAR_15->s_mount_opt & VAR_2) {
  FUNC_4(&FUNC_0(VAR_7)->ip_xattr_sem);
  VAR_18 = FUNC_11(VAR_7, VAR_8,
     VAR_5,
     "", ((void*)0), 0);
  FUNC_13(&FUNC_0(VAR_7)->ip_xattr_sem);
  if (VAR_18 > 0) {
   VAR_17 = FUNC_10(0, VAR_18);
   if (FUNC_3(VAR_9))
    VAR_17 <<= 1;
  } else if (VAR_18 != 0 && VAR_18 != -VAR_0) {
   VAR_14 = VAR_18;
   FUNC_5(VAR_14);
   return VAR_14;
  }
 }

 if (!(VAR_16 + VAR_17))
  return VAR_14;
 if (VAR_7->i_sb->s_blocksize == VAR_1 ||
     (FUNC_3(VAR_9) && FUNC_9(VAR_15)) ||
     (VAR_16 + VAR_17) > VAR_4) {
  *VAR_13 = *VAR_13 + 1;
  *VAR_12 += VAR_3;
 }

 if (VAR_7->i_sb->s_blocksize == VAR_1 &&
     (VAR_16 + VAR_17) > FUNC_2(VAR_7)) {
  *VAR_11 += 1;
  *VAR_12 += FUNC_6(VAR_7->i_sb);
 }





 if (VAR_10->enable && VAR_10->value_len > VAR_6) {
  VAR_19 = FUNC_7(VAR_7->i_sb,
       VAR_10->value_len);
  *VAR_12 += FUNC_8(VAR_7->i_sb,
          VAR_19);
  *VAR_11 += VAR_19;
 }
 if (VAR_15->s_mount_opt & VAR_2 &&
     VAR_18 > VAR_6) {

  VAR_19 = (FUNC_3(VAR_9) ? 2 : 1) *
    FUNC_7(VAR_7->i_sb, VAR_18);
  *VAR_12 += FUNC_8(VAR_7->i_sb,
          VAR_19);
  *VAR_11 += VAR_19;
 }

 return VAR_14;
}
