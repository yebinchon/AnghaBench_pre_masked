
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;

int FUNC_4(struct inode *VAR_0)
{
 if (FUNC_2(VAR_0->i_mode))
  return 1;
 if (FUNC_0(VAR_0->i_mode))
  return 1;
 if (FUNC_1(VAR_0->i_mode))
  return !FUNC_3(VAR_0);
 return 0;
}
