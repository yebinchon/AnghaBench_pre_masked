
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_sb; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct inode *VAR_1)
{
 if (FUNC_0(VAR_1))
  return 0;
 if (FUNC_1(VAR_1) == VAR_0 ||
     !FUNC_3(VAR_1->i_sb))
  return 0;

 return FUNC_2(VAR_1, VAR_1->i_mode);
}
