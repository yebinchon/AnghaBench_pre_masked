
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_fop; int * i_op; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_1 ;
 struct inode* FUNC_3 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static struct dentry *FUNC_4(struct dentry *VAR_3,
    const char *VAR_4)
{
 struct dentry *VAR_5;
 struct inode *VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_3->d_sb, VAR_0 | 0500);
 if (!VAR_6) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 VAR_6->i_op = &VAR_2;
 VAR_6->i_fop = VAR_1;

 FUNC_0(VAR_5, VAR_6);
 return VAR_5;
}
