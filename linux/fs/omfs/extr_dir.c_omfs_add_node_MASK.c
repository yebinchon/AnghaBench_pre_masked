
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 struct inode* FUNC_6 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2)
{
 int VAR_3;
 struct inode *VAR_4 = FUNC_6(VAR_0, VAR_2);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3 = FUNC_5(VAR_4, VAR_0->i_sb);
 if (VAR_3)
  goto out_free_inode;

 VAR_3 = FUNC_4(VAR_1, VAR_4);
 if (VAR_3)
  goto out_free_inode;

 FUNC_2(VAR_1, VAR_4);
 return 0;

out_free_inode:
 FUNC_3(VAR_4);
 return VAR_3;
}
