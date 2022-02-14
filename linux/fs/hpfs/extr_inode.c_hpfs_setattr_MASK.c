
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; scalar_t__ i_size; int i_sb; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int VAR_4 ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (struct inode*,struct iattr*) ;
 int FUNC_11 (struct dentry*,struct iattr*) ;
 int FUNC_12 (struct inode*,scalar_t__) ;

int FUNC_13(struct dentry *VAR_5, struct iattr *VAR_6)
{
 struct inode *VAR_7 = FUNC_0(VAR_5);
 int VAR_8 = -VAR_3;

 FUNC_3(VAR_7->i_sb);
 if (VAR_7->i_ino == FUNC_4(VAR_7->i_sb)->sb_root)
  goto out_unlock;
 if ((VAR_6->ia_valid & VAR_2) &&
     FUNC_2(&VAR_4, VAR_6->ia_uid) >= 0x10000)
  goto out_unlock;
 if ((VAR_6->ia_valid & VAR_0) &&
     FUNC_1(&VAR_4, VAR_6->ia_gid) >= 0x10000)
  goto out_unlock;
 if ((VAR_6->ia_valid & VAR_1) && VAR_6->ia_size > VAR_7->i_size)
  goto out_unlock;

 VAR_8 = FUNC_11(VAR_5, VAR_6);
 if (VAR_8)
  goto out_unlock;

 if ((VAR_6->ia_valid & VAR_1) &&
     VAR_6->ia_size != FUNC_8(VAR_7)) {
  VAR_8 = FUNC_9(VAR_7, VAR_6->ia_size);
  if (VAR_8)
   goto out_unlock;

  FUNC_12(VAR_7, VAR_6->ia_size);
  FUNC_5(VAR_7);
 }

 FUNC_10(VAR_7, VAR_6);

 FUNC_7(VAR_7);

 out_unlock:
 FUNC_6(VAR_7->i_sb);
 return VAR_8;
}
