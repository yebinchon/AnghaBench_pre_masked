
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {scalar_t__ d_inode; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct dentry*) ;

__attribute__((used)) static int FUNC_1(struct dentry *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 & VAR_2)
  return -VAR_0;

 if (VAR_4->d_inode)
  return 1;

 if (!VAR_5)
  return 0;

 if (VAR_5 & (VAR_1 | VAR_3))
  return 0;

 return FUNC_0(VAR_4);
}
