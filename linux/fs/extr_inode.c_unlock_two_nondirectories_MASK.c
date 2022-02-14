
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0, struct inode *VAR_1)
{
 if (VAR_0 && !FUNC_0(VAR_0->i_mode))
  FUNC_1(VAR_0);
 if (VAR_1 && !FUNC_0(VAR_1->i_mode) && VAR_1 != VAR_0)
  FUNC_1(VAR_1);
}
