
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct inode*,int) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_4, struct dentry *VAR_5)
{
 if (FUNC_1(VAR_5))
  return -VAR_0;
 if (FUNC_0(VAR_4))
  return -VAR_1;
 return FUNC_2(VAR_4, VAR_3 | VAR_2);
}
