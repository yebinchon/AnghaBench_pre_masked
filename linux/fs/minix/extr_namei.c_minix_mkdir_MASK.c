
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*,struct inode*) ;
 struct inode* FUNC_6 (struct inode*,int,int*) ;
 int FUNC_7 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_8(struct inode * VAR_1, struct dentry *VAR_2, umode_t VAR_3)
{
 struct inode * VAR_4;
 int VAR_5;

 FUNC_2(VAR_1);

 VAR_4 = FUNC_6(VAR_1, VAR_0 | VAR_3, &VAR_5);
 if (!VAR_4)
  goto out_dir;

 FUNC_7(VAR_4, 0);

 FUNC_2(VAR_4);

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 if (VAR_5)
  goto out_fail;

 VAR_5 = FUNC_4(VAR_2, VAR_4);
 if (VAR_5)
  goto out_fail;

 FUNC_0(VAR_2, VAR_4);
out:
 return VAR_5;

out_fail:
 FUNC_1(VAR_4);
 FUNC_1(VAR_4);
 FUNC_3(VAR_4);
out_dir:
 FUNC_1(VAR_1);
 goto out;
}
