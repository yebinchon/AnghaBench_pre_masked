
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct dentry {scalar_t__ d_fsdata; int d_name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ,struct inode*,int *,struct inode*,int *) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct dentry *VAR_3,
     struct inode *VAR_4, struct dentry *VAR_5,
     unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 & ~VAR_1)
  return -VAR_0;


 if (FUNC_1(VAR_5)) {
  if (FUNC_0(VAR_5))
   VAR_7 = FUNC_3(VAR_4, VAR_5);
  else
   VAR_7 = FUNC_4(VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 VAR_7 = FUNC_2((u32)(unsigned long)VAR_3->d_fsdata,
     VAR_2, &VAR_3->d_name,
     VAR_4, &VAR_5->d_name);
 if (!VAR_7)
  VAR_5->d_fsdata = VAR_3->d_fsdata;
 return VAR_7;
}
