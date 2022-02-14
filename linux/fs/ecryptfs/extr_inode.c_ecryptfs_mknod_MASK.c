
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*,struct dentry*,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 struct dentry* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (int ,struct dentry*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct inode *VAR_0, struct dentry *VAR_1, umode_t VAR_2, dev_t VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5;
 struct dentry *VAR_6;

 VAR_5 = FUNC_3(VAR_1);
 VAR_6 = FUNC_7(VAR_5);
 VAR_4 = FUNC_9(FUNC_1(VAR_6), VAR_5, VAR_2, VAR_3);
 if (VAR_4 || FUNC_2(VAR_5))
  goto out;
 VAR_4 = FUNC_4(VAR_5, VAR_1, VAR_0->i_sb);
 if (VAR_4)
  goto out;
 FUNC_5(VAR_0, FUNC_1(VAR_6));
 FUNC_6(VAR_0, FUNC_1(VAR_6));
out:
 FUNC_8(VAR_6);
 if (FUNC_2(VAR_1))
  FUNC_0(VAR_1);
 return VAR_4;
}
