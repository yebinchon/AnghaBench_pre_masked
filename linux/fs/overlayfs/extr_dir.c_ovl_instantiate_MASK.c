
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovl_inode_params {struct inode* newinode; struct dentry* upperdentry; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; int d_parent; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int ,int) ;
 struct inode* FUNC_10 (int ,struct ovl_inode_params*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (char*,struct dentry*) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_0, struct inode *VAR_1,
      struct dentry *VAR_2, bool VAR_3)
{
 struct ovl_inode_params VAR_4 = {
  .upperdentry = VAR_2,
  .newinode = VAR_1,
 };

 FUNC_9(VAR_0->d_parent, 0);
 FUNC_8(VAR_0);
 if (!VAR_3) {
  VAR_1 = FUNC_10(VAR_0->d_sb, &VAR_4);
  if (FUNC_0(VAR_1))
   return FUNC_1(VAR_1);
 } else {
  FUNC_2(FUNC_11(VAR_1) != FUNC_4(VAR_2));
  FUNC_6(VAR_2);
  FUNC_7(VAR_1);
 }

 FUNC_5(VAR_0, VAR_1);
 if (VAR_1 != VAR_4.newinode) {
  FUNC_12("overlayfs: newly created inode found in cache (%pd2)\n",
        VAR_0);
 }


 if (VAR_3)
  FUNC_3(VAR_0);

 return 0;
}
