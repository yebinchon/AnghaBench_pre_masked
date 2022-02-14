
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; char* i_link; int * i_op; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct inode* FUNC_3 (int ) ;
 int VAR_4 ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char const*,int ) ;
 int FUNC_8 (char*,char const*) ;
 struct dentry* FUNC_9 (char const*,struct dentry*) ;
 scalar_t__ FUNC_10 (int) ;

struct dentry *FUNC_11(const char *VAR_5, struct dentry *VAR_6,
          const char *VAR_7)
{
 struct dentry *VAR_8;
 struct inode *VAR_9;
 char *VAR_10 = FUNC_7(VAR_7, VAR_1);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_9(VAR_5, VAR_6);
 if (FUNC_1(VAR_8)) {
  FUNC_6(VAR_10);
  return VAR_8;
 }

 VAR_9 = FUNC_3(VAR_8->d_sb);
 if (FUNC_10(!VAR_9)) {
  FUNC_8("out of free dentries, can not create symlink '%s'\n",
         VAR_5);
  FUNC_6(VAR_10);
  return FUNC_5(VAR_8);
 }
 VAR_9->i_mode = VAR_2 | VAR_3;
 VAR_9->i_op = &VAR_4;
 VAR_9->i_link = VAR_10;
 FUNC_2(VAR_8, VAR_9);
 return FUNC_4(VAR_8);
}
