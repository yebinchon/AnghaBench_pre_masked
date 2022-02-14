
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_ino; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (struct inode*,struct iattr*) ;
 int FUNC_10 (struct dentry*,struct iattr*) ;
 int FUNC_11 (struct inode*,scalar_t__) ;

int
FUNC_12(struct dentry *VAR_10, struct iattr *VAR_11)
{
 struct inode *VAR_12 = FUNC_4(VAR_10);
 int VAR_13;

 FUNC_8("notify_change(%lu,0x%x)\n", VAR_12->i_ino, VAR_11->ia_valid);

 VAR_13 = FUNC_10(VAR_10, VAR_11);
 if (VAR_13)
  goto out;

 if (((VAR_11->ia_valid & VAR_5) &&
       FUNC_2(FUNC_0(VAR_12->i_sb)->s_flags, VAR_9)) ||
     ((VAR_11->ia_valid & VAR_2) &&
       FUNC_2(FUNC_0(VAR_12->i_sb)->s_flags, VAR_8)) ||
     ((VAR_11->ia_valid & VAR_3) &&
      (FUNC_0(VAR_12->i_sb)->s_flags &
       (VAR_1 | VAR_0)))) {
  if (!FUNC_2(FUNC_0(VAR_12->i_sb)->s_flags, VAR_7))
   VAR_13 = -VAR_6;
  goto out;
 }

 if ((VAR_11->ia_valid & VAR_4) &&
     VAR_11->ia_size != FUNC_5(VAR_12)) {
  VAR_13 = FUNC_6(VAR_12, VAR_11->ia_size);
  if (VAR_13)
   return VAR_13;

  FUNC_11(VAR_12, VAR_11->ia_size);
  FUNC_3(VAR_12);
 }

 FUNC_9(VAR_12, VAR_11);
 FUNC_7(VAR_12);

 if (VAR_11->ia_valid & VAR_3)
  FUNC_1(VAR_12);
out:
 return VAR_13;
}
