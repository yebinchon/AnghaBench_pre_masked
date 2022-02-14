
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int * i_fop; int * i_op; } ;
struct dentry {int d_parent; int d_sb; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int VAR_4 ;
 struct inode* FUNC_3 (int ) ;
 struct dentry* FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*,struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,char const*) ;
 int VAR_5 ;
 struct dentry* FUNC_9 (char const*,struct dentry*) ;
 scalar_t__ FUNC_10 (int) ;

struct dentry *FUNC_11(const char *VAR_6, struct dentry *VAR_7)
{
 struct dentry *VAR_8 = FUNC_9(VAR_6, VAR_7);
 struct inode *VAR_9;

 if (FUNC_0(VAR_8))
  return VAR_8;

 VAR_9 = FUNC_3(VAR_8->d_sb);
 if (FUNC_10(!VAR_9)) {
  FUNC_8("out of free dentries, can not create directory '%s'\n",
         VAR_6);
  return FUNC_5(VAR_8);
 }

 VAR_9->i_mode = VAR_0 | VAR_2 | VAR_1 | VAR_3;
 VAR_9->i_op = &VAR_4;
 VAR_9->i_fop = &VAR_5;


 FUNC_7(VAR_9);
 FUNC_2(VAR_8, VAR_9);
 FUNC_7(FUNC_1(VAR_8->d_parent));
 FUNC_6(FUNC_1(VAR_8->d_parent), VAR_8);
 return FUNC_4(VAR_8);
}
