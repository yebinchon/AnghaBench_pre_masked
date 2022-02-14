
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_gid; } ;
struct iattr {unsigned int ia_valid; int ia_mode; int ia_gid; int ia_uid; int ia_size; } ;
struct dentry {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*) ;

int FUNC_8(struct dentry *VAR_12, struct iattr *VAR_13)
{
 struct inode *VAR_14 = FUNC_3(VAR_12);
 unsigned int VAR_15 = VAR_13->ia_valid;





 if (VAR_15 & VAR_6) {
  int VAR_16 = FUNC_5(VAR_14, VAR_13->ia_size);
  if (VAR_16)
   return VAR_16;
 }


 if (VAR_15 & VAR_1)
  goto kill_priv;


 if ((VAR_15 & VAR_8) && !FUNC_2(VAR_14, VAR_13->ia_uid))
  return -VAR_10;


 if ((VAR_15 & VAR_2) && !FUNC_1(VAR_14, VAR_13->ia_gid))
  return -VAR_10;


 if (VAR_15 & VAR_4) {
  if (!FUNC_6(VAR_14))
   return -VAR_10;

  if (!FUNC_4((VAR_15 & VAR_2) ? VAR_13->ia_gid :
    VAR_14->i_gid) &&
      !FUNC_0(VAR_14, VAR_9))
   VAR_13->ia_mode &= ~VAR_11;
 }


 if (VAR_15 & (VAR_5 | VAR_0 | VAR_7)) {
  if (!FUNC_6(VAR_14))
   return -VAR_10;
 }

kill_priv:

 if (VAR_15 & VAR_3) {
  int VAR_17;

  VAR_17 = FUNC_7(VAR_12);
  if (VAR_17)
   return VAR_17;
 }

 return 0;
}
