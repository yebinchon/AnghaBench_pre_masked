
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0->i_mode)) {
  if (VAR_0->i_nlink == 2)
   return 1;
  return 0;
 }

 if (VAR_0->i_nlink == 1)
  return 1;
 return 0;
}
