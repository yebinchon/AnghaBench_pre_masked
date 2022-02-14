
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_mode; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_gid; int s_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct iattr*) ;
 int FUNC_7 (struct dentry*,struct iattr*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_7, struct iattr *VAR_8)
{
 struct inode *VAR_9 = FUNC_2(VAR_7);
 struct super_block *VAR_10 = VAR_9->i_sb;
 int VAR_11;

 VAR_11 = FUNC_7(VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 if ((VAR_8->ia_valid & VAR_3) &&
     FUNC_0(VAR_10, VAR_6) &&
     !FUNC_10(VAR_8->ia_uid, FUNC_1(VAR_10)->s_uid))
  return -VAR_4;
 if ((VAR_8->ia_valid & VAR_0) &&
     FUNC_0(VAR_10, VAR_5) &&
     !FUNC_3(VAR_8->ia_gid, FUNC_1(VAR_10)->s_gid))
  return -VAR_4;

 if ((VAR_8->ia_valid & VAR_2) &&
     VAR_8->ia_size != FUNC_4(VAR_9)) {
  VAR_11 = FUNC_8(VAR_9, VAR_8->ia_size);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_8->ia_valid & VAR_1)
  FUNC_9(VAR_9, VAR_8->ia_mode);

 FUNC_6(VAR_9, VAR_8);
 FUNC_5(VAR_9);
 return 0;
}
