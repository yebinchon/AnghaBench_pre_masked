
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (struct inode*) ;
 struct dentry* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (struct dentry*,struct inode*,int) ;
 struct dentry* FUNC_4 (int ) ;
 struct dentry* FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_7(struct inode *VAR_2, bool VAR_3)
{
 struct dentry *VAR_4;
 struct dentry *VAR_5;

 if (!VAR_2)
  return FUNC_1(-VAR_1);
 if (FUNC_2(VAR_2))
  return FUNC_0(VAR_2);

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5)
  goto out_iput;

 VAR_4 = FUNC_4(VAR_2->i_sb);
 if (!VAR_4) {
  VAR_5 = FUNC_1(-VAR_0);
  goto out_iput;
 }

 return FUNC_3(VAR_4, VAR_2, VAR_3);

out_iput:
 FUNC_6(VAR_2);
 return VAR_5;
}
