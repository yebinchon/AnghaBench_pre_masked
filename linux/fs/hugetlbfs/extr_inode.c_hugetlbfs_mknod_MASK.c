
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mtime; int i_ctime; int i_sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (int ,struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1,
   struct dentry *VAR_2, umode_t VAR_3, dev_t VAR_4)
{
 struct inode *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_3(VAR_1->i_sb, VAR_1, VAR_3, VAR_4);
 if (VAR_5) {
  VAR_1->i_ctime = VAR_1->i_mtime = FUNC_0(VAR_1);
  FUNC_1(VAR_2, VAR_5);
  FUNC_2(VAR_2);
  VAR_6 = 0;
 }
 return VAR_6;
}
