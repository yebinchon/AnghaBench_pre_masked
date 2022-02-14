
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_gid; int i_uid; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; int ia_gid; int ia_uid; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct iattr*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct inode*,struct iattr*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*,struct iattr*) ;
 int FUNC_12 (struct dentry*,struct iattr*) ;
 int FUNC_13 (struct inode*,scalar_t__) ;
 int FUNC_14 (int ,int ) ;

int FUNC_15(struct dentry *VAR_4, struct iattr *VAR_5)
{
 struct inode *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 VAR_7 = FUNC_12(VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (FUNC_7(VAR_6, VAR_5)) {
  VAR_7 = FUNC_1(VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 if ((VAR_5->ia_valid & VAR_3 && !FUNC_14(VAR_5->ia_uid, VAR_6->i_uid)) ||
     (VAR_5->ia_valid & VAR_0 && !FUNC_3(VAR_5->ia_gid, VAR_6->i_gid))) {
  VAR_7 = FUNC_2(VAR_6, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 if ((VAR_5->ia_valid & VAR_2) &&
     VAR_5->ia_size != FUNC_4(VAR_6)) {
  FUNC_5(VAR_6);

  VAR_7 = FUNC_6(VAR_6, VAR_5->ia_size);
  if (VAR_7)
   return VAR_7;

  FUNC_13(VAR_6, VAR_5->ia_size);
  FUNC_8(VAR_6);
 }

 FUNC_11(VAR_6, VAR_5);
 FUNC_9(VAR_6);

 if (VAR_5->ia_valid & VAR_1)
  VAR_7 = FUNC_10(VAR_6, VAR_6->i_mode);
 return VAR_7;
}
