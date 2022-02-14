
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; int * i_op; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_1 (struct dentry*,char const*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct inode* FUNC_6 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

struct dentry *FUNC_7(struct dentry *VAR_3, char const *VAR_4)
{
 struct dentry *VAR_5;
 struct inode *VAR_6;

 FUNC_4(FUNC_2(VAR_3));
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_5(FUNC_2(VAR_3));
  return ((void*)0);
 }
 VAR_6 = FUNC_6(VAR_3->d_sb, VAR_0 | 0755);
 if (!VAR_6) {
  FUNC_3(VAR_5);
  FUNC_5(FUNC_2(VAR_3));
  return ((void*)0);
 }
 VAR_6->i_op = &VAR_1;
 VAR_6->i_fop = &VAR_2;
 FUNC_0(VAR_5, VAR_6);
 FUNC_5(FUNC_2(VAR_3));
 return VAR_5;
}
