
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct inode*) ;

__attribute__((used)) static char FUNC_2(struct inode *VAR_0, struct inode *VAR_1)
{
 if (VAR_1 != FUNC_1(VAR_0))
  return 'l';
 if (FUNC_0(VAR_0))
  return 'u';
 else
  return 'm';
}
