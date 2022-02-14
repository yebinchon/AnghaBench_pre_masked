
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct inode*,int ,int ,char*,size_t,int*) ;

ssize_t
FUNC_2(struct dentry *VAR_4, char *VAR_5, size_t VAR_6)
{
 struct inode *VAR_7 = FUNC_0(VAR_4);
 ssize_t VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_0,
   VAR_2, VAR_5, VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_1,
   VAR_3, VAR_5, VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;
 return VAR_8;
}
