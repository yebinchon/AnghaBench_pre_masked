
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct inode *VAR_3,
  unsigned int VAR_4)
{
 if (FUNC_0(VAR_3->i_mode))
  return VAR_4;
 else if (FUNC_1(VAR_3->i_mode))
  return VAR_4 & ~VAR_0;
 else
  return VAR_4 & (VAR_2 | VAR_1);
}
