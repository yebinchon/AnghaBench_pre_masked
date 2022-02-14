
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_descr {int mode; int ops; scalar_t__* name; } ;
struct inode {int i_private; int i_fop; int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (struct dentry*,scalar_t__*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*,struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (int ,int) ;
 int FUNC_9 (struct dentry*) ;

__attribute__((used)) static int FUNC_10(struct dentry *VAR_2,
     const struct tree_descr *VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_2);
 struct inode *VAR_5;
 struct dentry *VAR_6;
 int VAR_7;

 FUNC_6(VAR_4);
 for (VAR_7 = 0; VAR_3->name && VAR_3->name[0]; VAR_7++, VAR_3++) {
  if (!VAR_3->name)
   continue;
  VAR_6 = FUNC_2(VAR_2, VAR_3->name);
  if (!VAR_6)
   goto out;
  VAR_5 = FUNC_8(FUNC_3(VAR_2)->i_sb,
     VAR_1 | VAR_3->mode);
  if (!VAR_5) {
   FUNC_4(VAR_6);
   goto out;
  }
  VAR_5->i_fop = VAR_3->ops;
  VAR_5->i_private = FUNC_0(VAR_4);
  FUNC_1(VAR_6, VAR_5);
  FUNC_5(VAR_4, VAR_6);
 }
 FUNC_7(VAR_4);
 return 0;
out:
 FUNC_9(VAR_2);
 FUNC_7(VAR_4);
 return -VAR_0;
}
