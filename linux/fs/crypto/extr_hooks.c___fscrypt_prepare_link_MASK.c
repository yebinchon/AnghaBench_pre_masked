
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,struct inode*) ;
 int FUNC_1 (struct inode*) ;

int FUNC_2(struct inode *VAR_3, struct inode *VAR_4,
      struct dentry *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;


 if (VAR_5->d_flags & VAR_0)
  return -VAR_1;

 if (!FUNC_0(VAR_4, VAR_3))
  return -VAR_2;

 return 0;
}
