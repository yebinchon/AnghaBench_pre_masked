
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct inode*,struct dentry*,int *,int) ;
 scalar_t__ FUNC_1 (struct inode*,struct dentry*,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_2, struct dentry *VAR_3,
          unsigned int VAR_4)
{
 int VAR_5 = 1;
 if (FUNC_1(VAR_2, VAR_3, VAR_4)) {
  if (VAR_4 & VAR_1)
   return -VAR_0;
  VAR_5 = 0;
 }
 return FUNC_0(VAR_2, VAR_3, ((void*)0), VAR_5);
}
