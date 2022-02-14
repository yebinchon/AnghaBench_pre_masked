
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_ino; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct inode *VAR_1)
{
 if (VAR_1 && VAR_1->i_ino == VAR_0)
  return 1;
 return 0;
}
