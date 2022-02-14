
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_0 (int ) ;

__attribute__((used)) static struct inode *FUNC_1(struct inode *VAR_3, u32 VAR_4,
     const void *VAR_5, int VAR_6)
{
 if (VAR_4 & VAR_0)
  return VAR_3;
 else if (VAR_6 == VAR_1)
  return (struct inode *)VAR_5;
 else if (VAR_6 == VAR_2)
  return FUNC_0(((struct path *)VAR_5)->dentry);
 return ((void*)0);
}
