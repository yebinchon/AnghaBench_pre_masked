
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {char* i_link; int * i_op; int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dentry*,struct inode*,struct inode*) ;
 struct inode* FUNC_3 (int ,struct inode*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, struct dentry *VAR_7,
         const char *VAR_8)
{
 char *VAR_9 = FUNC_5(VAR_8, VAR_1 | VAR_4);
 struct inode *VAR_10;

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_6->i_sb, VAR_6, VAR_3 | VAR_2);
 if (FUNC_0(VAR_10)) {
  FUNC_4(VAR_9);
  return FUNC_1(VAR_10);
 }

 VAR_10->i_op = &VAR_5;
 VAR_10->i_link = VAR_9;

 FUNC_2(VAR_7, VAR_10, VAR_6);
 return 0;
}
