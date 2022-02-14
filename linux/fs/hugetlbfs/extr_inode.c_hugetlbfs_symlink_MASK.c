
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 int FUNC_2 (struct dentry*) ;
 struct inode* FUNC_3 (int ,struct inode*,int,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,char const*,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3,
   struct dentry *VAR_4, const char *VAR_5)
{
 struct inode *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_3(VAR_3->i_sb, VAR_3, VAR_1|VAR_2, 0);
 if (VAR_6) {
  int VAR_8 = FUNC_6(VAR_5)+1;
  VAR_7 = FUNC_5(VAR_6, VAR_5, VAR_8);
  if (!VAR_7) {
   FUNC_1(VAR_4, VAR_6);
   FUNC_2(VAR_4);
  } else
   FUNC_4(VAR_6);
 }
 VAR_3->i_ctime = VAR_3->i_mtime = FUNC_0(VAR_3);

 return VAR_7;
}
