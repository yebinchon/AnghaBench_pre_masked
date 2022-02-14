
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*,struct dentry*) ;

int FUNC_8(struct inode *VAR_3, struct dentry *VAR_4,
    struct inode *VAR_5, struct dentry *VAR_6,
    unsigned int VAR_7)
{
 struct inode *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_2(VAR_4);

 if (VAR_7 & ~VAR_2)
  return -VAR_0;

 if (!FUNC_6(VAR_6))
  return -VAR_1;

 if (FUNC_3(VAR_6)) {
  FUNC_7(VAR_5, VAR_6);
  if (VAR_9) {
   FUNC_4(FUNC_1(VAR_6));
   FUNC_4(VAR_3);
  }
 } else if (VAR_9) {
  FUNC_4(VAR_3);
  FUNC_5(VAR_5);
 }

 VAR_3->i_ctime = VAR_3->i_mtime = VAR_5->i_ctime =
  VAR_5->i_mtime = VAR_8->i_ctime = FUNC_0(VAR_3);

 return 0;
}
